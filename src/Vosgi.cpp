#include "Vosgi.h"

Vosgi::Vosgi(int screenWidth, int screenHeight)
        : screenWidth(screenWidth), screenHeight(screenHeight) {
    InitWindow(screenWidth, screenHeight, {});
    SetTargetFPS(60);
}

Vosgi::~Vosgi() {
    CloseWindow();
}

void Vosgi::run() {
    onInit();

    while (!WindowShouldClose()) {
        onUpdate();

        BeginDrawing();
        ClearBackground(RAYWHITE);
        onDraw();
        EndDrawing();
    }

    onClose();
}
