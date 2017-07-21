#include<iostream>
using namespace std;

int GetSumSquareDifference(int N)
{
	int sum = N * (N + 1) / 2;
	int squareOfTheSum = sum * sum;

	int sumOfTheSquares = 0;
	for (int i = 1; i <= N; i++)
	{
		sumOfTheSquares += i * i;
	}
	return squareOfTheSum - sumOfTheSquares;
}

int main()
{
	cout << GetSumSquareDifference(10) << endl;
	cout << GetSumSquareDifference(100) << endl;
}

