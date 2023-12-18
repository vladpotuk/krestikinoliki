#include "Game.h"
#include <iostream>

Game::Game() : currentPlayer('X'), gameWon(false) {}

void Game::switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void Game::play() {
    int row, col;

    while (!board.isFull() && !gameWon) {
        std::cout << "Current board:" << std::endl;
        board.print();

        std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        std::cin >> row >> col;

        if (board.makeMove(row, col, currentPlayer)) {
            char winner = board.checkWinner();
            if (winner != ' ') {
                gameWon = true;
                printResult(winner);
            }
            else {
                switchPlayer();
            }
        }
        else {
            std::cout << "Invalid move. Try again." << std::endl;
        }
    }

    if (!gameWon) {
        std::cout << "It's a draw!" << std::endl;
    }
}

void Game::printResult(char result) const {
    std::cout << "Player " << result << " wins!" << std::endl;
}
