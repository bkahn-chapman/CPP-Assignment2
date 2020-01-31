#include <iostream>
#include <cctype> //allows use of the tolower() function
using namespace std;

float feet; //float so that inches can be added as a percent of the foot
float inches; //float so that it can be divided by 12 to create a percentage of the foot
float m_feet; //float because it is being multiplied by a float
unsigned int m_meters; //unsigned int because it will only be positive and an integer
float m_centimeters; //float because it will be the remainder of a float multiplication

void userInput() //takes in the user's input
{
  cout << "Please enter how many feet you would like to convert." << endl;
  cin >> feet; //takes in the amount of feet
  cout << "Please enter how many inches you would like to convert." << endl;
  cin >> inches; //takes in the amount of inches
}

int calculateResult() //calculates the results based on the user's input
{
  m_feet = feet + (inches / 12); //finds the amount of feet in a decimal form (feet + inches)
  m_centimeters = m_feet * 30.48; //finds out the total number of centimeters given the number of feet
  m_meters = m_centimeters / 100; //finds out how many meters there are given centimeters
  m_centimeters = m_centimeters - (m_meters * 100); //finds out how many centimeters there are by finding out how many were left over by from the meters conversion
}

void resultOutput() //outputs the results to the users
{
  cout << feet << " feet and " << inches << " inches converts to " << m_meters << " meters and " << m_centimeters << " centimeters." << endl;
}

int main(int argc, char **argv)
{
  int exitVal = 0; //the value used to see if the user wants to continue the loop or not
  string continueVar; //the user's input as to whether or not they want to continue
  while(exitVal == 0) //while the user wants to remain in the loop
  {
    cout << "If you would like to quit, please type 'exit'. Otherwise, please type anything else." << endl;
    cin >> continueVar; //gets the user's input as to whether or not they want to continue looping
    for(int i = 0; i < continueVar.length(); ++i) //runs through the length of the string in order to prevent capitalization from missing an exit input
    {
      continueVar.at(i) = tolower(continueVar.at(i)); //turns every character into it's lowercase version
    }
    if(continueVar != "exit") //if the user does not want to exit
    {
      userInput(); //runs the input function
      calculateResult(); //runs the calculation function
      resultOutput(); //runs the output function
    }
    else //if the user wants to exit
    {
      cout << "Thank you for using my converter." << endl;
      exitVal = 1; //set the value to one to exit the while loop
    }
  }
  return 0;
}
