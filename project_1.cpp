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
  "  ---------------------------------------\n"
  "   24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 \n"
  "  ---------------------------------------\n";
std::cout << std::endl <<std::endl;
std::cout << "Here is what the gameboard is the numbers correspond to the spaces you can choose"<<std::endl<<std::endl;
std::cout << "During the game you will get B for hitting the bomb and P for gaining a point"<<std::endl<<std::endl;
std::cout << "try to get as many spaces filled without hitting a bomb"<<std::endl<<std::endl;
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
std::cout << "               key of values"<<std::endl;
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

// make 2 random integers to put in test "bomb" then put into checklist
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
//declare variable thats going to be used to control the game loop
bool loop_controller = true;
//declare variable thats going to control if people want to contrinue playing
char play_again;
// declare points variable
int points = 0;

//main game loop until win or loss conditions are met
while (loop_controller){
  int locator;
  std::cout << "Insert a key value:  ";
  std::cin >> locator;
  //check if locator is to high
  if (locator>31){
    std::cout << "Value is too High"<<std::endl;
    continue;
  }
  //check if locator is not an int (do later)




  if (checklist[locator]==1){
    std::cout << "oh no you hit one of the two bombs  :\\"<<std::endl<<std::endl;
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
    std::cout << "Heres the final point total: "<<points<<std::endl;
    loop_controller = false;
  }
  else{
    if (myboard[locator] == "P"){
      std::cout << "NO REPEAT VALUES"<<std::endl;
      continue;//checks if locator value has been used before
    }
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
    points += 1;
    std::cout << "Point total: " << points <<std::endl;
    if (points == 28){
      std::cout << "You win Awesome Job :)))))))!"<<std::endl;
      loop_controller = false;
    }
    else if (checklist[locator+8]==1 || checklist[locator-8]==1){
      std::cout << "vertical warning" << std::endl;
    }
    else if (checklist[locator+1] == 1 || checklist[locator-1]==1){
      std::cout << "horizontal warning"<<std::endl;
    }
    else{
      board_values();
      //NULL;
    }



  }//point else statement ends

}//while loop end


std::cout << "Heres a rating of your performance!!!"<<std::endl;
if (points < 10){
  std::cout << std::endl<<"Ehh"<<std::endl;
}
else if(points<15){
  std::cout << std::endl<< "EHHHHHHHH"<<std::endl;
}
else if(points < 20){
  std::cout << std::endl<< "eh"<<std::endl;
}
else if(points < 22){
  std::cout << std::endl<< "Good!"<<std::endl;
}
else if(points <= 27){
  std::cout <<  std::endl<<"Awesome!"<<std::endl;
}


std::cout << "play again (Y or N)"<<std::endl;
std::cin >> play_again;
if (play_again == 'Y' || play_again == 'y'){
  main();
}
else{
  NULL;
}

return 0;
}


// Developer notes
// make it to give warnings CHECK
// make it give points CHECK
// make it check if locator is a int
//check if it gives the same int CHECK
