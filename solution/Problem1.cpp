#include<iostream>
using namespace std;
// Get sum of an arithmetic progression given the first term and the limit
int GetSum(int first, int limit)
{
	int N = 0;
	int last = 0;

	if (limit % first == 0)
	{
		N = limit / first - 1;
	}
	else
	{
		N = limit / first;
	}
	last = N * first;

	// using the expression for sum of an AP n/2 (a + l)
	return (N * (first + last)) / 2;

}

int main()
{
	cout << GetSum(3, 1000) + GetSum(5, 1000) - GetSum(15, 1000);
}

