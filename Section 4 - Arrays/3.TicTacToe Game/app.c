#include <stdio.h>

char playground[3][3] = {{' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '}};

/*
    This function will recieve the following numbers: 11,12,12, 21,22,23,31,32,33
    and will return the index of the playground array
    e.g. 11 -> 0,0
         12 -> 0,1
         13 -> 0,2
         21 -> 1,0
         ...
    anything else will return -1 indicating as invalid input
    and also if the cell is already occupied or not
    for the row the value will be (input/10)-1
    for the column the value will be (input%10)-1
*/
int get_player_input(void); // return the index the player has chosen

/*
    this function checks if the tree in a row, column or diagonal are equal
    and none of them is empty
    returns 'X' if X is the winner
    returns 'O' if O is the winner
    returns 'N' if nobody has won yet
*/
char judge(void);   // returns the winner 'X' or 'O' or 'N' for nobody
/*
    this function will render the playground on the console
    e.g.
       1   2   3
     +---+---+---+
   1 | X | O | X |
     +---+---+---+
   2 |   | O |   |
     +---+---+---+
   3 |   |   | X |
     +---+---+---+
     at first it will clear the console using system("clear") or system("cls")
     then it will print the playground
     then read the global playground array and add the X and O in the right places
*/
void render_playground(void);   //reder the playground on the console
/*
    this main function has to keep track of how many cells are empty this number
    starts with 9 and decreases by one after each valid player input
    while the game is not over:
    - check if there is any winner using the judge function
    - render the playground
    - announce the winner if there is any and terminate the game
    - if nobody has won the game, recieve current player input
    - validate the player input
    - if the player input is correct:
        - update the playground array
        - toggle the current player
        - decrease the number of empty cells
    - if the loop terminates without a winner announce a draw

*/
int main(void)
{
	render_playground();
    int user_input = get_player_input();
    printf("user input recieved: %d.", user_input);

    return 0;
}

int get_player_input(void){

    int user_input; // user input value will be saved here
    
    printf("Enter the position: ");
    scanf("%d", &user_input);

    if((user_input / 10 >= 1 && user_input / 10 <= 3) && (user_input % 10 >= 1 && user_input % 10 <= 3)){
      int row = (user_input/10)-1;
      int column = (user_input%10)-1;
      if(playground[row][column] = ' '){
          printf("The position is valid and available.\n");
      }
	  return user_input;
    }
    else{
      printf("The position is not available or not valid.");
      return -1;
    }
}

void render_playground(void){
	
    printf(
        "+----+----+----+\n"
        "| %s | %s | %s |\n"
        "+----+----+----+\n"
        "| %s | %s | %s |\n"
        "+----+----+----+\n"
        "| %s | %s | %s |\n"
        "+----+----+----+\n",
        "11", "12", "13",
        "21", "22", "23",
        "31", "32", "33"
    );
}