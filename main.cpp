// #include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/component/component.hpp>

int main() {
  // init
  auto screen = ftxui::ScreenInteractive::TerminalOutput();
  auto component = ftxui::Renderer([&] {
    return ftxui::vbox({
      ftxui::text("Hello"),
      ftxui::text("World"),
    });
  });

  return 0;
}