#include <iostream>
#include <string>
#include <map>

void board_values():
std::string board =
  "  -----------\n"
  "   1 | 2 | 3  \n"
  "  -----------\n"
  "   4 | 5 | 6  \n"
  "  -----------\n"
  "   7 | 8 | 9  \n"
  "  -----------\n";
std::cout << "here is what the gameboard is like with the numbers corresponding to the spaces you can choose"<<endl;
std::cout << board << std::endl;


int main(){
  
// initialize map with all 0
std::map<int,bool> mymap;
for (int x = 0; x < 9; x++){
  mymap[x] = 0;
}
// make a random integer to put in test "ship"
int randy = rand() % 10;
mymap[randy] = 1;

bool checker = true;

//while loop until target is hit (maybe in the future change to for loop with limited tries)
std::cout << "try to hit the target"<<std::endl;
while (checker){
  int locator;
  std::cout << "... ";
  std::cin >> locator;
  if (mymap[locator]==1){
    std::cout << "Hit!"<<std::endl;
    checker = false;
  }
  else{
    std::cout << "miss :/"<<std::endl;
    //show the updated game board
    if locator == 1;
      
  }

}
std::cout << "Yay you beat the game!!!!!!!!!!!!!!"<<std::endl;
return 0;
}

