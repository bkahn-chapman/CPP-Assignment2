#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) //takes in the taxRate (float so it can be divided by 100 to create a decimal percentage) and cost (float so that cents can be accounted for)
{
  cost = cost * ((taxRate/100) + 1); //takes cost and multiplies it time the tax rate decimal percentage + 1 (+1 for the original price)

  return cost; //outputs the result
}

int main(int argc, char **argv)
{
  cout << addTax(10, 10) << endl; //testing the function
}
