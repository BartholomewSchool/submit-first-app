#include <iostream>
using namespace std;
//this adds the libraries of the commands

int main()
{
  int Age;
//creates a variable of the age so that the input can be processed
  cout << "How old are you?" << endl;
//this asks the user how old they are
  cin >> Age;
//asks for an input of your age
  if (Age >18) {
  cout << "you cannot vote";
  }
//if the age is under 18, it tells you that you cannot vote
else {
    cout << "you can vote";
  }
//if the age is 18 or more, it tells you that you can vote
  return 0;
};
