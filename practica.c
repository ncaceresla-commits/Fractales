//ACTIVIDAD 1 ARBOL FRACTAL

#include "turtlec.h"

void fractalTree(Turtle *t, float length, int depth){
	if(depth == 0 || length < 5)
		return ;
	turtleForward(t, length);

	turtleLeft(t, 30.0f);
	fractalTree(t, length * 0.7, depth - 1);

	turtleRight(t, 60.0f);
	fractalTree(t, length * 0.7, depth - 1);

	turtleLeft(t, 30.0f);
	turtleBackward(t, length);
}

int main(){
	Turtle *app = turtleAppCreate(800, 600, "arbol fractal");

	if(app == NULL)
		return 1;
	Turtle *t = turtleAppTurtle(app);

	turtlePenUp(t);
  	turtleGoTo(t, 400.0f, 300.0f);
  	turtlePenDown(t);

  	turtleSetColor(t, 255, 100, 0);
  	turtleSetSpeed(t, 5.0f);
  	turtleForward(t, 300.0f);

  	turtleAppRun(app);
  	turtleAppDestroy(app);

 	 return 0;
}
