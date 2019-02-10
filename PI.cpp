#include "stdio.h"
#include <iostream>
#include <ctime>

using namespace std;

void pi_func(int n)
{
	double pi, sum, h, x;
	h = 1.0 / (double)n;
	sum = 0.0;
	for (int i = 1; i <= n; i++)
	{
		x = h * ((double)i - 0.5);
		sum += (4.0 / (1.0 + x * x));
	}
	double time_end = clock();
	pi = h * sum;
	printf("pi is= %.16f", pi); cout << endl;
}

int main()
{
	pi_func(3);
	pi_func(30);
	pi_func(300);
	pi_func(3000);
	pi_func(30000);
	pi_func(300000);
	pi_func(3000000);
	pi_func(30000000);
	return 0;
}