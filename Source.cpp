#include <iostream>

int factorial(int n) // factorial of n!
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		int factorialN = n * factorial(n - 1);
		return factorialN;
	}
}

int powerNumber(int base, int power) // where x is at the power of n
{
	if (power == 1)
	{
		return base;
	}
	else
	{
		return base * powerNumber(base, power - 1);
	}
}

int main()
{
	std::cout << "Factorial Recursive Method: ";
	std::cout << factorial(6) << std::endl;

	std::cout << "Power Recursive Method: ";
	std::cout << powerNumber(6,3) << std::endl;
}