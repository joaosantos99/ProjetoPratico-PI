#ifndef PLAYER_DATA_TYPES_H
#define PLAYER_DATA_TYPES_H

enum Players {
  PLAYER_ONE = 0,
  PLAYER_TWO = 1,
};

enum Factions {
  GONDOR = 10,
  RIVENDELL = 20,
  MORDOR = 30,
};

typedef struct PlayerStructures {
  int id;
  int faction;
  int casterCoins;
}PlayerStructure;

#endif