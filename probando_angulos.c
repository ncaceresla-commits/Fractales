//ACTIVIDAD 1 ARBOL FRACTAL

#include "turtlec.h"

void fractalTree(Turtle *t, float length, int depth){
	if(depth == 0 || length < 5)
		return ;
	turtleForward(t, length);

	turtleLeft(t, 20.0f);
	fractalTree(t, length * 0.6, depth - 1);

	turtleRight(t, 30.0f);
	fractalTree(t, length * 0.8, depth - 1);

	turtleLeft(t, 45.0f);
	turtleBackward(t, length);
}

int main(){
	TurtleApp *app = turtleAppCreate(800, 600, "arbol fractal");

	if(app == NULL)
		return 1;
	Turtle *t = turtleAppGetTurtle(app);

	turtlePenUp(t);
  	turtleGoTo(t, 400.0f, 300.0f);
  	turtlePenDown(t);

  	turtleSetColor(t, 255, 100, 0);
  	turtleSetSpeed(t, 10.0f);
  	fractalTree(t, 100.0, 8);

  	turtleAppRun(app);
  	turtleAppDestroy(app);

 	 return 0;
}
