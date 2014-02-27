/* Melissa Branagan
// dragonFractal.cpp
// This program generates a 2-dimensional dragon fractal in a variety of sizes and colors.
// INPUT:
// 		Menu: A right click anywhere on the screen brings up a pop-up menu with multiple options listed and explained below.
// 			  "Clear Window"		-- clears window
//			  "Redisplay Fractal"	-- clears window than draws fractal with the same number of levels as the most recent fractal
//			  "Start New Fractal"	-- clears the window and allows the user to click anywhere to begin drawing a new fractal
//			  "Create New Fractal" 	-- clears the window and asks user to input a beginning line segment length, the user can 
//									-- then click anywhere to begin drawing a new fractal
//			  "Continue With Red"	-- continues drawing all dragons in red
//			  "Continue With Blue"	-- continues drawing all dragons in blue
//			  "Continue With Green" -- continues drawing all dragons in gree
//			  "Return to Default Color Scheme"	-- continues drawing all dragons in the default scheme
//			  "Add and Additional Fractal"		-- allows user to start a new fractal, but leaves previously drawn fractals on screen 
//			  "Exit DRAGON CREATOR"	-- exit program
// 		Keyboard: "q"				-- exit program
//				  The user is also prompted to enter a number after choosing "Create New Fractal" from the drop down menu.
//				  This must be a positive number.
// OUTPUT:
//		With every additional user click, another level of a dragon fractal is displayed on the screen. 
//		The program also outputs user instructions in the terminal and messages that inform the user when the program
//		is drawing and when it is ready for more user commands.
//		If the fractal wants to fill a space that is out of bounds, the user must clear the fractal and begin again,
//		a corresponding message will appear in the terminal when this happens.
//		The default starting segment is 5 and default line segment is 1.
//		
// 
//*/
 
using namespace std;

#include <stdio.h>
// checks whether or not user is on a Mac
// to include appropriate file
#ifdef __APPLE__ 
#  include <GLUT/glut.h>
#else
#  include <GL/glut.h>
#endif
#include <iostream>


// global defaults
static bool isFirstLeftClick = true; 	// check if users first click
static float startX;					// default startX
static float startY;					// default startY
static int levelCounter = 0;      		// used to keep track of which fractal iteration we're on
static float previousX; 				// used to keep track of where the previous fractal started
static float previousY;					// used to keep track of where the previous fractal started
static int numberOfClicks = 0;			// number of clicks done by user
static bool direction = true;			// keeps track of whether fractal rotates to right (true) or left (false)
static float xseg;						// length to draw fractal (x direction)
static float yseg;						// length to draw fractal (y direction)
static float r = 1.0;					// keeps track of red variable of color
static float g = 0.0;					// keeps track of green variable of color
static float b = 0.0;					// keeps track of blue variable of color
static float startSeg = 5;				// segment length of starting level
static bool broke = false;				// whether or not fractal is out of bounds
static float lineWidth = 1;				// line width of fractal
bool RED, GREEN, BLUE = false; 			// TRUE if fractal is to be drawn in solid color (only one can be true at a time)
bool redisplay = false;					// TRUE if redisplaying a previous fractal
// constants
const int WINDOW_WIDTH = 800; 			// window width
const int WINDOW_HEIGHT = 800; 			// window height
const int LAST_LEVEL = 12;	   			// default level printed wiith warning

// return globals to defaults to redraw a fractal
void resetGlobals() {
	levelCounter = 0;
	numberOfClicks = 0;
	direction = true;
	if (RED == false && BLUE == false && GREEN == false){
		r = 1.0;
		g = 0.0; 
		b = 0.0;
	}
	broke = false;
}

