#include <iostream>
#include "main.hpp"
/*Things I need to start the game:
A ttt board
user input for players one and two.
something that will end the game.*/
//I need to create a function that accounts for every win condition so that the computer can know when the game has been won.


int main() {
  int p1 = 0;
  int row;
  int place;

  char player1 = 'X';
  char player2 = 'O';

  greet();

  tttboard();

  switchturn();
  
}
