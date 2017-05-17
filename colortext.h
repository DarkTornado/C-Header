/*
colortext.h
version 1.0
© 2017 Dark Tornado, All rights reserved.
*/

#pragma once
#include <stdio.h>
#include <Windows.h>
#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define GRAY 7
#define DARK_GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15

HANDLE stdHandle;

void color_init() {
    stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(stdHandle, WHITE);
}

void changeTextColor(int colorId) {
    SetConsoleTextAttribute(stdHandle, colorId);
}

void printColoredText(char* str, int colorId) {
    changeTextColor(colorId);
    printf("%s", str);
    changeTextColor(WHITE);
}