// recursive function to draw a fractal
// level - int with number of final level to be drawn
// direction - true if rotate to right, false if rotate to left
// x1 - start x value		y1 - start y value
// xsegfn - how far to draw in x direction
// ysegfn - how far to draw in y direction
void drawMyDragon(int level, bool direction, float x1, float y1, float xsegfn, float ysegfn)
{	
	glColor3f (r, g, b); /// set color

	// draw when level = 0
    if (level <= 0)
    {
    	// assert drawing will be in bounds
    	if ( x1 > WINDOW_WIDTH || x1+xsegfn > WINDOW_WIDTH || y1 > WINDOW_HEIGHT || y1+ysegfn > WINDOW_HEIGHT || broke == true
    	|| x1 < 0 || y1 < 0){
    		if (broke == false){
    			broke = true;
    			cout << "I'm sorry but your fractal is too big. Please clear and begin again." << endl;
    		}
		} else { // draw!
			glLineWidth(lineWidth);
    		glBegin(GL_LINES);
				glVertex2f(x1,y1);
				glVertex2f(x1+xsegfn, y1+ysegfn);
			glEnd();
			// reset for next prep
			previousX = x1+xsegfn;
			previousY = y1+ysegfn;
		}
    }
    else if (broke == false) 
    {	// check for performance, warn user if too slow
    	if (level > LAST_LEVEL && redisplay == false) {
    		numberOfClicks--;
    		levelCounter--;
    		string reply;
    		cout << "Wow! That's a lot of levels, we suggest you do something else. " << endl;
    		cout << "Continue with this dragon (yes/no)?" << endl;
    		cin >> reply;
    		while (reply != "yes" && reply != "no"){  // determine whether to continue drawing
    			cout << endl << "Please respond 'yes' or 'no': ";
    			cin >> reply;
    			cout << endl;
    		}
    		if (reply == "no"){
    			broke = true;
    		} else {
    			numberOfClicks++;
    			levelCounter++;
    			cout << "Drawing..." << endl;
    		}
    	}
    	
    	if (!broke){
	    	float newx = (float)(xsegfn / 2);
    		float newy = (float)(ysegfn / 2);
       		float xsegfn2 = -newy + newx;
        	float ysegfn2 = newx + newy;
       		if (direction)  { // turn right
            	drawMyDragon(level - 1, true, x1, y1, xsegfn2, ysegfn2);
            	float x2 = x1 + xsegfn2;
            	float y2 = y1 + ysegfn2;
            	drawMyDragon(level - 1, false, x2, y2, ysegfn2, -xsegfn2);
        	}
        	else { // turn left
            	drawMyDragon(level - 1, true, x1, y1, ysegfn2, -xsegfn2);
            	float x2 = x1 + ysegfn2;
            	float y2 = y1 - xsegfn2;
            	drawMyDragon(level - 1, false, x2, y2, xsegfn2, ysegfn2);
        	}
        }
    }

}

void display ()
{
  int i;

  glClear (GL_COLOR_BUFFER_BIT);

  glFlush ();
}

// clear screen & reset broke
void clearScreen(){
	glClearColor (0.8, 0.8, 0.8, 0.0);
 	glClear (GL_COLOR_BUFFER_BIT);
 	broke = false;
 	glFlush();
}

// function called after left mouse click
void beginFractal(int x1, int y1){
	if (isFirstLeftClick) { // is this the starting point
		
		isFirstLeftClick = false;
		levelCounter = 0;
		
		// necessary for redisplay
		startX = x1;
		startY = y1;
		previousX = x1;
		previousY = WINDOW_HEIGHT - y1;
	
		
		xseg = 0;
		yseg = startSeg; 
		numberOfClicks++;
		levelCounter++;
		drawMyDragon(levelCounter, direction, previousX, previousY, xseg, yseg);
		glFlush();
	}
	else {
		direction = !direction; // rotate different direction every time
		// set colors
		if (RED == false && BLUE == false && GREEN == false ){
			if ( g <= .95){
				g = g + .05;
			} else {
				g = 0;
			}
			if ( b >= 0) {
				b = b - .05;
			} else {
				b = 1;
			}
		}
		levelCounter++;
		
		// switch directions to rotate 90 degrees and increase dragon
		float tempseg;
		tempseg = xseg*2;
		xseg = yseg;
		yseg = -tempseg;		

		drawMyDragon(levelCounter, direction, previousX, previousY, xseg, yseg);
		numberOfClicks++;
		glFlush();
	}
   // glEnd();
}

void mymenu (int value)
// Define actions for the menu based on values given in initmenu()
{
  switch (value) {
  case 1: cout << "Clearing Screen..." << endl; 
  	clearScreen();
  	resetGlobals();
  	isFirstLeftClick = true;
    break;
  case 2: cout << "Redisplaying previous Fractal" << endl;
  	int i;
  	i = numberOfClicks;
  	clearScreen();
  	resetGlobals();
  	levelCounter=0;
  	numberOfClicks = -1;
  	isFirstLeftClick = true;
  	while (i > 0){
  		//numberOfClicks++;
  		redisplay = true;
  		beginFractal(startX, startY);
  		i--;
  	}	
  	redisplay = false;
  	cout << "Fractal redisplayed; do something else!" << endl;
  	break;
  case 3: cout << "Starting new fractal with previous parameters." << endl;
  	clearScreen();
  	resetGlobals();
  	isFirstLeftClick = true;
  	break;
  case 4: cout << "Enter a starting segment length for a new fractal: ";
  		cin >> startSeg;
  		cout << "Enter a line width for the fractal (1 recommended): ";
  		cin >>lineWidth;
  		clearScreen();
  		resetGlobals();
  		isFirstLeftClick = true;
      break;
  case 5: cout << "All drawing will now be red." << endl;
  		RED = true; GREEN = BLUE = false;
  		r = 1.0; g = 0.0; b = 0.0;
  	  break;
  case 6: cout << "All drawing will now be blue." << endl;
  		BLUE = true; RED = GREEN = false;
  		 r = 0.0; g = 0.0; b = 1.0;
  	  break;
  case 7: cout << "All drawing will not be green." << endl;
  		GREEN = true; RED = BLUE = false;
 		 r = 0.0; g = 1.0; b = 0.0;
  	  break;
  case 8: cout << "Drawing return to original fade color scheme." << endl;
  		GREEN = RED = BLUE = false;
  		r = 1.0; g = 0.0; b = 0.0;
  	  break;
  case 9: cout << "Enter a starting segment length for a new fractal: ";
  		cin >> startSeg;
  		cout << "Enter a line width for the fractal (1 recommended): ";
  		cin >>lineWidth;
  		resetGlobals();
  		isFirstLeftClick = true;
  	break;
  case 10: cout << "Goodbye. Fractal again soon." << endl;
  	exit(1);
  }
}

