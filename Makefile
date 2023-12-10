# Compiler and linker
CC = gcc

# Files to be compiled
MAIN_C = ./src/main.c
MAIN_O = ./objs/main.o

BASICS_C = ./libs/game_engine/basics/basics.c
BASICS_H = ./libs/game_engine/basics/basics.H
BASICS_O = ./objs/basics.o

MENUS_C = ./libs/game_engine/menus/menus.c
MENUS_H = ./libs/game_engine/menus/menus.h
MENUS_O = ./objs/menus.o

CLEAR_C = ./libs/utils/clear/clear.c
CLEAR_H = ./libs/utils/clear/clear.h
CLEAR_O = ./objs/clear.o

PLAYER_C = ./libs/game_engine/player/player.c
PLAYER_H = ./libs/game_engine/player/player.h
PLAYER_O = ./objs/player.o

GRID_C = ./libs/game_engine/grid/grid.c
GRID_H = ./libs/game_engine/grid/grid.h
GRID_O = ./objs/grid.o

ACTIONS_C = ./libs/game_engine/actions/actions.c
ACTIONS_H = ./libs/game_engine/actions/actions.h
ACTIONS_O = ./objs/actions.o

UTILS_C = ./libs/utils/utils.c
UTILS_H = ./libs/utils/utils.h
UTILS_O = ./objs/utils.o

main: main.o basics.o menus.o clear.o player.o grid.o actions.o utils.o
	$(CC) -o ./src/main $(MAIN_O) $(BASICS_O) $(MENUS_O) $(CLEAR_O) $(PLAYER_O) $(GRID_O) $(ACTIONS_O) $(UTILS_O)

main.o: $(MAIN_C)
	$(CC) -c $(MAIN_C) -o $(MAIN_O)

basics.o: $(BASICS_C) $(BASICS_H)
	$(CC) -c $(BASICS_C) -o $(BASICS_O)

menus.o: $(MENUS_C) $(MENUS_H)
	$(CC) -c $(MENUS_C) -o $(MENUS_O)

clear.o: $(CLEAR_C) $(CLEAR_H)
	$(CC) -c $(CLEAR_C) -o $(CLEAR_O)

player.o: $(PLAYER_C) $(PLAYER_H)
	$(CC) -c $(PLAYER_C) -o $(PLAYER_O)

grid.o: $(GRID_C) $(GRID_H)
	$(CC) -c $(GRID_C) -o $(GRID_O)

actions.o: $(ACTIONS_C) $(ACTIONS_H)
	$(CC) -c $(ACTIONS_C) -o $(ACTIONS_O)

utils.o: $(UTILS_C) $(UTILS_H)
	$(CC) -c $(UTILS_C) -o $(UTILS_O)

clean:
	$(RM) ./objs/*.o *~