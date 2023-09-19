#include "cprocessing.h"
#include "mainmenu.h"

void Main_Menu_Init(void)
{
	CP_Graphics_ClearBackground(CP_Color_Create(105, 105, 105, 255));
	Draw_Rectangle();

}

void Main_Menu_Update(void)
{

}

void Main_Menu_Exit(void)
{

}

void Draw_Rectangle(void)
{

	////Alex:This draws a red circle at the location of mouse

	//// Create the color red
	//CP_Color myColor = CP_Color_Create(255, 0, 0, 255);

	////This fills in color sets ALL DRAWN SHAPES to follow this color.
	//// Set the shape color to red
	//CP_Settings_Fill(myColor);

	//// draw a circle at the mouse position
	//CP_Graphics_DrawCircle(CP_Input_GetMouseX(), CP_Input_GetMouseY(), 20.0f);

	// set the rectangle drawing mode to CENTER
	CP_Settings_RectMode(CP_POSITION_CENTER);

	// draw a rectangle at the center of the screen, half the size of the screen
	CP_Graphics_DrawRect(CP_System_GetWindowWidth() / 2.0f, CP_System_GetWindowHeight() / 2.0f,
		CP_System_GetWindowWidth() / 5.0f, CP_System_GetWindowHeight() / 5.0f);

	CP_Graphics_DrawRect(CP_System_GetWindowWidth() / 2.0f, CP_System_GetWindowHeight() / -4.0f,
		CP_System_GetWindowWidth() / 5.0f, CP_System_GetWindowHeight() / 5.0f);
}
