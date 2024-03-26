#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){
        InitWindow(10,10,"VERY COOL WINDOW");
        float width = 650;
        float height = 650;
        SetWindowSize(width, height);
        SetWindowPosition(width - width/2, height - height/2);
        SetTargetFPS(60);
        while (!WindowShouldClose()) {
                float dt = GetFrameTime();

                BeginDrawing();
                ClearBackground((Color){182,219,245,255});
                DrawRectangle(0, 400, 650, 650, (Color){189,215,140,255}); // Gazon
                 DrawTriangle((Vector2){700, 400}, (Vector2){400, 220},(Vector2){300, 400},(Color){201,199,194,255}); // Montagne - Priority 3
                DrawTriangle((Vector2){450, 400}, (Vector2){300, 190},(Vector2){160, 400},(Color){175,174,168,255}); // Montagne - Priority 2
                DrawTriangle((Vector2){370, 400}, (Vector2){135, 240},(Vector2){0, 400},(Color){131,129,122,255}); // Montagne - Priority 1
                DrawRectangle(360, 400, 130, 250, (Color){138,193,223,255}); // Riviere
                DrawCircle(500, 100, 60, (Color){255,228,151,255}); // Soleil
                DrawRectangle(130, 470, 130, 70, (Color){192,122,117,255}); // Maison - Corp
                DrawTriangle((Vector2){270, 470}, (Vector2){195, 400},(Vector2){120, 470},(Color){55,15,11,255}); // Maison - Toit
                DrawRectangle(210, 500, 20, 40, (Color){60,13,18,255}); // Maison - Porte
                EndDrawing();
                
        }
}