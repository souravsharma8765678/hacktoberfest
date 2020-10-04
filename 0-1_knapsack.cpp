#include <iostream>
#include <climits>
using namespace std;

int knapSack(int v[], int w[], int n, int W)
{
	if (W < 0)
		return INT_MIN;
	if (n < 0 || W == 0)
		return 0;
	int include = v[n] + knapSack(v, w, n - 1, W - w[n]);
	int exclude = knapSack(v, w, n - 1, W);
	return max (include, exclude);
}

int main()
{
	// Input: set of items each with a weight and a value
	int v[] = { 10, 6, 34, 42, 432, 12 };
	int w[] = {  1, 3,  4,  9,  8, 2 };

	// Knapsack capacity
	int W = 10;

	// number of items
	int n = sizeof(v) / sizeof(v[0]);

	cout << "Knapsack value is " << knapSack(v, w, n - 1, W);

	return 0;
}
