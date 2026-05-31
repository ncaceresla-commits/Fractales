//ACTIVIDAD 1 ARBOL FRACTAL

#include "turtlec.h"

void fractalTree(Turtle *t, float length, int depth){
	if(depth == 0 )
		return ;
	turtleForward(t, length);
	if (depth > 3)
		turtleSetColor(t, 120, 70, 20);
	else 
		turtleSetColor(t, 0,200 , 0);

	turtleLeft(t, 30.0f);
	fractalTree(t, length * 0.7, depth - 1);

	turtleRight(t, 60.0f);
	fractalTree(t, length * 0.7, depth - 1);

	turtleLeft(t, 30.0f);
	
	turtlePenUp(t);
	turtleBackward(t, length);
	turtlePenDown(t);
}

int main(){
	TurtleApp *app = turtleAppCreate(800, 600, "arbol fractal");

	if(app == NULL)
		return 1;
	Turtle *t = turtleAppGetTurtle(app);

	turtlePenUp(t);
  	turtleGoTo(t, 400.0f, 300.0f);
  	turtlePenDown(t);

	turtleSetColor(t,120,70,20);

  	turtleSetSpeed(t, 10.0f);
  	fractalTree(t,100.0f,8);

  	turtleAppRun(app);
  	turtleAppDestroy(app);

 	 return 0;
}
