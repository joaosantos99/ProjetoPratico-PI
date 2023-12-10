#include <stdlib.h>

void clear() {
  int DEBUG_MODE = 0;

  if (DEBUG_MODE == 0) {
    system("clear");
  }
}