#include <cstring>
#include <iostream>

#include "field.h"

using namespace std;
int main(void) {
    cout << "hello in game tic-tac-toe!" << endl;
    auto *fields = new field;

    char move[4];
    while (1) {
        cout << "input your move" << endl;
        cin >> move;
        fields->add_move(move);
        fields->display();

        if (strcmp(move, "q") == 0) {
            break;
        }
    }
}