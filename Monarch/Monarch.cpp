// Standard library includes
#include <stdio.h>
#include <stdlib.h>

// Raylib includes
#include "raylib.h"
#include "raymath.h"
#include "rlgl.h"
#define RINI_IMPLEMENTATION
#include "rini.h"


#if defined(PLATFORM_DESKTOP)
#define GLSL_VERSION            330
#else   // PLATFORM_ANDROID, PLATFORM_WEB
#define GLSL_VERSION            100
#endif


enum LevelStatus {
	MainMenu,
	Playing,
	Closing
};

int main(void) {
	// Setup the main window
	InitWindow(800, 600, "Monarch Game");
	SetTargetFPS(60);

	// Main game loop
	while (!WindowShouldClose()) {
		// Handle scenes and rendering here
	}
	
	// De-Initialization
	CloseWindow();
}