#include "triangle.h"
#include "gtest/gtest.h"


// Tests triangle().
TEST(TriangleTest, JustTesting) {
  EXPECT_STREQ("NotATriangle", triangle(1, 2, 3));
}
