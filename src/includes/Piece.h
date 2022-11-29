#pragma once

#include "Color.h"
#include "Coord.h"

struct Piece {
  Piece(Coord coord, Color color);

  Coord coord;
  Color color;
};
