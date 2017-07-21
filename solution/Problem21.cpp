#include <iostream>
#include <unordered_map>
using namespace std;


int getDivisorSum(int num)
{
  int divSum = 0;
  for (int i = 1; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      divSum += i; 
    }
      
  }
  return divSum;
}

int getAmicableSum(int upperBound)
{
  int result = 0;
  unordered_map<int, int> numToDivSum;
  
  for (int i = 1; i < upperBound; i++)
  {
    int sum1 = getDivisorSum(i);
    numToDivSum[i] = sum1;
    
    
    if (sum1 < i)
    {
      if (numToDivSum[sum1] == i)
        {
          result += i + sum1;
        }
    }

  }
  return result;
}
// To execute C++, please define "int main()"
int main() {
  cout << getAmicableSum(10000);
  return 0;
}



