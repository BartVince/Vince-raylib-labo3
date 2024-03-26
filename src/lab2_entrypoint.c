#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){

        InitWindow(10,10,"VERY COOL WINDOW");
        float width = GetMonitorWidth(0) * 0.5;
        float height = GetMonitorHeight(0) * 0.5;
        float xPos = width - width/2 - 25;
        float yPos = height - height/2 - 25;
        SetWindowSize(width, height);
        SetWindowPosition(width - width/2, height - height/2);
        SetTargetFPS(60);
        while (!WindowShouldClose()) {
                float dt = GetFrameTime();

                if(IsKeyDown(KEY_ESCAPE)){
                     break;   
                }
                if(IsKeyDown(KEY_A)){
                     xPos += -400.0 * dt;
                }
                if(IsKeyDown(KEY_D)){
                     xPos += 400.0 * dt;
                }
                if(IsKeyDown(KEY_W)){
                     yPos += -400.0 * dt;
                     TraceLog(LOG_INFO, "%f", yPos);
                }
                if(IsKeyDown(KEY_S)){
                     yPos += 400.0 * dt;
                     TraceLog(LOG_INFO, "%f", yPos);
                }
                BeginDrawing();
                ClearBackground(BLACK);
                DrawRectangle(xPos, yPos, 50, 50, (Color){255, 255, 255, 255});
                EndDrawing();

                if (xPos > width) {
                        xPos = -50;
                }
                if (xPos < -50) {
                        xPos = width;
                }
                if (yPos > height) {
                        yPos = -50;
                }
                if (yPos < -50) {
                        yPos = height;
                }
        }
        CloseWindow();
}