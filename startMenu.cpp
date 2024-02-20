#include "raylib.h"
#include "raymath.h"
#include <transition/transition.h>
#include <iostream>

class __StartMenu {
  private:
    Transition title_transition = Transition(0,100);
  public:
    void startMenu(Font font_title, Font font_selector, Texture2D texture_heart) {
      // 实现开始菜单的代码
      // 包括游戏标题、开始按钮等
      auto a = [&](double x){};
      title_transition.onUpdate = [&](double x){};
      // {DrawTextEx(font_title, "NNSans", Vector2{(float)x*140, 100}, 80, 2, (Color){255,255,255,255});};
    };
};
__StartMenu startMenu = __StartMenu();