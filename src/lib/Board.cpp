#include "Board.h"
#include "Piece.h"

Board::Board() {}

Board::Board(Board2D board): _board(board) {}

bool Board::placePiece(Piece piece) {
  /**
   * @brief place piece if possible
   * @param piece a piece to place on the board
   * @return true if placed successfully, return false if not.
   */
}

int Board::getCount() {
  /**
   * @brief return private variable count
   * 
   * @return count
   */
}

void Board::incrementCount() {
  /**
   * @brief Increment variable count by 1
   */
}

Board2D Board::getBoard() {
  return this->_board;
}
