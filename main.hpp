#include <cstdlib>
//Functions

int row;
int place;

char player1 = 'X';
char player2 = 'O';

std::string row1 = "---\n";
std::string row2 = "---\n";
std::string row3 = "---\n";


void greet() {

  std::cout << "Thank you for playing Ja'Corey's version of Tic-Tac-Toe! Enjoy!\n";


}
//I need to make three strings in order to have my board be mutable. 

void tttboard() {
  std::cout << row1 << row2 << row3;
}
// Player 1's turn funcition
void p1turn() {
  std::cout << "Enter which row you would like to choose from.";
  std::cin >> row;
  /*This if-else statement allows for the code to fight the user error of inputting a number higher than the amount of rows. If this isn't implemented, then the code won't account for the user error and a player turn will be skipped.*/
if (row == 1 || row == 2 || row == 3){
  switch(row) {
      case 1 :
      std::cout << "Which place in row 1 would you like to use?";
      std::cin >> place;
      place = place -1;
      //if an x or an o is already in the place to make the code try again. This made the spots protected so no one can take a spot once filled.
      if (row1[place] == 'X' || row1[place] == 'O'){
        std::cout << "Spot has already been filled, please try another.\n";
        p1turn();
      }
      else{
      row1[place] = player1;
      tttboard();
      }
      break;

      case 2 :
      std::cout << "Which place in row 2 would you like to use?"; 
      std::cin >> place;
      place = place -1;
      if (row2[place] == 'X' || row2[place] == 'O'){
        std::cout << "Spot has already been filled, please try another.\n";
        p1turn();
      }
      else{
      row2[place] = player1;
      tttboard();
      }
      break;

      case 3:
      std::cout << "Which place in row 3 would you like to use?"; 
      std::cin >> place;
      place = place -1;
      if (row3[place] == 'X' || row3[place] == 'O'){
        std::cout << "Spot has already been filled, please try another.\n";
        p1turn();
      }
      else{
      row3[place] = player1;
      tttboard();
      }
      break;
}
  }
  else{
    std::cout << "That is not a row, please try again.\n";
    p1turn();
  }
}

//Player 2's turn function
void p2turn() {
    std::cout << "Enter which row you would like to choose from.";
  std::cin >> row;
  if (row == 1 || row == 2 || row == 3){
  switch(row) {
      case 1 :
      std::cout << "Which place in row 1 would you like to use?";
      std::cin >> place;
      place = place -1;
      if (row1[place] == 'X' || row1[place] == 'O'){
        std::cout << "Spot has already been filled, please try another.\n";
        p2turn();
      }
      else{
      row1[place] = player2;
      tttboard();
      }
      break;

      case 2 :
      std::cout << "Which place in row 2 would you like to use?"; 
      std::cin >> place;
      place = place -1;
      if (row2[place] == 'X' || row2[place] == 'O'){
        std::cout << "Spot has already been filled, please try another.\n";
        p2turn();
      }
      else{
      row2[place] = player2;
      tttboard();
      }
      break;

      case 3:
      std::cout << "Which place in row 3 would you like to use?"; 
      std::cin >> place;
      place = place -1;
     if (row3[place] == 'X' || row3[place] == 'O'){
        std::cout << "Spot has already been filled, please try another.\n";
        p2turn();
      }
      else{
      row3[place] = player2;
      tttboard();
      }
      break;
}
  }
   else{
    std::cout << "That is not a row, please try again.\n";
    p2turn();
  }
}
// Win conditions function
void winoptions() {
  //horzontal win conditions
  if (row1[0] == 'X' && row1[1] == 'X' && row1[2] == 'X') {
    std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[0] == 'O' && row1[1] == 'O' && row1[2] == 'O') {
    std::cout << "Player 2 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row2[0] == 'X' && row2[1] == 'X' && row2[2] == 'X') {
    std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row2[0] == 'O' && row2[1] == 'O' && row2[2] == 'O') {
    std::cout << "Player 2 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row3[0] == 'X' && row3[1] == 'X' && row3[2] == 'X') {
    std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row3[0] == 'O' && row3[1] == 'O' && row3[2] == 'O') {
    std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  //vertical win condition
  else if (row1[0] == 'X' && row2[0] == 'X' && row3[0] == 'X') {
    std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[0] == 'O' && row2[0] == 'O' && row3[0] == 'O') {
    std::cout << "Player 2 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[1] == 'X' && row2[1] == 'X' && row3[1] == 'X') {
    std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[1] == 'O' && row2[1] == 'O' && row3[1] == 'O') {
    std::cout << "Player 2 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[2] == 'X' && row2[2] == 'X' && row3[2] == 'X') {
    std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[2] == 'O' && row2[2] == 'O' && row3[2] == 'O') {
    std::cout << "Player 2 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  //diagonal win conditions
  else if (row1[0] == 'X' && row2[1] == 'X' && row3[2] == 'X') {
     std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[0] == 'O' && row2[1] == 'O' && row3[2] == 'O') {
     std::cout << "Player 2 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[2] == 'X' && row2[1] == 'X' && row3[0] == 'X') {
     std::cout << "Player 1 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }
  else if (row1[2] == 'O' && row2[1] == 'O' && row3[0] == 'O') {
     std::cout << "Player 2 has won the game, thank you for playing!\n";
    exit(EXIT_SUCCESS);
  }

}
void drawcondition() {
    std::cout << "This is a draw, Thanks for playing!\n";
    exit(EXIT_SUCCESS);
  }

void switchturn() {

  p1turn();

  p2turn();
  
  p1turn();

  p2turn();
  
  p1turn();

  winoptions();
  
  p2turn(); 

  winoptions(); 

  p1turn();

  winoptions();

  p2turn();

  winoptions();
  
  p1turn();

  winoptions();

  drawcondition();

}
