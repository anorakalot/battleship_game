#include <iostream>
#include <string>
#include <array>
#include <ctime>
#include <map>

//developer notes chenge game to minsweeper make it so people try to get as much filled in before they hit
//have hints when the thing is close to a "mine"

void init_board_values(){
std::string value_board =
  "  ---------------------------------------\n"
  "   0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  \n"
  "  ---------------------------------------\n"
  "   8  | 9  | 10 | 11 | 12 | 13 | 14 | 15 \n"
  "  ---------------------------------------\n"
  "   16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 \n"
  "  ---------------------------------------\n";
  "   24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 \n"
  "  ---------------------------------------\n";
std::cout << "Here is what the gameboard is like with the numbers corresponding to the spaces you can choose"<<std::endl;
std::cout << "During the game you will get ! for wrong guesses and # for right guesses"<<std::endl;
std::cout << value_board << std::endl;
}

void board_values(){
std::string value_board =
  "  ---------------------------------------\n"
  "   0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  \n"
  "  ---------------------------------------\n"
  "   8  | 9  | 10 | 11 | 12 | 13 | 14 | 15 \n"
  "  ---------------------------------------\n"
  "   16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 \n"
  "  ---------------------------------------\n";
  "   24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 \n"
  "  ---------------------------------------\n";
std::cout << "              key of values"<<std::endl;
std::cout << value_board << std::endl;
}

int main(){
init_board_values();
// initialize check list with all 0
// this is whats going to be used to check if the user input hits the target
std::array<int,31> checklist;
for (int x = 0; x < 32; x++){
  checklist[x] = 0;
}

// make a random integer to put in test "ship" then put into checklist
srand(time(0));
int randy_1 = (rand() % 16);
int randy_2 = (rand() % 32+16);
checklist[randy_1] = 1;
checklist[randy_2] = 1;


//make a map for printing a gameboard with updated values
std::map<int,std::string> myboard;
for (int x=0; x < 32;x++ ){
  myboard[x]='-';
}

bool loop_controller = true;

//while loop until target is hit (maybe in the future change to for loop with limited tries)
//std::cout << "Try to hit the target (input an coordinate between 0-8) in 5 tries!"<<std::endl;
std::cout << "try to get as many spaces filled without hitting a bomb"<<std::endl;
while (loop_controller){
//for (int x = 0; x<5; x++){
  int locator;
  std::cout << "... ";
  std::cin >> locator;

  if (checklist[locator]==1){
    std::cout << "oh no you hit one of the two bombs  :\(\("<<std::endl<<std::endl;
    myboard[locator] = "B";
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[0] << "   |   " << myboard[1] << "   |   "<< myboard[2]<< "  |  " << myboard[3] << "   |   " << myboard[4] << "   |   "<< myboard[5]<< "  |  " << myboard[6] << "   |   " << myboard[7]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[8] << "   |   " << myboard[9] << "   |   "<< myboard[10]<< "  |  " << myboard[11] << "   |   " << myboard[12] << "   |   "<< myboard[13]<< "  |  " << myboard[14] << "   |   " << myboard[15]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[16] << "   |   " << myboard[17] << "   |   "<< myboard[18]<< "  |  " << myboard[19] << "   |   " << myboard[20] << "   |   "<< myboard[21]<< "  |  " << myboard[22] << "   |   " << myboard[23]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[24] << "   |   " << myboard[25] << "   |   "<< myboard[26]<< "  |  " << myboard[27] << "   |   " << myboard[28] << "   |   "<< myboard[29]<< "  |  " << myboard[30] << "   |   " << myboard[31]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    loop_controller = false;
    std::cout << "sorry but you lost the game"<<std::endl;
  }
  else{
    std::cout << "Plus one point!"<<std::endl<<std::endl;
    myboard[locator] = "P";
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[0] << "   |   " << myboard[1] << "   |   "<< myboard[2]<< "  |  " << myboard[3] << "   |   " << myboard[4] << "   |   "<< myboard[5]<< "  |  " << myboard[6] << "   |   " << myboard[7]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[8] << "   |   " << myboard[9] << "   |   "<< myboard[10]<< "  |  " << myboard[11] << "   |   " << myboard[12] << "   |   "<< myboard[13]<< "  |  " << myboard[14] << "   |   " << myboard[15]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[16] << "   |   " << myboard[17] << "   |   "<< myboard[18]<< "  |  " << myboard[19] << "   |   " << myboard[20] << "   |   "<< myboard[21]<< "  |  " << myboard[22] << "   |   " << myboard[23]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[24] << "   |   " << myboard[25] << "   |   "<< myboard[26]<< "  |  " << myboard[27] << "   |   " << myboard[28] << "   |   "<< myboard[29]<< "  |  " << myboard[30] << "   |   " << myboard[31]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << std::endl<<std::endl;
    board_values();

    //show the updated game board
    //if (locator = 1);

  }

}

return 0;
}








/*void board_update(locator,myboard,checklist){
if checklist[locator] = 1
*/
