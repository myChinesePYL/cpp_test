#include "raylib.h"
#include "raymath.h"
#include "./startMenu.cpp"

int main() {
  InitWindow(500, 500, "raylib test");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(BLACK);
    startMenu();

    EndDrawing();
  }
  CloseWindow();

  return 0;
}