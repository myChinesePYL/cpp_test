#include "ANSIControl.hpp"
#include <cstdio>
#include <string>

void ansic::SetCursorTo(int x, int y) {std::printf("\033[%i;%iH", y, x);};
void ansic::CursorToHome() {std::printf("\033[H");};
void ansic::SaveCursor() {std::printf("\033[7");};
void ansic::RecoverCursor() {std::printf("\033[H");};
void ansic::LeftMove() {std::printf("\033[?");};
void ansic::HideCursor() {std::printf("\033[?25l");};
void ansic::ShowCursor() {std::printf("\033[?25h");};
void ansic::ClearToEnd() {std::printf("\033[K");};
void ansic::ClearStartToCursor() {std::printf("\033[1K");};
void ansic::ClearRow() {std::printf("\033[2K");};

// ansic::Text
void ansic::Text::ResetAttribute() {std::printf("\033[1m");};
void ansic::Text::ResetAttribute(std::string text) {std::printf("\033[1m%s\033[1m", text.data());};
void ansic::Text::Bold() {std::printf("\033[2m");};
void ansic::Text::Bold(std::string text) {std::printf("\033[1m%s\033[1m", text.data());};
void ansic::Text::Deepen() {std::printf("\033[3m");};
void ansic::Text::Deepen(std::string text) {std::printf("\033[1m%s\033[1m", text.data());};
void ansic::Text::Underline() {std::printf("\033[4m");};
void ansic::Text::Underline(std::string text) {std::printf("\033[1m%s\033[1m", text.data());};
void ansic::Text::Blink() {std::printf("\033[5m");};
void ansic::Text::Blink(std::string text) {std::printf("\033[1m%s\033[1m", text.data());};
void ansic::Text::Reverse() {std::printf("\033[7m");};
void ansic::Text::Reverse(std::string text) {std::printf("\033[1m%s\033[1m", text.data());};
void ansic::Text::Invisibility() {std::printf("\033[8m");};
void ansic::Text::Invisibility(std::string text) {std::printf("\033[1m%s", text.data());};

// ansic::Color
void ansic::Color::Black() {std::printf("\033[30m");};
void ansic::Color::Black(std::string text) {std::printf("\033[30m%s\033[39m", text.data());};
void ansic::Color::Red() {std::printf("\033[31m");};
void ansic::Color::Red(std::string text) {std::printf("\033[31m%s\033[39m", text.data());};
void ansic::Color::Green() {std::printf("\033[32m");};
void ansic::Color::Green(std::string text) {std::printf("\033[32m%s\033[39m", text.data());};
void ansic::Color::Yellow() {std::printf("\033[33m");};
void ansic::Color::Yellow(std::string text) {std::printf("\033[33m%s\033[39m", text.data());};
void ansic::Color::Blue() {std::printf("\033[34m");};
void ansic::Color::Blue(std::string text) {std::printf("\033[34m%s\033[39m", text.data());};
void ansic::Color::Magenta() {std::printf("\033[35m");};
void ansic::Color::Magenta(std::string text) {std::printf("\033[35m%s\033[39m", text.data());};
void ansic::Color::Cyan() {std::printf("\033[36m");};
void ansic::Color::Cyan(std::string text) {std::printf("\033[36m%s\033[39m", text.data());};
void ansic::Color::White() {std::printf("\033[37m");};
void ansic::Color::White(std::string text) {std::printf("\033[37m%s\033[39m", text.data());};
void ansic::Color::Reset() {std::printf("\033[39m");};
void ansic::Color::Reset(std::string text) {std::printf("\033[39m%s", text.data());};

// 背景色
void ansic::Color::bg_Black() {std::printf("\033[40m");};
void ansic::Color::bg_Black(std::string text) {std::printf("\033[40m%s\033[49m", text.data());};
void ansic::Color::bg_Red() {std::printf("\033[41m");};
void ansic::Color::bg_Red(std::string text) {std::printf("\033[41m%s\033[49m", text.data());};
void ansic::Color::bg_Green() {std::printf("\033[42m");};
void ansic::Color::bg_Green(std::string text) {std::printf("\033[42m%s\033[49m", text.data());};
void ansic::Color::bg_Yellow() {std::printf("\033[43m");};
void ansic::Color::bg_Yellow(std::string text) {std::printf("\033[43m%s\033[49m", text.data());};
void ansic::Color::bg_Blue() {std::printf("\033[44m");};
void ansic::Color::bg_Blue(std::string text) {std::printf("\033[44m%s\033[49m", text.data());};
void ansic::Color::bg_Magenta() {std::printf("\033[45m");};
void ansic::Color::bg_Magenta(std::string text) {std::printf("\033[45m%s\033[49m", text.data());};
void ansic::Color::bg_Cyan() {std::printf("\033[46m");};
void ansic::Color::bg_Cyan(std::string text) {std::printf("\033[46m%s\033[49m", text.data());};
void ansic::Color::bg_White() {std::printf("\033[47m");};
void ansic::Color::bg_White(std::string text) {std::printf("\033[47m%s\033[49m", text.data());};
void ansic::Color::bg_Reset() {std::printf("\033[49m");};
void ansic::Color::bg_Reset(std::string text) {std::printf("\033[49m%s", text.data());};

void ansic::SaveScreen() {std::printf("\033[?47h");};
void ansic::ReverseScreen() {std::printf("\033[?47h");};