#include <gtest/gtest.h>

#include "Color.h"
#include "Coord.h"
#include "Piece.h"

TEST(PieceTest, testConstructor) {
  Piece *p = new Piece(Coord(2, 3), BLACK);

  EXPECT_EQ(p->coord.x, 2) << "Wrong value is initalized on variable coord";
  EXPECT_EQ(p->coord.y, 3) << "Wrong value is initalized on variable coord";
  EXPECT_EQ(p->color, BLACK) << "Wrong color is initalized on variable color";
}
