#include <iostream>
#include "Game.hpp"

void Game::start() {
    board.drawInstructions();

    chooseSide();

    do {
        makeMove();

        board.drawBoard();

        winner = board.checkWinner(board.boardGrid, human1.player_piece, human1.side);

        if (move_count >= 9) {
            break;
        }
    }while (!winner);
}

int Game::chooseSide() {
    std::cout << "Who will be the first" << std::endl;

    std::cin >> side;

    if (side == 1) {
        human1.player_piece = 'X';
        human1.side = 1;
        human2.player_piece = 'O';
        human2.side = 2;
    } else if (side == 2) {
        human2.player_piece = 'X';
        human2.side = 1;
        human1.player_piece = 'O';
        human1.side = 2;
    } else {
        std::cout << "Wrong input. Try again" << std::endl;
        chooseSide();
    }
}

void Game::makeMove() {
    if (side == 1) {
        std::cout << "Make your move Player #1" << std::endl;
        std::cin >> human1.move;

        checkMove(human1.move);

        human1.set_piece(human1.move, board.boardGrid, human1.player_piece);

        side = 2;

        move_count++;
    } else {
        std::cout << "Make your move Player #2" << std::endl;
        std::cin >> human2.move;

        checkMove(human2.move);

        human2.set_piece(human2.move, board.boardGrid, human2.player_piece);

        side = 1;

        move_count++;
    }
}

bool Game::checkMove(int move) {
    if (board.boardGrid[move - 1] != 'X' && board.boardGrid[move - 1] != 'O') {
        return true;
    }
    std::cout << "Try another cell" << std::endl;

    makeMove();
}
