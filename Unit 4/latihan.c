#include <stdio.h>

int getSquarePerimeter(int side) {
  return 4 * side;
}

int getSquareArea(int side) {
  return side * side;
}

int getCubeVolume(int side) {
  return side * side * side;
}

int main() {
  int side;
  scanf("%d", &side);

  printf("%d\n", getSquarePerimeter(side));
  printf("%d\n", getSquareArea(side));
  printf("%d\n", getCubeVolume(__SIZEOF_DOUBLE__));
  return 0;
}