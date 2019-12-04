#include <iostream>

int factorial(int n) // factorial of n!
{
	if (n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int powerNumber(int base, int power) // where x is at the power of n
{
	if (power == 1)
	{
		return base;
	}
	return base * powerNumber(base, power - 1);
}

int sum(int number) // the sum of all the numbers less then "number"
{
	if (number == 1)
	{
		return 1;
	}
	return number + sum(number - 1);
}

bool isPowerOfTwo(int number) // checks if a number is a power of 2 product
{
	if (number%2 == 0)
	{
		if (number == 2)
		{
			return true;
		}
		isPowerOfTwo(number / 2);
	}
	else
	{
		return false;
	}

}


int main()
{
	std::cout << "Factorial Recursive Method: ";
	std::cout << factorial(6) << std::endl;

	std::cout << "Power Recursive Method: ";
	std::cout << powerNumber(6,3) << std::endl;

	std::cout << "Sum Recursive Method: ";
	std::cout << sum(3) << std::endl;

	std::cout << "Is Power Of Recursive method: " << std::endl;
	if (isPowerOfTwo(4))
	{
		std::cout << 8 << " is a power of 2!" << std::endl;
	}
	else
	{
		std::cout << 8 << " is NOT a power of 2!" << std::endl;
	}
	if (isPowerOfTwo(9))
	{
		std::cout << 9 << " is a power of 2!" << std::endl;
	}
	else
	{
		std::cout << 9 << " is NOT a power of 2!" << std::endl;
	}
}