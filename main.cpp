#include "raylib.h"
#include "raymath.h"
#include "./startMenu.cpp"

int main() {
  InitWindow(500, 500, "raylib test");
  SetTargetFPS(60);
  // 加载必要文件
  LoadTexture("./imgs/heart_blue.png");
  LoadTexture("./imgs/heart.png");
  LoadFont("./fonts/ut.ttf");
  LoadFont("./fonts/sans.ttf");

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(BLACK);
    startMenu();

    EndDrawing();
  }
  CloseWindow();

  return 0;
}