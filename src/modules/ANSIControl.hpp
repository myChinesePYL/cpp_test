#include <string>

class ansic {
  public:
    void static SetCursorTo(int x, int y);
    void static CursorToHome();
    void static SaveCursor();
    void static RecoverCursor();
    void static HideCursor();
    void static ShowCursor();
    void static ClearToEnd();
    void static ClearStartToCursor();
    void static ClearRow();
    class Text {
      public:
        void static ResetAttribute();
        void static ResetAttribute(std::string text);
        void static Bold();
        void static Bold(std::string text);
        void static Deepen();
        void static Deepen(std::string text);
        void static Underline();
        void static Underline(std::string text);
        void static Blink();
        void static Blink(std::string text);
        void static Reverse();
        void static Reverse(std::string text);
        void static Invisibility();
        void static Invisibility(std::string text);
    };
    class Color {
      public:
        void static Black();
        void static Black(std::string text);
        void static Red();
        void static Red(std::string text);
        void static Green();
        void static Green(std::string text);
        void static Yellow();
        void static Yellow(std::string text);
        void static Blue();
        void static Blue(std::string text);
        void static Magenta();
        void static Magenta(std::string text);
        void static Cyan();
        void static Cyan(std::string text);
        void static White();
        void static White(std::string text);
        void static Reset();
        void static Reset(std::string text);

        // 背景色
        void static bg_Black();
        void static bg_Black(std::string text);
        void static bg_Red();
        void static bg_Red(std::string text);
        void static bg_Green();
        void static bg_Green(std::string text);
        void static bg_Yellow();
        void static bg_Yellow(std::string text);
        void static bg_Blue();
        void static bg_Blue(std::string text);
        void static bg_Magenta();
        void static bg_Magenta(std::string text);
        void static bg_Cyan();
        void static bg_Cyan(std::string text);
        void static bg_White();
        void static bg_White(std::string text);
        void static bg_Reset();
        void static bg_Reset(std::string text);
    };
    void static SaveScreen();
    void static ReverseScreen();
    void static ClearScreen();
    void static MoveCursorUp(int y);
    void static MoveCursorLeft(int x);
    void static MoveCursorDown(int y);
    void static MoveCursorRight(int x);
};