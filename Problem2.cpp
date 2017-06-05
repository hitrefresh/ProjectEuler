#include<iostream>
using namespace std;

int GetFibonacciEvenValuesSum(int limit)
{
    if (limit < 2)
        return 0;

    int prev = 1;
    int curr = 2;
    int sum = 0;

    while (curr <= limit)
    {
        // Can be improved to capture the Odd, Odd, Even pattern
        if (curr % 2 == 0)
            sum += curr;
        int temp = prev;
        prev = curr;
        curr += temp;
    }
    return sum;
}

int main()
{
    cout << GetFibonacciEvenValuesSum(4e6) << endl;
    cout << GetFibonacciEvenValuesSum(10);
}

