#include <gtest/gtest.h>

#include "Board.h"
#include "Piece.h"

TEST(BoardTest, testConstructor) {
  Board* b = new Board();
  EXPECT_EQ(b->getBoard().size(), 25);
  EXPECT_EQ(b->getBoard().size(), 25);

  for (int i = 0; i < 25; i++) {
    for (int j = 0; j < 25; j++) {
      EXPECT_EQ(b->getBoard()[i][j], nullptr);
    }
  }

  EXPECT_EQ(b->getCount(), 0) <<
    "Variable 'count' must be zero on initialization";
}

TEST(BoardTest, testIncrementCount) {
  Board *b = new Board();
  b->incrementCount();
  EXPECT_EQ(b->getCount(), 1) <<
    "Method 'incrementCount' does not work properly";
}
