//Alphanzo Moore
//CIS-5 Online
//October 7, 2023
//Assignment 7C: Overloading

#include <iostream>
using namespace std; 
int addNums( int num1, int num2);
double addNums(double num1, double num2);

int main() 
{
  int result;
  double answer;

  result = addNums(5, 7);

  cout << "Result = " << result << endl;

  answer = addNums(5.5, 7.5);

  cout << "Answer = "
<< answer << endl;

  system("pause");
  return 0;
}

int addNums(int num1, int num2)
{
  int sum = num1 + num2;
  return sum;
}

double addNums(double num1, double num2)
{
  double sum = num1 + num2;
  return sum;
}