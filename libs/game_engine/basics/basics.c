#include <stdio.h>
#include <stdlib.h>

#include "../menus/menus.h"
#include "../menus/headers/datatypes.h"
#include "../basics/basics.h"
#include "../player/player.h"
#include "../player/headers/datatypes.h"
#include "../../utils/clear/clear.h"
#include "../grid/grid.h"
#include "../actions/actions.h"

void render(int playerId) {
  const PlayerStructure currentPlayer = get_player(playerId);
  clear();

  printf("\n\033[1;31mPLAYER %d TURN\033[0m\n", currentPlayer.id);
  printf("\n\033[1;31mCASTER COINS: %d\033[0m\n", currentPlayer.casterCoins);

  render_grid();
}

void actions_handler(int playerId) {
  const PlayerStructure currentPlayer = get_player(playerId);

  if(currentPlayer.casterCoins == 0) {
    return;
  }
  render(currentPlayer.id);

  int actionChoice = action_menu();

  if(actionChoice == CONSTRUCT_BUILDING) {
    building_action(currentPlayer.id);
  } else if(actionChoice == TRAIN_UNIT) {

  } else if(actionChoice == END_TURN) {
    return;
  }

  return actions_handler(currentPlayer.id);
}

void turn_handler(int playerId) {
  const PlayerStructure currentPlayer = get_player(playerId);

  render(currentPlayer.id);

  actions_handler(currentPlayer.id);

  if(playerId == PLAYER_ONE) {

    /*int grid = get_grid();
    int numberOfMines = count_occurrences(grid);
    PlayerStructure nextPlayer = get_player(PLAYER_TWO);
    nextPlayer.casterCoins += (numberOfMines / 2) * 5;
    update_player(PLAYER_TWO, nextPlayer);*/

    return turn_handler(PLAYER_TWO);
  }
  if(playerId == PLAYER_TWO) {

    /*int grid = get_grid();
    int numberOfMines = count_occurrences(grid);
    PlayerStructure nextPlayer = get_player(PLAYER_ONE);
    nextPlayer.casterCoins += (numberOfMines / 2) * 5;
    update_player(PLAYER_ONE, nextPlayer);*/

    return turn_handler(PLAYER_ONE);
  }
}

void new_game_start() {
  int factionChoice;

  factionChoice = faction_selection() * 10;

  if (factionChoice == GONDOR) {
    create_player(PLAYER_ONE, GONDOR);
    create_player(PLAYER_TWO, MORDOR);

  } else if (factionChoice == RIVENDELL) {
    create_player(PLAYER_ONE, RIVENDELL);
    create_player(PLAYER_TWO, MORDOR);

  } else if (factionChoice == MORDOR) {
    create_player(PLAYER_ONE, MORDOR);
    create_player(PLAYER_TWO, GONDOR);
  }

  turn_handler(PLAYER_ONE);
}

int game_menu() {
  int menuChoice;

  // clear the screen before displaying the menu
  clear();
  // display the welcome message
  printf("\n\033[1;31m***WELCOME TO MIDDLE-EARTH***\033[0m\n\n");

  menuChoice = main_menu();

  if (menuChoice == START_NEW_GAME) {
    new_game_start();

  } else if (menuChoice == LOAD_GAME) {
    printf("Loading game...\n");

  } else if (menuChoice == SETTINGS) {
    settings_menu();

  } else if (menuChoice == EXIT_GAME) {
    game_exit();
  }

  return main_menu();
}

void game_exit() {
  // clear the screen before exit the game
  clear();
  // display the welcome message
  printf("\n\033[1;31m***THANK YOU FOR PLAYING***\033[0m\n\n");

  exit(0);
}
