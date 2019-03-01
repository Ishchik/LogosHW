#ifndef TICTACTOE_BOARD_HPP
#define TICTACTOE_BOARD_HPP

#include <vector>
#include "Human.hpp"

class Board {
public:
    bool winner = false;

    void drawBoard(char& boardGrid);
    void drawInstruction(char& boardGrid);
    //draw grid
    //empty grid
    //check for winner combination
    //set cell X||O
};


#endif //TICTACTOE_BOARD_HPP
