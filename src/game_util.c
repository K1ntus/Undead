#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "../header/game.h"
#include "../header/game_io.h"
#include "../header/game_display.h"



/**
 * @brief Check if the game board as parameters doesnt have any empty cells
 * @param g the game board
 * @return true if the board is full, either false
 **/
bool board_is_full(game g){
	for (signed int x = 0; x < game_width(g); x++){
		for(int y = 0; y < game_height(g); y++){
			if(get_content(g,x,y) == EMPTY)
				return false;
		}
	}
	return true;
}

/**
 * @brief append a char to the end of a string variable
 * @param s the string which will contain string@char
 * @param c the char variable to append to the end of string
 * @return void
 **/
void append(char* s, char c){
				int len = strlen(s);
				s[len] = c;
				s[len+1] = '\0';
}

/**
 * @brief concat two string s1 and s2 like s1@s2
 * @param s1 the first part of the result string
 * @param s2 the second part of the result string
 * @return a string
 **/
char* concat(const char *s1, const char *s2){
		char * result = (char *) malloc(strlen(s1)+strlen(s2)+1);//+1 for the null-terminator
		//check for errors in malloc here
		strcpy(result, s1);
		strcat(result, s2);
		return result;
}
