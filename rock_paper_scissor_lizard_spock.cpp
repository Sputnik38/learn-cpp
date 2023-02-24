#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits>

using namespace std;

void cinCheck(){

    if (!cin)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}


int main() {

    //Farts
srand (time(NULL));
int computer = rand()%5+1;
int user = 0;
int option = 0;
bool play = false;



    //Intro
  cout << "====================" << endl;
  cout << " ROCK PAPER SCISSOR " << endl;
  cout << "  LIZARD     SPOCK  " << endl;
  cout << "====================" << endl;

    //Option loop
    while (play == false){
        cout << endl;
        cout << "1) Play" << endl;
        cout << "2) How to play" << endl;
        cout << "3) Exit" << endl;
        cout << "\nPlease, enter an option: ";
        cin >> option;
        cinCheck();

        switch (option){

            case 1:
                play = true;
                break;

            case 2:
                cout << "The logic:" << endl << endl;
                cout << "• Scissors cuts Paper." << endl;
                cout << "• Paper covers Rock." << endl;
                cout << "• Rock crushes Lizard." << endl;
                cout << "• Lizard poisons Spock." << endl;
                cout << "• Spock smashes Scissors." << endl;
                cout << "• Scissors decapitate Lizard." << endl;
                cout << "• Lizard eats Paper." << endl;
                cout << "• Paper disproves Spock." << endl;
                cout << "• Spock vaporizes Rock." << endl;
                cout << "• (and as it always has) Rock crushes Scissors." << endl;
                play = false;
                break;

            case 3:
                cout << "See ya!" << endl;
                exit(0);

            default:
                cout << "Invalid option!" << endl;
                play = false;
        }
    }


        //Play options
    while (play == true){
        cout << "\n";
        cout << "1) ✊  rock" << endl;
        cout << "2) ✋  paper" << endl;
        cout << "3) ✌️  scissors" << endl;
        cout << "4) 🖖  spock" << endl;
        cout << "5) 🫳  lizard" << endl;
        cout << "6) EXIT GAME" << endl;
        cout << "Enter an option: ";
        cin >> user;
        cinCheck();
        computer = rand()%5+1;

        switch(user){

            case 1:
               if (computer == 5 || computer == 3)
               {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU WIN!" << endl;
                cout << "====================" << endl;
               }
               else if (computer == 2 || computer == 4){
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU LOSE! :(" << endl;
                cout << "====================" << endl;
               }
               else {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "THATS A DRAW!" << endl;
                cout << "====================" << endl;
               }
               break;

            case 2:
               if (computer == 1 || computer == 4)
               {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU WIN!" << endl;
                cout << "====================" << endl;
               }
               else if (computer == 5 || computer == 3){
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU LOSE! :(" << endl;
                cout << "====================" << endl;
               }
               else {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "THATS A DRAW!" << endl;
                cout << "====================" << endl;
               }
               break;

            case 3:
               if (computer == 5 || computer == 2)
               {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU WIN!" << endl;
                cout << "====================" << endl;
               }
               else if (computer == 1 || computer == 4){
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU LOSE! :(" << endl;
                cout << "====================" << endl;
               }
               else {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "THATS A DRAW!" << endl;
                cout << "====================" << endl;
               }

            case 4:
               if (computer == 1 || computer == 3)
               {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU WIN!" << endl;
                cout << "====================" << endl;
               }
               else if (computer == 2 || computer == 5){
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU LOSE! :(" << endl;
                cout << "====================" << endl;
               }
               else {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "THATS A DRAW!" << endl;
                cout << "====================" << endl;
               }
               break;

            case 5:
               if (computer == 4 || computer == 2)
               {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU WIN!" << endl;
                cout << "====================" << endl;
               }
               else if (computer == 1 || computer == 3){
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "YOU LOSE! :(" << endl;
                cout << "====================" << endl;
               }
               else {
                cout << "====================" << endl;
                cout << "Player: " << user << " VS " << computer << " Computer." << endl;
                cout << "THATS A DRAW!" << endl;
                cout << "====================" << endl;
               }
               break;

            case 6:
                exit(0);
                break;

            default:
                break;
        }
    }
}
