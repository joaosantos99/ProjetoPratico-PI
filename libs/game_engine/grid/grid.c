#include <stdio.h>
#include <string.h>

#include "../menus/menus.h"
#include "../menus/headers/datatypes.h"
#include "../buildings/headers/datatypes.h"
#include "../units/headers/datatypes.h"

const char ASCII_179[4] = "│";
const char ASCII_180[4] = "┤";
const char ASCII_191[4] = "┐";
const char ASCII_192[4] = "└";
const char ASCII_193[4] = "┴";
const char ASCII_194[4] = "┬";
const char ASCII_195[4] = "├";
const char ASCII_196[4] = "─";
const char ASCII_197[4] = "┼";
const char ASCII_217[4] = "┘";
const char ASCII_218[4] = "┌";

const char ALPHABET[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int grid[17][26] = {};

int** get_grid() {
  return grid;
};

int add_to_grid(int value) {
  CordinatesStructure cordinates = place_in_grid_menu();

  if(grid[cordinates.column][cordinates.row] != 0) {
    return 0;
  }

  grid[cordinates.column][cordinates.row] = value;

  return 1;
};

const char* grid_handler(int index) {
  if(index == 0) {
    return "    ";
  } else if(index <= 100) {
    return FactionsBases[index].ascii;
  } else if(index <= 200) {
    return FactionsMines[index].ascii;
  } else if(index <= 300) {
    return FactionsBarracks[index].ascii;
  } else if(index <= 400) {
    return FactionsStables[index].ascii;
  } else if(index <= 500) {
    return FactionsArmoury[index].ascii;
  } else if(index <= 600) {
    return FactionsInfantry[index].ascii;
  } else if(index <= 700) {
    return FactionsCavalry[index].ascii;
  } else if(index <= 800) {
    return FactionsCavalry[index].ascii;
  } else if(index <= 900) {
    return FactionsArtillery[index].ascii;
  } else {
    return "    ";
  }
};

void render_grid() {
  int rows = 17;
  int columns = 26;

  for(int i = 1; i <= rows; i++) {

    // First row
    if(i == 1) {
      // Alphabet Line
      for(int j = 0; j < columns; j++) {
        if(j == 0) {
          printf("\n    %c   ", ALPHABET[j]);
        } else if(j > 0 && j < columns) {
          printf("  %c  ", ALPHABET[j]);
        }
      };

      // Top border
      for(int j = 1; j <= columns; j++) {
        if(j == 1) {
          printf("\n  %s%s%s%s%s%s", ASCII_218, ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_194);
        } else if(j > 1 && j < columns) {
          printf("%s%s%s%s%s", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_194);
        } else if(j == columns) {
          printf("%s%s%s%s%s", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_191);
        }
      };


      // Middle border
      for(int j = 1; j <= columns; j++) {
        if(j == 1) {
          printf("\n%d %s%s%s", i - 1, ASCII_179, grid_handler(grid[i - 1][j - 1]), ASCII_179);
        } else if(j > 1 && j <= columns) {
          printf("%s%s", grid_handler(grid[i - 1][j - 1]), ASCII_179);
        }
      };

      // Bottom border
      for(int j = 1; j <= columns; j++) {
        if(j == 1) {
          printf("\n  %s%s%s%s%s%s", ASCII_195, ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_197);
        } else if(j > 1 && j < columns) {
          printf("%s%s%s%s%s", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_197);
        } else if(j == columns) {
          printf("%s%s%s%s%s", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_180);
        }
      };

    // Middle rows
    } else if (i > 1 && i < rows) {
      // Middle border
      for(int j = 1; j <= columns; j++) {
        if(j == 1) {
          if(i - 1 < 10) {
            printf("\n%d %s%s%s", i - 1, ASCII_179, grid_handler(grid[i - 1][j - 1]), ASCII_179);
          } else {
            printf("\n%d%s%s%s", i - 1, ASCII_179, grid_handler(grid[i - 1][j - 1]), ASCII_179);
          }
        } else if(j > 0 && j <= columns) {
          printf("%s%s", grid_handler(grid[i - 1][j - 1]), ASCII_179);
        }
      };

      // Bottom border
      for(int j = 1; j <= columns; j++) {
        if(j == 1) {
          printf("\n  %s%s%s%s%s%s", ASCII_195, ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_197);
        } else if(j > 1 && j < columns) {
          printf("%s%s%s%s%s", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_197);
        } else if(j == columns) {
          printf("%s%s%s%s%s", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_180);
        }
      };

    // Last row
    } else if (i == rows) {
      // Middle border
      for(int j = 1; j <= columns; j++) {
        if(j == 1) {
          printf("\n%d%s%s%s", i - 1, ASCII_179, grid_handler(grid[i - 1][j - 1]), ASCII_179);
        } else if(j > 1 && j <= columns) {
          printf("%s%s", grid_handler(grid[i - 1][j - 1]), ASCII_179);
        }
      };

      // Bottom border
      for(int j = 1; j <= columns; j++) {
        if(j == 1) {
          printf("\n  %s%s%s%s%s%s", ASCII_192, ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_193);
        } else if(j > 1 && j < columns) {
          printf("%s%s%s%s%s", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_193);
        } else if(j == columns) {
          printf("%s%s%s%s%s\n", ASCII_196, ASCII_196, ASCII_196, ASCII_196, ASCII_217);
        }
      };
    }
  };
}