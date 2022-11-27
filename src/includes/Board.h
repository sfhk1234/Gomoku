#pragma once

#include <array>

#include "Piece.h"

using Board2D = std::array<std::array<Piece*, 25>, 25>;

class Board {
 public:
  Board();
  explicit Board(Board2D board);

  bool placePiece(Piece piece);

  int getCount();
  void incrementCount();
  Board2D getBoard();

 private:
  Board2D _board;
  int _count;
};
