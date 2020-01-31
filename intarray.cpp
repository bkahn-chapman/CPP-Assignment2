#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int numIntegers = 10; //number of integers in the array
  unsigned int numberArray[numIntegers]; //creates the array and makes it unsigned since it only takes in nonnegative integers

  for(int i = 0; i < numIntegers; ++i) //continues until the array is full
  {
    int numberIn = 0; //stores the user input
    cout << "Please enter a nonnegative integer." << endl;
    cin >> numberIn;
    if(numberIn >= 0) //if the number isn't negative
    {
      numberArray[i] = numberIn; //adds the number to the array at the current spot
    }
    else //if the number is negative
    {
      cout << "Please enter only nonnegative integers." << endl;
      i = i - 1; //returns i back to the previous spot so that a spot in the array isn't missed
    }
  }

  for(int j = 0; j < numIntegers; ++j) //continues until the end of the array
  {
    cout << numberArray[j] << " "; //prints the number at the current index in the array
  }

  cout << endl;

  return 0;
}
