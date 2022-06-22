#include "raylib.h"
int main()
{
    int width(800);
    int height(450);
    InitWindow(width,height,"Window of AxeGame");

    //collision check
    bool collision_with_axe{true};

    //circle coordinates
    int circle_x{200};
    int circle_y{200};

    //circle radius
    int circle_radius{25};

    //axe dimensions
    int axe_width{50};
    int axe_height{50};

    //axe coordinates
    int axe_x{400};
    int axe_y{0};

    //circle hitbox coordinates
    int l_circle_x{circle_x - circle_radius};
    int r_circle_x{circle_x + circle_radius};
    int u_circle_y{circle_y - circle_radius};
    int b_circle_y{circle_y + circle_radius};

    //axe hitbox coordinates
    int l_axe_x{axe_x};
    int r_axe_x{axe_x + axe_width};
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_height};

    //set axe direction
    int direction{10};

    SetTargetFPS(60);
    while (WindowShouldClose() != true)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        if(collision_with_axe == true)
        {
            DrawText("Game Over!", 370, 200, 20, RED);
        }
    
        else
        {
            //game logic begins

            DrawCircle(circle_x, circle_y, circle_radius, BLUE);
            DrawRectangle(axe_x,axe_y,axe_width,axe_height,RED);
            
            //move the axe
            axe_y += direction;

            //respawn axe
            /*
            if (axe_y > 450)
            {
                axe_y = 0;
            } */

            //axe changes direction
            if (axe_y > height || axe_y < width)
            {
                direction = -direction;
            }

            if (IsKeyDown(KEY_D) && circle_x < width)
            {
                circle_x += 10;
            }

            if (IsKeyDown(KEY_A)  && circle_x > height)
            {
                circle_x -= 10;
            }

            //game logic ends
        }
        EndDrawing();
    }
}