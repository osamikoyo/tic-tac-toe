//
// Created by osami on 02.02.25.
//

#include "field.h"

#include <cstdio>
#include <cstdlib>

int digit_to_int(const char d)
{
    char str[2];
    str[0] = d;
    str[1] = '\0';
    return static_cast<int>(strtol(str, nullptr, 10));
}

void field::add_move(const char move_code[4]) {
    char letter = move_code[0];
    const int x = digit_to_int(move_code[1]);
    const int y = digit_to_int(move_code[2]);

    world[x][y] = letter;
}

void field::display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%c ", world[i][j]);
            }
            printf("\n");
        }
}

