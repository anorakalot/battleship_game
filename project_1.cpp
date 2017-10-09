#include <iostream>
#include <string>
#include <array>
#include <ctime>
#include <map>

//developer notes chenge game to minsweeper make it so people try to get as much filled in before they hit
//have hints when the thing is close to a "mine"

//going to show the key values and the rules of the game
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
std::cout << value_board << std::endl;
std::cout << std::endl <<std::endl;
std::cout << "Here is the gameboard. The numbers correspond to the spaces you can choose"<<std::endl<<std::endl;
std::cout << "During the game you will get S for hitting enemy ships and M for missed shots"<<std::endl<<std::endl;
std::cout << "Hit the enemy ships in the turns provided or you lose"<<std::endl<<std::endl;

}

//this is going to show up whenever a players "turn" is done
void board_values(){
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
std::cout << "               key of values"<<std::endl;
std::cout << value_board << std::endl;
}

int main(){
//need placeholder string for cin
std::cout << std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl
<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl
<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl
<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
std::string name;
std::cout << "ENTER YOUR NAME: ";
std::cin >> name;
std::cout << std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl
<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl
<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl
<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
std::cout <<"HELLO GENERAL WE NEED YOUR HELP MORE THAN EVER. PLEASE HELP OUR CAUSE THROUGH THIS TERMINAL"<<std::endl;
std::cout <<"WE ARE SURROUNDED BY ENEMY SHIPS AND WE NEED YOU TO FIND AND DESTROY THEM USING SONAR TECHNOLOGY!!!"<<std::endl;
std::cout <<"IF YOU DONT ELIMINATE ALL THE ENEMY SHIPS DURING THE TIME LIMIT WE WILL BE OVERRUN"<<std::endl;
std::cout << "GOOD LUCK GENERAL "<<name<<std::endl;

std::cout << std::endl;
init_board_values();
// initialize check list with all 0
// this is whats going to be used to check if the user input hits the target
std::array<int,31> checklist;
for (int x = 0; x < 32; x++){
  checklist[x] = 0;
}

//make a map for printing a gameboard with updated values
std::map<int,std::string> myboard;
for (int x=0; x < 32;x++ ){
  myboard[x]='-';
}

// make 2 random integers to put into checklist
//these are the enemy "ships"
srand(time(0));
int randy_1 = (rand() % 16);
int randy_2 = (rand() % 32+16);
checklist[randy_1] = 1;
checklist[randy_2] = 1;

//declare variable thats going to control if people want to contrinue playing
char play_again;
// declare points variable
int points = 0;

//main game loop until win or loss conditions are met
//while (loop_controller){
std::cout << "YOU HAVE 10 TRIES TO TRACK DOWN AND ELEIMINATE ENEMY SHIPS "<<std::endl;
std::cout << std::endl;
for(int i = 0; i <10;i++ ){
  int locator;
  std::cout << "LOCATION VALUE:  ";
  std::cin >> locator;
  //check if locator is to high
  if (locator>31){
    std::cout << "VALUE IS TOO HIGH GENERAL"<<std::endl;
    continue;
  }
  else{
    NULL;
  }
  //check if locator is not an int (do later)



// tell if player hit ship and check win condition
  if (checklist[locator]==1){
    std::cout << "HIT!"<<std::endl<<std::endl;
    myboard[locator] = "S";
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[0] << "   |   " << myboard[1] << "   |   "<< myboard[2]<< "  |  " << myboard[3] << "   |   " << myboard[4] << "   |   "<< myboard[5]<< "  |  " << myboard[6] << "   |   " << myboard[7]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[8] << "   |   " << myboard[9] << "   |   "<< myboard[10]<< "  |  " << myboard[11] << "   |   " << myboard[12] << "   |   "<< myboard[13]<< "  |  " << myboard[14] << "   |   " << myboard[15]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[16] << "   |   " << myboard[17] << "   |   "<< myboard[18]<< "  |  " << myboard[19] << "   |   " << myboard[20] << "   |   "<< myboard[21]<< "  |  " << myboard[22] << "   |   " << myboard[23]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << myboard[24] << "   |   " << myboard[25] << "   |   "<< myboard[26]<< "  |  " << myboard[27] << "   |   " << myboard[28] << "   |   "<< myboard[29]<< "  |  " << myboard[30] << "   |   " << myboard[31]<<std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    //std::cout << "Heres the final point total: "<<points<<std::endl;
    if (myboard[randy_1]=="S" && myboard[randy_2]=="S"){
      std::cout << "YOU HAVE ELIMINATED ALL ENEMY SHIPS"<<std::endl;
      board_values();
      break;
      //loop_controller = false;
    }
    else{
      std::cout << "ONLY ONE SHIP REMAINS GENERAL "<<name<<std::endl;
      board_values();
    }
  }//end of if player hit ship
  else{
    if (myboard[locator] == "M"){
      std::cout << "NO REPEAT VALUES"<<std::endl;
      continue;//checks if locator value has been used before
    }
    std::cout << "MISS!"<<std::endl<<std::endl;
    myboard[locator] = "M";
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
    //points += 1;
    //std::cout << "Point total: " << points <<std::endl;
    //sonar trigger for vertical enemy ship
    if ((checklist[locator+8]==1) || (checklist[locator-8]==1)){
      std::cout << "SONAR DETECTED ENEMY SHIP" << std::endl;
      board_values();
    }
    //sonar trigger for horizontal enemy ship
    else if ((checklist[locator+1] == 1) || (checklist[locator-1]==1)){
      std::cout << "SONAR DETECTED ENEMY SHIP"<<std::endl;
      board_values();
    }
    else{
      std::cout << "NO SONAR OF ENEMY SHIP"<<std::endl<<std::endl;
      board_values();
      //NULL;
    }



  }//point else statement ends

}//for loop end

if ((myboard[randy_1]=="S") && (myboard[randy_2])=="S") {
  std::cout << "YOU HAVE LED A SUCCESSFUL REBUTTAL OF THE ENEMY WATER INVASION"<<std::endl;
  std::cout << "GENERAL "<<name <<"YOU WILL BE FOREVER KNOWN AS A HERO"<<std::endl;
  std::cout << std::endl;
}
else{
  std::cout << "YOU FAILED TO PROTECT OUR PEOPLE"<<std::endl;
  std::cout << "NOW WE HAVE NO HOPE"<<std::endl;
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
// turn into battlship CHECK
// make it losable CHECK
