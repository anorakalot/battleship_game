#include <iostream>
#include <string>
#include <map>
int main(){
std::string board =
  "  ---------\n"
  "    |  |   \n"
  "  ---------\n"
  "    |  |   \n"
  "  ---------\n"
  "    |  |   \n"
  "  ---------\n";



std::cout << board << std::endl;



// initialize map with all 0
std::map<int,bool> mymap;
for (int x = 0; x < 9; x++){
  mymap[x] = 0;
}

int randy = rand() % 10;
mymap[randy] = 1;

bool checker = true;


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
  }

}
std::cout << "Yay you beat the game!!!!!!!!!!!!!!"<<std::endl;
return 0;
}
