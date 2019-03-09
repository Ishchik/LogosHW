#include <vector>

class Board{

public:
    char boardGrid [9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    void drawInstructions();
    void drawBoard();
    bool checkWinner(char m_board[], char piece, int side);
};