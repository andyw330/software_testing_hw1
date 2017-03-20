#include "nextdate.h"
#include "gtest/gtest.h"

// Tests nextdate().

// Boundary Value Testing
// Standard
TEST(NextdateTest, NormalBoundary) {
  EXPECT_STREQ("6/16/1812", nextdate(6, 15, 1812));
  EXPECT_STREQ("6/16/1813", nextdate(6, 15, 1813));
  EXPECT_STREQ("6/16/1912", nextdate(6, 15, 1912));
  EXPECT_STREQ("6/16/2011", nextdate(6, 15, 2011));
  EXPECT_STREQ("6/16/2012", nextdate(6, 15, 2012));
  EXPECT_STREQ("6/2/1912", nextdate(6, 1, 1912));
  EXPECT_STREQ("6/3/1912", nextdate(6, 2, 1912));
  EXPECT_STREQ("7/1/1912", nextdate(6, 30, 1912));
  EXPECT_STREQ("Invalid input date", nextdate(6, 31, 1912));
  EXPECT_STREQ("1/16/1912", nextdate(1, 15, 1912));
  EXPECT_STREQ("2/16/1912", nextdate(2, 15, 1912));
  EXPECT_STREQ("11/16/1912", nextdate(11, 15, 1912));
  EXPECT_STREQ("12/16/1912", nextdate(12, 15, 1912));
}
// Worst-Case
TEST(NextdateTest, RobustBoundary) {
  EXPECT_STREQ("1/2/1812", nextdate(1, 1, 1812));
  EXPECT_STREQ("1/2/1813", nextdate(1, 1, 1813));
  EXPECT_STREQ("1/2/1912", nextdate(1, 1, 1912));
  EXPECT_STREQ("1/2/2011", nextdate(1, 1, 2011));
  EXPECT_STREQ("1/2/2012", nextdate(1, 1, 2012));
  EXPECT_STREQ("1/3/1812", nextdate(1, 2, 1812));
  EXPECT_STREQ("1/3/1813", nextdate(1, 2, 1813));
  EXPECT_STREQ("1/3/1912", nextdate(1, 2, 1912));
  EXPECT_STREQ("1/3/2011", nextdate(1, 2, 2011));
  EXPECT_STREQ("1/3/2012", nextdate(1, 2, 2012));
  EXPECT_STREQ("1/16/1812", nextdate(1, 15, 1812));
  EXPECT_STREQ("1/16/1813", nextdate(1, 15, 1813));
  EXPECT_STREQ("1/16/1912", nextdate(1, 15, 1912));
  EXPECT_STREQ("1/16/2011", nextdate(1, 15, 2011));
  EXPECT_STREQ("1/16/2012", nextdate(1, 15, 2012));
  EXPECT_STREQ("1/31/1812", nextdate(1, 30, 1812));
  EXPECT_STREQ("1/31/1813", nextdate(1, 30, 1813));
  EXPECT_STREQ("1/31/1912", nextdate(1, 30, 1912));
  EXPECT_STREQ("1/31/2011", nextdate(1, 30, 2011));
  EXPECT_STREQ("1/31/2012", nextdate(1, 30, 2012));
  EXPECT_STREQ("2/1/1812", nextdate(1, 31, 1812));
  EXPECT_STREQ("2/1/1813", nextdate(1, 31, 1813));
  EXPECT_STREQ("2/1/1912", nextdate(1, 31, 1912));
  EXPECT_STREQ("2/1/2011", nextdate(1, 31, 2011));
  EXPECT_STREQ("2/1/2012", nextdate(1, 31, 2012));
  EXPECT_STREQ("2/2/1812", nextdate(2, 1, 1812));
  EXPECT_STREQ("2/2/1813", nextdate(2, 1, 1813));
  EXPECT_STREQ("2/2/1912", nextdate(2, 1, 1912));
  EXPECT_STREQ("2/2/2011", nextdate(2, 1, 2011));
  EXPECT_STREQ("2/2/2012", nextdate(2, 1, 2012));
  EXPECT_STREQ("2/3/1812", nextdate(2, 2, 1812));
  EXPECT_STREQ("2/3/1813", nextdate(2, 2, 1813));
  EXPECT_STREQ("2/3/1912", nextdate(2, 2, 1912));
  EXPECT_STREQ("2/3/2011", nextdate(2, 2, 2011));
  EXPECT_STREQ("2/3/2012", nextdate(2, 2, 2012));
  EXPECT_STREQ("2/16/1812", nextdate(2, 15, 1812));
  EXPECT_STREQ("2/16/1813", nextdate(2, 15, 1813));
  EXPECT_STREQ("2/16/1912", nextdate(2, 15, 1912));
  EXPECT_STREQ("2/16/2011", nextdate(2, 15, 2011));
  EXPECT_STREQ("2/16/2012", nextdate(2, 15, 2012));
  EXPECT_STREQ("error", nextdate(2, 30, 1812));
  EXPECT_STREQ("error", nextdate(2, 30, 1813));
  EXPECT_STREQ("error", nextdate(2, 30, 1912));
  EXPECT_STREQ("error", nextdate(2, 30, 2011));
  EXPECT_STREQ("error", nextdate(2, 30, 2012));
  EXPECT_STREQ("error", nextdate(2, 31, 1812));
  EXPECT_STREQ("error", nextdate(2, 31, 1813));
  EXPECT_STREQ("error", nextdate(2, 31, 1912));
  EXPECT_STREQ("error", nextdate(2, 31, 2011));
  EXPECT_STREQ("error", nextdate(2, 31, 2012));
  EXPECT_STREQ("6/2/1812", nextdate(6, 1, 1812));
  EXPECT_STREQ("6/2/1813", nextdate(6, 1, 1813));
  EXPECT_STREQ("6/2/1912", nextdate(6, 1, 1912));
  EXPECT_STREQ("6/2/2011", nextdate(6, 1, 2011));
  EXPECT_STREQ("6/2/2012", nextdate(6, 1, 2012));
  EXPECT_STREQ("6/3/1812", nextdate(6, 2, 1812));
  EXPECT_STREQ("6/3/1813", nextdate(6, 2, 1813));
  EXPECT_STREQ("6/3/1912", nextdate(6, 2, 1912));
  EXPECT_STREQ("6/3/2011", nextdate(6, 2, 2011));
  EXPECT_STREQ("6/3/2012", nextdate(6, 2, 2012));
}
