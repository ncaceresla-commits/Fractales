
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
	TurtleApp *app = turtleAppCreate(800, 600, "factor_reduccion");

	if(app == NULL)
		return 1;
	Turtle *t = turtleAppGetTurtle(app);

	turtlePenUp(t);
  	turtleGoTo(t, 100.0f, 300.0f);
  	turtlePenDown(t);

  	turtleSetColor(t, 255, 100, 0);
  	turtleSetSpeed(t, 10.0f);
  	fractalTree(t,100.0f,8);

  	turtleAppRun(app);
  	turtleAppDestroy(app);

 	 return 0;
}
