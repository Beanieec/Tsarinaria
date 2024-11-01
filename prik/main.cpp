#include <iostream>
#include <windows.h>
#include "GameManager.h"

void DisableResize() {
    HWND consoleWindow = GetConsoleWindow();
    LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
    style &= ~WS_SIZEBOX;
    SetWindowLong(consoleWindow, GWL_STYLE, style);
    SetWindowPos(consoleWindow, nullptr, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE | SWP_FRAMECHANGED);
}



void ConsoleChange() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
    ////////////////////////////////////////////////////////////////
    COORD bufferSize = { static_cast<SHORT>(120), static_cast<SHORT>(30) };
    SetConsoleScreenBufferSize(hConsole, bufferSize);
    SMALL_RECT windowSize = { 0, 0, static_cast<SHORT>(119), static_cast<SHORT>(29) };
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
    ////////////////////////////////////////////////////////////////
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    GetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
    cfi.dwFontSize.Y = 20;
    cfi.FontFamily = FF_DONTCARE;
    wcscpy_s(cfi.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

int main() {
    DisableResize();
    ConsoleChange();
    GameManager manager;
    manager.Init();
    return 0;
}

