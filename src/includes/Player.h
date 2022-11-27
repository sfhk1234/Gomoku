#pragma once

#include <string>
#include <vector>

#include "Color.h"
#include "Piece.h"

class Player {
  std::string name;
  std::vector<Piece> pieces;
  Color color;
};
