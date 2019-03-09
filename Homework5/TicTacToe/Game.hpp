#include <vector>
#include "Board.hpp"
#include "Human.hpp"

class Game {
public:
    void start();

private:
    Board board;
    Human human1;
    Human human2;

    bool winner = false;
    short int side;
    short int move_count = 0;

    int chooseSide();

    void makeMove();

    bool checkMove(int move);
};