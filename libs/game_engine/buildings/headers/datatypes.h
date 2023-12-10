#ifndef BUILDINGS_DATA_TYPES_H
#define BUILDINGS_DATA_TYPES_H


#include "../../player/headers/datatypes.h"

typedef struct {
  int faction;
  int type;
  int health;
  int cost;
  char* name;
  char* ascii;
}BuildingStructure;

enum BuildingTypes {
  BASES = 0,
  MINES = 100,
  BARRACKS = 200,
  STABLES = 300,
  ARMOURY = 400,
};

// Bases
enum FactionsBasesEnum {
  GONDOR_BASE = (GONDOR + BASES),
  RIVENDELL_BASE = (RIVENDELL + BASES),
  MORDOR_BASE = (MORDOR + BASES),
};
static const BuildingStructure FactionsBases[] = {
    [GONDOR_BASE] = {
      .faction = GONDOR,
      .type = BASES,
      .health = 100,
      .cost = 30,
      .name = "Gondor",
      .ascii = "GGGG",
    },
    [RIVENDELL_BASE] = {
      .faction = GONDOR,
      .type = BASES,
      .health = 100,
      .cost = 30,
      .name = "Gondor",
      .ascii = "GGGG",
    },
    [MORDOR_BASE] = {
      .faction = MORDOR,
      .type = BASES,
      .health = 100,
      .cost = 30,
      .name = "Mordor",
      .ascii = "MMMM",
    },
};

// Mines
enum FactionsMinesEnum {
  GONDOR_MINE = (GONDOR + MINES),
  RIVENDELL_MINE = (RIVENDELL + MINES),
  MORDOR_MINE = (MORDOR + MINES),
};
static const BuildingStructure FactionsMines[] = {
    [GONDOR_MINE] = {
      .faction = GONDOR,
      .type = MINES,
      .health = 50,
      .cost = 20,
      .name = "Shire",
      .ascii = " SS ",
    },
    [RIVENDELL_MINE] = {
      .faction = GONDOR,
      .type = MINES,
      .health = 50,
      .cost = 20,
      .name = "Shire",
      .ascii = " SS ",
    },
    [MORDOR_MINE] = {
      .faction = MORDOR,
      .type = MINES,
      .health = 50,
      .cost = 20,
      .name = "Erebor",
      .ascii = " EE ",
    },
};

// Barracks
enum FactionsBarracksEnum {
  GONDOR_BARRACKS = (GONDOR + BARRACKS),
  RIVENDELL_BARRACKS = (RIVENDELL + BARRACKS),
  MORDOR_BARRACKS = (MORDOR + BARRACKS),
};
static const BuildingStructure FactionsBarracks[] = {
    [GONDOR_BARRACKS] = {
      .faction = GONDOR,
      .type = BARRACKS,
      .health = 70,
      .cost = 25,
      .name = "Rohan",
      .ascii = " RR ",
    },
    [RIVENDELL_BARRACKS] = {
      .faction = GONDOR,
      .type = BARRACKS,
      .health = 70,
      .cost = 25,
      .name = "Rohan",
      .ascii = " RR ",
    },
    [MORDOR_BARRACKS] = {
      .faction = MORDOR,
      .type = BARRACKS,
      .health = 70,
      .cost = 25,
      .name = "Isengard",
      .ascii = " II ",
    },
};

// Stables
enum FactionsStablesEnum {
  GONDOR_STABLES = (GONDOR + STABLES),
  RIVENDELL_STABLES = (RIVENDELL + STABLES),
  MORDOR_STABLES = (MORDOR + STABLES),
};
static const BuildingStructure FactionsStables[] = {
    [GONDOR_STABLES] = {
      .faction = GONDOR,
      .type = STABLES,
      .health = 70,
      .cost = 25,
      .name = "Lothlórien",
      .ascii = " LL ",
    },
    [RIVENDELL_STABLES] = {
      .faction = GONDOR,
      .type = STABLES,
      .health = 70,
      .cost = 25,
      .name = "Lothlórien",
      .ascii = " LL ",
    },
    [MORDOR_STABLES] = {
      .faction = MORDOR,
      .type = STABLES,
      .health = 70,
      .cost = 25,
      .name = "Mirkwood",
      .ascii = " MK ",
    },
};

// Armoury
enum FactionsArmouryEnum {
  GONDOR_ARMOURY = (GONDOR + ARMOURY),
  RIVENDELL_ARMOURY = (RIVENDELL + ARMOURY),
  MORDOR_ARMOURY = (MORDOR + ARMOURY),
};
static const BuildingStructure FactionsArmoury[] = {
    [GONDOR_ARMOURY] = {
      .faction = GONDOR,
      .type = ARMOURY,
      .health = 70,
      .cost = 30,
      .name = "Gondorian Forge",
      .ascii = " GF ",
    },
    [RIVENDELL_ARMOURY] = {
      .faction = GONDOR,
      .type = ARMOURY,
      .health = 70,
      .cost = 30,
      .name = "Gondorian Forge",
      .ascii = " GF ",
    },
    [MORDOR_ARMOURY] = {
      .faction = MORDOR,
      .type = ARMOURY,
      .health = 70,
      .cost = 30,
      .name = "Dark Forge",
      .ascii = " DK ",
    },
};

#endif
