#include <iostream>
using namespace std;

float feet;
float inches;
float m_feet;
float m_inches;
unsigned int m_meters;
float m_centimeters;

void userInput()
{
  cout << "Please enter how many feet you would like to convert." << endl;
  cin >> feet;
  cout << "Please enter how many inches you would like to convert." << endl;
  cin >> inches;
}

int calculateResult()
{
  m_feet = feet + (inches / 12);
  cout << m_feet << endl;
  m_centimeters = m_feet * 30.48;
  cout << m_centimeters << endl;
  m_meters = m_centimeters / 100;
  m_centimeters = m_centimeters - (m_meters * 100); 
}

void resultOutput()
{
  cout << feet << " feet and " << inches << " inches converts to " << m_meters << " meters and " << m_centimeters << " centimeters." << endl;
}

int main(int argc, char **argv)
{
  int exitVal = 0;
  string continueVar;
  while(exitVal == 0)
  {
    cout << "Would you like to 'make' a conversion or 'exit'? (type the word in quotes)" << endl;
    cin >> continueVar;
    if(continueVar != "exit") //FIX: UPPER OR LOWER EXIT and CHECK MAKE (?)
    {
      userInput();
      calculateResult();
      resultOutput();
    }
    else
    {
      cout << "Thank you for using my converter." << endl;
      exitVal = 1;
    }
  }
  return 0;
}
