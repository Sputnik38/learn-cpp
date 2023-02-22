#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {

  //phrase input
  cout << "Welcome to Whale Translator.\n";
  cout << "Please, what do you want to translate?\n";

  cout << "Type something: ";
  string phrase = "";
  getline (cin, phrase);
  
  //whale language
  vector<char> vowels = {'a', 'e', 'i','o','u'};
  vector<char> result;

  //fart

  for (int i = 0; i < phrase.size(); i++){
    for (int x = 0; x < vowels.size(); x++){
      if (phrase[i] == vowels[x]){
        result.push_back(phrase[i]);
      }
    }
    if (phrase[i] == 'e' || phrase[i] == 'E'){
      result.push_back(phrase[i]);
    } else if (phrase[i] == 'u' || phrase[i] == 'U') {
      result.push_back(phrase[i]);
    }
  }

  cout << "\n";

  for (int t = 0; t < result.size(); t++){
  cout << result[t];
  }

  cout << "\n\n";
}
