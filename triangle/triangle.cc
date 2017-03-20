#include "triangle.h"

// Returns triangle type. (upper bound 200)
const char* triangle(int a, int b, int c) {
  if (a < 1 || a > 200 || b < 1 || b > 200 || c < 1 || c > 200) {
    return "NotATriangle";
  }
  if (a == b && b == c)
    return "Equilateral";
  else if (a != b && a != c && b != c)
    return "Scalene";
  else
    return "Isosceles";
}
