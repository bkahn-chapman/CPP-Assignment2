#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int a[4][5]; //initialize the array (4 rows, 5 columns)
  int count = 0; //counts how many numbers have been entered

  for(int i = 0; i < 4; ++i) //runs through the four rows
  {
    for(int j = 0; j < 5; ++j) //runs the five numbers in each row
    {
      count = count + 1; //ups the number count
      cout << "Enter int number " << count << " please." << endl;
      cin >> a[i][j]; //inputs the number into the array at the current indexes
    }
  }

  for(int i = 0; i < 4; ++i) //iterates through the four rows
  {
    for(int j = 0; j < 5; ++j) //iterates through each row
    {
      cout << a[i][j] << " "; //prints the number at the curret index in the array
    }
    cout << endl;
  }
}
