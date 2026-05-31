#include <math.h>
#include "turtlec.h"

void levy(Turtle *t, float length, int depth){
	if( depth == 0){
		turtleForward(t, length);
		return;
	}
	if(depth > 0)
		turtleLeft(t, 45);

	levy(t, length / sqrt(2), depth - 1);
	turtleRight(t, 90);
	levy(t, length / sqrt(2), depth - 1);
	turtleLeft(t, 45);
}

int main(){
        TurtleApp *app = turtleAppCreate(800, 600, "arbol fractal");

        if(app == NULL)
                return 1;
        Turtle *t = turtleAppGetTurtle(app);

        turtlePenUp(t);
        turtleGoTo(t, 100.0f, 300.0f);
        turtlePenDown(t);
	turtleSetColor(t,148,0,211);

        turtleSetSpeed(t, 10.0f);
        levy(t,100.0f,8);

        turtleAppRun(app);
        turtleAppDestroy(app);

         return 0;
}
