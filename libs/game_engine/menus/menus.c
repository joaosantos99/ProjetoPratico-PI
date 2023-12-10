#include <stdio.h>

#include "./headers/datatypes.h"
#include "../../utils/clear/clear.h"
#include "../../utils/utils.h"

int main_menu() {
  int choice;

  // Menu options
  printf("---Menu---\n");
  printf("1. Start New Game\n");
  printf("2. Load Game\n");
  printf("3. Settings\n");
  printf("4. Exit\n");

  // Get user input
  printf("Select menu: ");
  scanf("%d", &choice);

  clear();

  if(choice > 4 || choice < 1) {
    return main_menu();
  }

  return choice;
}

int settings_menu() {
  printf("---Settings---\n");

  return 0;
}

int faction_selection() {
  int choice;

  // Menu options
  printf("---Faction Selection---\n");
  printf("1. Gondor\n");
  printf("2. Rivendell\n");
  printf("3. Mordor\n");

  // Get user input
  printf("Select your faction: ");
  scanf("%d", &choice);

  clear();
  return choice;
}

int action_menu() {
  int choice;

  // Menu options
  printf("---Actions---\n");
  printf("1. Construct Building\n");
  printf("2. Train a Unit\n");
  printf("3. End Turn\n");

  // Get user input
  printf("Select action: ");
  scanf("%d", &choice);

  clear();
  return choice;
}

int action_building_menu() {
  int choice;

  // Menu options
  printf("---Buildings---\n");
  printf("1. Mines (20CC)\n");
  printf("2. Barracks (25CC)\n");
  printf("3. Stables (25CC)\n");
  printf("4. Armoury (30CC)\n");

  // Get user input
  printf("Select building: ");
  scanf("%d", &choice);

  clear();
  return choice;
}

CordinatesStructure place_in_grid_menu() {
  CordinatesStructure choiceCordinates;
  char choiceRow;
  int choiceColumn;

  // Menu options
  printf("---Select Grid Square---\n");

  // Get user input
  printf("Select row: ");
  scanf(" %c", &choiceRow);
  printf("Select column: ");
  scanf(" %d", &choiceColumn);

  choiceCordinates.row = get_position_in_alphabet(choiceRow) - 1;
  choiceCordinates.column = choiceColumn;

  clear();
  return choiceCordinates;
}