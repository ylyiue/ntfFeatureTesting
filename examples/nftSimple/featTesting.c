

#include "nftSimple.h"

int main(int argc, char** argv) {
  int i;
  for (i = 0; i < 123; i++) {
      printf("withMarker/%d\n", i);
      char filename [20];
      sprintf(filename, "withMarker/%d", i);
      strncat(filename, ".bmp", 20);
      simpleMain(filename);
  }
  return 0;
}
