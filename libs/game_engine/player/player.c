
#include "./headers/datatypes.h"

PlayerStructure PLAYER_LIST[2];

PlayerStructure create_player(int playerId, int faction) {
    PLAYER_LIST[playerId].id = playerId;
    PLAYER_LIST[playerId].faction = faction;
    PLAYER_LIST[playerId].casterCoins = 100;

    return PLAYER_LIST[playerId];
}

PlayerStructure update_player(int playerId, PlayerStructure player) {
    PLAYER_LIST[playerId] = player;

    return PLAYER_LIST[playerId];
}

PlayerStructure get_player(int playerId) {
    return PLAYER_LIST[playerId];
}

PlayerStructure* get_all_players() {
    return PLAYER_LIST;
}
