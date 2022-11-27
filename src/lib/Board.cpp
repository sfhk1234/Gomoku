#include "Board.h"
#include "Piece.h"

Board::Board() { this->_count = 0; }

Board::Board(Board2D board) : _board(board), _count(0) {}

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
   * @return count
   */
  return this->_count;
}

void Board::incrementCount() {
  /**
   * @brief Increment variable count by 1
   */
  this->_count++;
}

Board2D Board::getBoard() {
  return this->_board;
}
