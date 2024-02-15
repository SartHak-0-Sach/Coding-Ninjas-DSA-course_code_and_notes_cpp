#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Write your code here
  int basic;
  cin >> basic;
  float hra = basic * 0.2;
  int x = (int)hra;
  if (hra - x > 0.5)
  {
    hra = x + 1;
  }
  else
  {
    hra = x;
  }
  float da = basic * 0.5;
  x = (int)da;
  if (da - x > 0.5)
  {
    da = x + 1;
  }
  else
  {
    da = x;
  }
  float pf = basic * 0.11;
  x = (int)pf;
  if (pf - x > 0.5)
  {
    pf = x + 1;
  }
  else
  {
    pf = x;
  }
  char grade;
  cin >> grade;
  string string1;
  cin >> string1;
  int total_salary = basic + hra + da - pf;
  if (grade == 65)
  {
    total_salary += 1700;
    string1.empty() ? total_salary = total_salary + 1 - 1 : total_salary = total_salary - 400;
  }
  else if (grade == 66)
  {
    total_salary += 1500;
    string1.empty() ? total_salary = total_salary + 1 - 1 : total_salary = total_salary - 200;
  }
  else
  {
    total_salary += 1300;
  }
  cout << total_salary;
}