#include "triangle.h"
#include "gtest/gtest.h"


// Tests triangle(). (upper bound 200)

// Boundary Value Testing
// Normal
TEST(TriangleTest, NormalBoundary) {
  EXPECT_STREQ("Isosceles", triangle(100, 100, 1));
  EXPECT_STREQ("Isosceles", triangle(100, 100, 2));
  EXPECT_STREQ("Equilateral", triangle(100, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(100, 100, 199));
  EXPECT_STREQ("NotATriangle", triangle(100, 100, 200));
  EXPECT_STREQ("Isosceles", triangle(100, 1, 100));
  EXPECT_STREQ("Isosceles", triangle(100, 2, 100));
  EXPECT_STREQ("Equilateral", triangle(100, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(100, 199, 100));
  EXPECT_STREQ("NotATriangle", triangle(100, 200, 100));
  EXPECT_STREQ("Isosceles", triangle(1, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(2, 100, 100));
  EXPECT_STREQ("Equilateral", triangle(100, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(199, 100, 100));
  EXPECT_STREQ("NotATriangle", triangle(200, 100, 100));
}
// Robust
TEST(TriangleTest, RobustBoundary) {
  EXPECT_STREQ("NotATriangle", triangle(100, 100, 0));
  EXPECT_STREQ("Isosceles", triangle(100, 100, 1));
  EXPECT_STREQ("Isosceles", triangle(100, 100, 2));
  EXPECT_STREQ("Equilateral", triangle(100, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(100, 100, 199));
  EXPECT_STREQ("NotATriangle", triangle(100, 100, 200));
  EXPECT_STREQ("NotATriangle", triangle(100, 100, 201));

  EXPECT_STREQ("NotATriangle", triangle(100, 0, 100));
  EXPECT_STREQ("Isosceles", triangle(100, 1, 100));
  EXPECT_STREQ("Isosceles", triangle(100, 2, 100));
  EXPECT_STREQ("Equilateral", triangle(100, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(100, 199, 100));
  EXPECT_STREQ("NotATriangle", triangle(100, 200, 100));
  EXPECT_STREQ("NotATriangle", triangle(100, 201, 100));

  EXPECT_STREQ("NotATriangle", triangle(0, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(1, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(2, 100, 100));
  EXPECT_STREQ("Equilateral", triangle(100, 100, 100));
  EXPECT_STREQ("Isosceles", triangle(199, 100, 100));
  EXPECT_STREQ("NotATriangle", triangle(200, 100, 100));
  EXPECT_STREQ("NotATriangle", triangle(201, 100, 100));
}
