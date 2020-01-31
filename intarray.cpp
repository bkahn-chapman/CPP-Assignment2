#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int numIntegers = 10;
  unsigned int numberArray[numIntegers];

  for(int i = 0; i < numIntegers; ++i)
  {
    int numberIn = 0;
    cout << "Please enter a nonnegative integer." << endl;
    cin >> numberIn;
    if(numberIn >= 0)
    {
      numberArray[i] = numberIn;
    }
    else
    {
      cout << "Please enter only nonnegative integers." << endl;
      i = i - 1;
    }
  }

  for(int j = 0; j < numIntegers; ++j)
  {
    cout << numberArray[j] << " ";
  }

  cout << endl;

  return 0;
}
