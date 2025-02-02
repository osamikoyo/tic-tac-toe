//
// Created by osami on 02.02.25.
//

#ifndef FIELD_H
#define FIELD_H

class field {
public:
    char world[3][3];
    void add_move(const char move_code[4]);
    void display();
};



#endif //FIELD_H
