#include <iostream>
#include <raylib.h>

const int window_height = 450;
const int window_width  = 800;
const int target_fps    = 60;

int main(int argc, char** argv) {

    InitWindow(window_width, window_height, "Raylib Test Window");

    SetTargetFPS(target_fps);

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawText("omg a window", 190, 200, 20, LIGHTGRAY);
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}