#include <iostream>
#include <string>
using namespace std;

int main(){

  //for loop 1 a 100
  for (int i = 1; i <= 100; i++){
    
    //if check fizz
    if (i % 3 == 0 && i % 5 != 0){
      cout << "Fizz" << endl;
    } else if (i % 5 == 0 && i % 3 != 0){
      cout << "Buzz" << endl;
    } else if (i % 3 == 0 && i % 5 == 0){
      cout << "FizzBuzz" << endl;
    } else {
     cout << i << endl; 
    }
  }
}
