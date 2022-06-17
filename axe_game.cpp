#include "raylib.h"
int main()
{
    int width;
    width = 350;
    InitWindow(width,200,"Window of AxeGame");

    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(RED);
        DrawCircle(175, 100, 25, BLUE);
        EndDrawing();
    }
}