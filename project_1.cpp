#include <iostream>
#include <string>
#include <array>
#include <ctime>
#include <map>


void board_values(){
std::string value_board =
  "  -----------\n"
  "   0 | 1 | 2  \n"
  "  -----------\n"
  "   3 | 4 | 5  \n"
  "  -----------\n"
  "   6 | 7 | 8  \n"
  "  -----------\n";
std::cout << "Here is what the gameboard is like with the numbers corresponding to the spaces you can choose"<<std::endl;
std::cout << "During the game you will put ! for wrong guesses and # for right guesses"<<std::endl;
std::cout << value_board << std::endl;
}

int main(){
board_values();
// initialize check list with all 0
// this is whats going to be used to check if the user input hits the target
std::array<int,9> checklist;
for (int x = 0; x < 10; x++){
  checklist[x] = 0;
}

// make a random integer to put in test "ship"
srand(time(0));
int randy = (rand() % 9);
checklist[randy] = 1;


//make a map for printing a gameboard with updated values
std::map<int,std::string> myboard;
for (int x=0; x < 9;x++ ){
  myboard[x]='-';
}

bool loop_controller = true;

//while loop until target is hit (maybe in the future change to for loop with limited tries)
std::cout << "Try to hit the target (input an coordinate between 0-8)"<<std::endl;
while (loop_controller){
  int locator;
  std::cout << "... ";
  std::cin >> locator;

  if (checklist[locator]==1){
    std::cout << "Hit!"<<std::endl;
    myboard[locator] = "#";
    std::cout << "-------------------" << std::endl;
    std::cout << myboard[0] << "   |   " << myboard[1] << "   |   "<< myboard[2]<<std::endl;
    std::cout << myboard[3] << "   |   " << myboard[4] << "   |   " << myboard[5]<<std::endl;
    std::cout << myboard[6] << "   |   " << myboard[7] << "   |   " << myboard[8]<<std::endl;
    std::cout << "-------------------"<< std::endl;
    loop_controller = false;
  }
  else{
    std::cout << "miss :/"<<std::endl;
    myboard[locator] = "!";
    std::cout << "-------------------" << std::endl;
    std::cout << myboard[0] << "   |   " << myboard[1] << "   |   "<< myboard[2]<<std::endl;
    std::cout << myboard[3] << "   |   " << myboard[4] << "   |   " << myboard[5]<<std::endl;
    std::cout << myboard[6] << "   |   " << myboard[7] << "   |   " << myboard[8]<<std::endl;
    std::cout << "-------------------"<< std::endl;
    //show the updated game board
    //if (locator = 1);

  }

}
std::cout << "Yay you beat the game!!!!!!"<<std::endl;
return 0;
}








/*void board_update(locator,myboard,checklist){
if checklist[locator] = 1
*/
