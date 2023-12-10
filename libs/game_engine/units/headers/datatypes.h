#ifndef UNITS_DATA_TYPES_H
#define UNITS_DATA_TYPES_H

#include "../../player/headers/datatypes.h"

typedef struct {
  int faction;
  int type;
  int health;
  int attack;
  int range;
  int cost;
  int movementCost;
  char* name;
  char* ascii;
}UnitsStructure;

enum UnitsTypes {
  INFANTRY = 500,
  CAVALRY = 600,
  ARTILLERY = 700,
};

enum AttackRange {
	MELEE = 1,
	RANGED = 3,
};

// Infantry
enum FactionsInfantryEnum {
  GONDOR_INFANTRY = (GONDOR + INFANTRY),
  RIVENDELL_INFANTRY = (RIVENDELL + INFANTRY),
  MORDOR_INFANTRY = (MORDOR + INFANTRY),
};
static const UnitsStructure FactionsInfantry[] = {
    [GONDOR_INFANTRY] = {
      .faction = GONDOR,
      .type = INFANTRY,
      .health = 30,
			.attack = 5,
			.range = MELEE,
      .cost = 10,
			.movementCost = 2,
      .name = "Gondorian Guards",
      .ascii = " C  ",
    },
    [RIVENDELL_INFANTRY] = {
      .faction = GONDOR,
      .type = INFANTRY,
      .health = 30,
			.attack = 5,
			.range = MELEE,
      .cost = 10,
			.movementCost = 2,
      .name = "Gondorian Guards",
      .ascii = " C   ",
    },
    [MORDOR_INFANTRY] = {
      .faction = MORDOR,
      .type = INFANTRY,
			.health = 30,
			.attack = 5,
			.range = MELEE,
      .cost = 10,
			.movementCost = 2,
      .name = "Orc Warriors",
      .ascii = " OW ",
    },
};

// Cavalry
enum FactionsCavalryEnum {
  GONDOR_CAVALRY = (GONDOR + CAVALRY),
  RIVENDELL_CAVALRY = (RIVENDELL + CAVALRY),
  MORDOR_CAVALRY = (MORDOR + CAVALRY),
};
static const UnitsStructure FactionsCavalry[] = {
    [GONDOR_CAVALRY] = {
      .faction = GONDOR,
      .type = CAVALRY,
      .health = 40,
			.attack = 7,
			.range = MELEE,
      .cost = 15,
			.movementCost = 1,
      .name = "Swan-Knights",
      .ascii = " SK ",
    },
    [RIVENDELL_CAVALRY] = {
      .faction = GONDOR,
      .type = CAVALRY,
      .health = 40,
			.attack = 7,
			.range = MELEE,
      .cost = 15,
			.movementCost = 1,
      .name = "Swan-Knights",
      .ascii = " SK ",
    },
    [MORDOR_CAVALRY] = {
      .faction = MORDOR,
      .type = CAVALRY,
			.health = 40,
			.attack = 7,
			.range = MELEE,
      .cost = 15,
			.movementCost = 1,
      .name = "Wargs",
      .ascii = " W  ",
    },
};

// Artillery
enum FactionsArtilleryEnum {
  GONDOR_ARTILLERY = (GONDOR + ARTILLERY),
  RIVENDELL_ARTILLERY = (RIVENDELL + ARTILLERY),
  MORDOR_ARTILLERY = (MORDOR + ARTILLERY),
};
static const UnitsStructure FactionsArtillery[] = {
    [GONDOR_ARTILLERY] = {
      .faction = GONDOR,
      .type = ARTILLERY,
      .health = 20,
			.attack = 10,
			.range = RANGED,
      .cost = 20,
			.movementCost = 3,
      .name = "Trebuchets",
      .ascii = " T  ",
    },
    [RIVENDELL_ARTILLERY] = {
      .faction = GONDOR,
      .type = ARTILLERY,
      .health = 20,
			.attack = 10,
			.range = RANGED,
      .cost = 20,
			.movementCost = 3,
      .name = "Trebuchets",
      .ascii = " T  ",
    },
    [MORDOR_ARTILLERY] = {
      .faction = MORDOR,
      .type = ARTILLERY,
			.health = 20,
			.attack = 10,
			.range = RANGED,
      .cost = 20,
			.movementCost = 3,
      .name = "Siege Towers",
      .ascii = " ST ",
    },
};

#endif