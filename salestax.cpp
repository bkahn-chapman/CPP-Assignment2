#include <iostream>
using namespace std;

float addTax(float taxRate, float cost)
{
  cost = cost * ((taxRate/100) + 1);

  return cost;
}

int main(int argc, char **argv)
{
  cout << addTax(10, 10) << endl;
}
