#include <gtest/gtest.h>

#include "Coord.h"

TEST(CoordTest, testConstructor) {
  Coord* c = new Coord();
  EXPECT_EQ(c->x, 0) << "x must be initalized to zero on empty constructor";
  EXPECT_EQ(c->y, 0) << "y must be initalized to zero on empty constructor";
  delete c;

  c = new Coord(2, 3);
  EXPECT_EQ(c->x, 2) << "x is initalized to the wrong number";
  EXPECT_EQ(c->y, 3) << "y is initalized to the wrong number";
  delete c;

  EXPECT_THROW({
    try {
      new Coord(-1, 0);
    } catch (const std::out_of_range &e) {
      EXPECT_STREQ("Each point must be whole number", e.what());
      throw;
    }
  }, std::out_of_range) << "No error is thrown on negative point";

  EXPECT_THROW({
    try {
      new Coord(0, -1);
    } catch (const std::out_of_range &e) {
      EXPECT_STREQ("Each point must be whole number", e.what());
      throw;
    }
  }, std::out_of_range) << "No error is thrown on negative point";

  EXPECT_THROW({
    try {
      new Coord(-10, -1);
    } catch (const std::out_of_range &e) {
      EXPECT_STREQ("Each point must be whole number", e.what());
      throw;
    }
  }, std::out_of_range) << "No error is thrown on negative point";
}
