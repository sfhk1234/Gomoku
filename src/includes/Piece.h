#pragma once

#include "Color.h"
#include "Coord.h"

struct Piece {
  Piece(Coord _coord, Color _color): coord(_coord), color(_color) {}

  Coord coord;
  Color color;
};
