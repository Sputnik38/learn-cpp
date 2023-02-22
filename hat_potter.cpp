#include <iostream>
#include <string>
using namespace std;

int main(){

  	//introduction
	cout << "The Hogwarts School of Witchcraft and Wizardry welcomes you! First-year students must go through the annual Sorting Ceremony.\n" << endl;
  cout << "The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to:\n" << endl;
  
  cout << "• Gryffindor" << endl; 
  cout << "• HufflePuff" << endl;
  cout << "• RavenClaw" << endl;
  cout << "• Slytherin" << endl;

  	//Farts
  int answer1=0, answer2=0, answer3=0, answer4=0;
  int gryffindor=0, hufflepuff=0, ravenclaw=0, slytherin=0;

  	//Burn mf's
  cout << "\n ========================= \n";
  cout << "   THE SORTING HAT QUIZ!\n";
  cout << " ========================= \n";

		//Question 1
  cout << "Q1) When I'm dead, I want people to remember me as: " << endl;
  cout << "  1) The Good" << endl;
  cout << "  2) The Great" << endl;
  cout << "  3) The Wise" << endl;
  cout << "  4) The Bold" << endl;

  	//if(arts){
  while (answer1 < 1 || answer1 > 4){
    cout << "Answer: ";
    cin >> answer1;
    if (answer1 == 1){
      hufflepuff++;
      break;
    } else if (answer1 == 2){
      slytherin++;
      break;
    } else if (answer1 == 3){
      ravenclaw++;
      break;
    } else if (answer1 == 4){
      gryffindor++;
      break;
    } else {
      cout << "invalid input. Try again.\n";
    }
  }

		//Question 2
   cout << "\nQ2) Dawn or Dusk?" << endl;
   cout << "  1) Down" << endl;
   cout << "  2) Dusk" << endl;

		//if(arts){
  while (answer2 < 1 || answer2 > 2){
    cout << "Answer: ";
    cin >> answer2;
    if (answer2 == 2){
      hufflepuff++;
      break;
    } else if (answer2 == 2){
      slytherin++;
      break;
    } else if (answer2 == 1){
      ravenclaw++;
      break;
    } else if (answer2 == 1){
      gryffindor++;
      break;
    } else {
      cout << "invalid input. Try again.\n";
    }
  }

		//Question 3
   cout << "\nQ3) Which kind of instrument most pleases your ear?" << endl;
   cout << "  1) The Violin" << endl;
   cout << "  2) The Trumpet" << endl;
   cout << "  3) The Piano" << endl;
   cout << "  4) The Drum" << endl;

		//if(arts){
  while (answer3 < 1 || answer3 > 4){
    cout << "Answer: ";
    cin >> answer3;
    if (answer3 == 2){
      hufflepuff++;
      break;
    } else if (answer3 == 1){
      slytherin++;
      break;
    } else if (answer3 == 3){
      ravenclaw++;
      break;
    } else if (answer3 == 4){
      gryffindor++;
      break;
    } else {
      cout << "invalid input. Try again.\n";
    }
  }

		//Question 4
   cout << "\nQ4) Which road tempts you most?" << endl;
   cout << "  1) The wide, sunny grassy lane" << endl;
   cout << "  2) The narrow, dark, lantern-lit alley" << endl;
   cout << "  3) The twisting, leaf-strewn path through woods" << endl;
   cout << "  4) The cobbled street lined (ancient buildings)" << endl;

		//if(arts){
  while (answer4 < 1 || answer4 > 4){
    cout << "Answer: ";
    cin >> answer4;
    if (answer4 == 1){
      hufflepuff++;
      break;
    } else if (answer4 == 2){
      slytherin++;
      break;
    } else if (answer4 == 4){
      ravenclaw++;
      break;
    } else if (answer4 == 3){
      gryffindor++;
      break;
    } else {
      cout << "invalid input. Try again.\n";
    }
  }


		//Faresults
  int max = 0;
  string house;

	//More ifs bc why not?
if (gryffindor > max){
  max = gryffindor;
  house = "Gryffindor";
}

if (hufflepuff > max){ 
  max = hufflepuff;
  house = "Hufflepuff";
}
 
if (ravenclaw > max){ 
  max = ravenclaw;
  house = "Ravenclaw";
}
 
if (slytherin > max){
  max = slytherin;
  house = "Slytherin";
}
 
	std::cout << house << "!\n";

}
