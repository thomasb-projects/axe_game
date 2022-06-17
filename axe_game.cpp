#include "raylib.h"
int main()
{
    int width(350);
    int height(200);
    InitWindow(width,height,"Window of AxeGame");

    int circle_x{175};
    int circle_y{100};


    SetTargetFPS(60);
    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        //game logic begins

        DrawCircle(circle_x, circle_y, 25, BLUE);
        
        if (IsKeyDown(KEY_D))
        {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A))
        {
            circle_x = circle_x - 10;
        }

        //game logic ends
        EndDrawing();
    }
}