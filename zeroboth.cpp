#include <iostream>
using namespace std;

void zeroBoth(int &value1, int &value2) //receives two call-by-reference variables
{
  value1 = 0; //sets value1 to zero
  value2 = 0; //sets value2 to zero
}

int main(int argc, char **argv)
{
  int numOne = 7; //test numOne
  int numTwo = 3; //test numTwo
  zeroBoth(numOne, numTwo); //calls the function
  cout << numOne << " " << numTwo << endl; //outputs the results for testing purposes
}
