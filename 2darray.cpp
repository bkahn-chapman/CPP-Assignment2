#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int a[4][5];
  int count = 0;

  for(int i = 0; i < 4; ++i)
  {
    for(int j = 0; j < 5; ++j)
    {
      count = count + 1;
      cout << "Enter int number " << count << " please." << endl;
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < 4; ++i)
  {
    for(int j = 0; j < 5; ++j)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
