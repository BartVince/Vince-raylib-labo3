#include "entrypoint.h"
#include "raylib.h"

int R = 255;
int G = 255;
int B = 255;

void colorRNG() {
        R = GetRandomValue(75, 255);
        G = GetRandomValue(75, 255);
        B = GetRandomValue(75, 255);
}

void raylib_start(void){

        InitWindow(10,10,"VERY COOL WINDOW");
        float width = GetMonitorWidth(0) * 0.5;
        float height = GetMonitorHeight(0) * 0.5;
        float xPos = width - width/2 - 25;
        float yPos = height - height/2 - 25;

        int xDir = 1;
        int yDir = 1;


        SetWindowSize(width, height);
        SetWindowPosition(width - width/2, height - height/2);
        SetTargetFPS(60);
        while (!WindowShouldClose()) {
                float dt = GetFrameTime();

                if(IsKeyDown(KEY_ESCAPE)){
                     break;   
                }

                BeginDrawing();
                ClearBackground(BLACK);
                DrawRectangle(xPos, yPos, 50, 50, (Color){R, G, B, 255});
                EndDrawing();

                xPos += (200 * dt) * xDir;
                yPos += (200 * dt) * yDir;

                if (xPos >= width - 50) {
                        xDir *= -1;
                        colorRNG();
                }
                if (xPos <= 0) {
                        xDir *= -1;
                        colorRNG();
                }
                if (yPos >= height - 50) {
                        yDir *= -1;
                        colorRNG();
                }
                if (yPos <= 0) {
                        yDir *= -1;
                        colorRNG();
                }

        }
}