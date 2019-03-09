#include <iostream>
#include "Human.hpp"

int Human::set_piece(int move, char board[], char piece) {
    board[move - 1] = piece;

    return move;
}
