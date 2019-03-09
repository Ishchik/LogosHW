#include <iostream>
#include "Board.hpp"

void Board::drawInstructions() {
    std::cout << "To place the piece you have to enter the number 1-9" << std::endl;
    drawBoard();
}

void Board::drawBoard(){
    std::cout << boardGrid[0] << "|" << boardGrid[1] << "|" << boardGrid[2] << std::endl;
    std::cout << "-+-+-" << std::endl;
    std::cout << boardGrid[3] << "|" << boardGrid[4] << "|" << boardGrid[5] << std::endl;
    std::cout << "-+-+-" << std::endl;
    std::cout << boardGrid[6] << "|" << boardGrid[7] << "|" << boardGrid[8] << std::endl;
}

bool Board::checkWinner(char m_board[], char piece, int side) {
    if(piece == m_board[0] && m_board[0] == m_board[1] && m_board[1] == m_board[2]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else if(piece == m_board[3] && m_board[3] == m_board[4] && m_board[4] == m_board[5]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else if(piece == m_board[6] && m_board[6] == m_board[7] && m_board[7] == m_board[8]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else if(piece == m_board[0] && m_board[0] == m_board[3] && m_board[3] == m_board[6]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else if(piece == m_board[1] && m_board[1] == m_board[4] && m_board[4] == m_board[7]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else if(piece == m_board[2] && m_board[2] == m_board[5] && m_board[5] == m_board[8]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else if(piece == m_board[0] && m_board[0] == m_board[4] && m_board[4] == m_board[8]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else if(piece == m_board[2] && m_board[2] == m_board[4] && m_board[4] == m_board[6]){
        std::cout << "Player #" << side << "has won. Congratulations" << std::endl;
        return true;
    }
    else{
        return false;
    }
}

