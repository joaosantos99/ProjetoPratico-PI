#include "../basics/basics.h"
#include "../menus/menus.h"
#include "../menus/headers/datatypes.h"
#include "../grid/grid.h"
#include "../player/headers/datatypes.h"
#include "../buildings/headers/datatypes.h"
#include "../player/player.h"

void place_building(int playerId, int buildingType) {
  PlayerStructure currentPlayer = get_player(playerId);
  render(currentPlayer.id);

  int grid = add_to_grid(buildingType + currentPlayer.faction);

  if(grid == 0) {
    return place_building(playerId, buildingType);
  }
}

void building_action(int playerId) {
  PlayerStructure currentPlayer = get_player(playerId);
  render(currentPlayer.id);

  int buildingChoice = action_building_menu();

  if(buildingChoice == BUILD_MINES) {
    place_building(currentPlayer.id, MINES);

    currentPlayer.casterCoins -= FactionsMines[MINES + currentPlayer.faction].cost;
    update_player(currentPlayer.id, currentPlayer);
  } else if (buildingChoice == BUILD_BARRACKS) {
    place_building(currentPlayer.id, BARRACKS);

    currentPlayer.casterCoins -= FactionsBarracks[BARRACKS + currentPlayer.faction].cost;
    update_player(currentPlayer.id, currentPlayer);
  } else if (buildingChoice == BUILD_STABLES) {
    place_building(currentPlayer.id, STABLES);

    currentPlayer.casterCoins -= FactionsStables[STABLES + currentPlayer.faction].cost;
    update_player(currentPlayer.id, currentPlayer);
  } else if (buildingChoice == BUILD_ARMOURY) {
    place_building(currentPlayer.id, ARMOURY);

    currentPlayer.casterCoins -= FactionsArmoury[ARMOURY + currentPlayer.faction].cost;
    update_player(currentPlayer.id, currentPlayer);
  } else {
    return building_action(playerId);
  }
}