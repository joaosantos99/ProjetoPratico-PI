#ifndef PLAYER_H
#define PLAYER_H

#include "./headers/datatypes.h"

PlayerStructure create_player(int playerId, int faction);
PlayerStructure update_player(int playerId, PlayerStructure player);
PlayerStructure get_player(int playerId);
PlayerStructure* get_all_players();

#endif