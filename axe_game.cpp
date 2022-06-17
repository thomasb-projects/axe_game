#include "raylib.h"
int main()
{
    int width(800);
    int height(450);
    InitWindow(width,height,"Window of AxeGame");


    //circle coordinates
    int circle_x{200};
    int circle_y{200};

    //axe coordinates
    int axe_x{400};
    int axe_y{0};

    SetTargetFPS(60);
    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        //game logic begins

        DrawCircle(circle_x, circle_y, 25, BLUE);
        DrawRectangle(axe_x,axe_y,50,50,RED);
        
        //move the axe
        axe_y += 10;

        //respawn axe
        if (axe_y > 450)
        {
            axe_y = 0;
        }

        if (IsKeyDown(KEY_D) && circle_x < 800)
        {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A)  && circle_x > 0)
        {
            circle_x -= 10;
        }

        //game logic ends
        EndDrawing();
    }
}