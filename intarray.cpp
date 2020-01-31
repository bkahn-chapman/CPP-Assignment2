#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int numIntegers = 10;
  int numberArray[numIntegers];

  for(int i = 0; i < numIntegers; ++i)
  {
    cout << "Please enter a nonnegative integer." << endl;
    cin >> numberArray[i];
  }

  for(int j = 0; j < numIntegers; ++j)
  {
    cout << numberArray[j] << " ";
  }

  return 0;
}
