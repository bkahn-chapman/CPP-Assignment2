#include <iostream>
using namespace std;

void zeroBoth(int &value1, int &value2)
{
  value1 = 0;
  value2 = 0;
}

int main(int argc, char **argv)
{
  int numOne = 7;
  int numTwo = 3;
  zeroBoth(numOne, numTwo);
  cout << numOne << " " << numTwo << endl;
}
