#ifndef MENUS_DATA_TYPES_H
#define MENUS_DATA_TYPES_H

typedef struct CordinatesStructures {
  int row;
  int column;
}CordinatesStructure;

typedef enum {
  START_NEW_GAME = 1,
  LOAD_GAME = 2,
  SETTINGS = 3,
  EXIT_GAME = 4,
}mainMenuOptions;

typedef enum {
  CONSTRUCT_BUILDING = 1,
  TRAIN_UNIT = 2,
  END_TURN = 3,
}actionMenuOptions;

typedef enum {
  BUILD_MINES = 1,
  BUILD_BARRACKS = 2,
  BUILD_STABLES = 3,
  BUILD_ARMOURY = 4,
}actionBuildingMenuOptions;

#endif
