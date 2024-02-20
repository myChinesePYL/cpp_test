#include "raylib.h"
#include "raymath.h"
#include "./startMenu.cpp"
#include <transition/transition.h>

int main() {
  InitWindow(500, 500, "NNSans");
  SetTargetFPS(60);
  Texture2D texture_heart_blue = LoadTexture("./imgs/heart.png");
  Texture2D texture_heart = LoadTexture("./imgs/heart.png");
  Font font_ut = LoadFont("./fonts/ut.ttf");
  Font font_sans = LoadFont("./fonts/sans.ttf");
  Font font_selector = LoadFont("./fonts/selector.ttf");
  Font font_miss = LoadFont("./fonts/miss.ttf");
  Sound audio_bgm = LoadSound("./audio/Xomu_Last_Dance.ogg");
  SetExitKey(KEY_Q);

  while (!WindowShouldClose()) {
    while (IsWindowReady()) break;
    BeginDrawing();

    ClearBackground(BLACK);
    startMenu.startMenu(font_selector, font_selector, texture_heart);

    DrawFPS(10,10);
    EndDrawing();
  }
  CloseWindow();

  return 0;
}