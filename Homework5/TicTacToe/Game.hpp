#ifndef TICTACTOE_GAME_HPP
#define TICTACTOE_GAME_HPP

#include <vector>
#include "Human.hpp"
#include "Board.hpp"

class Game {
private:
    bool currentSide = false;
    char playingBoard;
    int position = 0;
public:
    void run(){
        Board board;
        Human human;

        board.drawInstruction(playingBoard);
        human.chooseSide();
        do{
            board.winner = true;
            board.drawBoard(playingBoard);
        }while(!board.winner);
        //initializes start

        //loading instructions...   (Board)
        //draw grid (Board)
        //choose side (Player)
        //check for winner  (Board)
        //set char  (Human)
    }




};


#endif //TICTACTOE_GAME_HPP