void initmenu ()
// set up menu
{
  glutCreateMenu (mymenu);       // register callback function
  glutAddMenuEntry ("Clear Window", 1);
  glutAddMenuEntry ("Redisplay Fractal", 2);
  glutAddMenuEntry ("Start New Fractal", 3);
  glutAddMenuEntry ("Create New Fractal", 4);
  glutAddMenuEntry ("Continue With Red", 5);
  glutAddMenuEntry ("Continue With Blue", 6);
  glutAddMenuEntry ("Continue With Green", 7);
  glutAddMenuEntry ("Return to Default Color Scheme", 8);
  glutAddMenuEntry ("Add an Additional Fractal", 9);
  glutAddMenuEntry ("Exit DRAGON CREATOR", 10);
  glutAttachMenu (GLUT_RIGHT_BUTTON);
}



void myMouse (int button, int state, int x, int y)
/* Function to draw points and lines using the mouse 
 * Left button - draws point 
 * Right button - draws line from previous right button point
 * Center (both) button - stops line drawing 
 *
 * Note that mouse y position is 0 at TOP of window
 * Note also that if the window gets covered, OpenGL won't remember 
 * all the lines/points that were drawn previously 
 */
{

  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
  		if (!broke)
  			cout << "Drawing new level..." << endl;
  		beginFractal(x, y);
  		if (!broke)
  			cout << "Level drawing complete, do something else!" << endl;

  } 
  else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		initmenu();
  }
}

         
void displayInstructions(){
	cout << "Hello and welcome to the DRAGON CREATOR!" << endl;
	cout << "Click anywhere to start creating your very own dragon!" << endl;
	cout << "If you want to specify a size for your dragon, right click and choose" << endl;
	cout << "'Create New Fractal' to be prompted for a segment length and line width." << endl;
	cout << "You must enter a positive number for the segment length and positive integer" << endl;
	cout << "for the line width, otherwise the program will crash." << endl;
	cout << "If you want to restart your dragon using the same segment length and width, " << endl;
	cout << "choose 'Start New Fractal' from the menu and click your desired starting point." << endl;
	cout << "If you do not specify segment length and wiysegfnh, defaults of 100 and 1 will be used. "<< endl;
	cout << "If you clear your screen, but want to display the previous dragon, access the menu" << endl;
	cout << "and choose 'Redisplay Fractal'" << endl;
	cout << "To begin a new dragon, but leave the previous dragon on the screen, access the menu" << endl;
	cout << "and choose 'Add an Additional Fractal." << endl;
	cout << "When you are finished with the DRAGON CREATOR, hit 'q' to exit." << endl;
	
}


void init ()
{
  glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
  glClearColor (0.8, 0.8, 0.8, 0.0);
  glClear (GL_COLOR_BUFFER_BIT);

  glMatrixMode (GL_PROJECTION);
  glLoadIdentity();
   
  gluOrtho2D (0.0, WINDOW_WIDTH, 0.0, WINDOW_HEIGHT);
}

void keyboard (unsigned char key, int x, int y)
{
   switch (key) {
      case 'q': cout << "Goodbye. Fractal again soon." << endl;
      exit (1);
   }
}
int main (int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

  glutInitWindowSize (WINDOW_WIDTH, WINDOW_HEIGHT); 

  glutInitWindowPosition (100, 100);

  glutCreateWindow ("Dragon Fractal");
  
  displayInstructions();

  init ();

  glutDisplayFunc(display); 

  // mouse function registration
  glutMouseFunc (myMouse);
  glutKeyboardFunc (keyboard);
  glutMainLoop();

  return 0; 
}

