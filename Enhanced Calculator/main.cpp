#include <iostream>
#include <limits>
#include <string>//used older project but dont think this line was nessasary.

int main()
{
	double n;
	std::cout << "Welcome to Gertjan 's first calculator." << std::endl;
	std::cout << "Please enter your first number." << std::endl;
	std::cin >> n;

	while (std::cin.fail())
	{
		std::cout << "ERROR: I expected a number." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> n;
	}
	std::cout << "the number you entered was " <<  n;

	enum
	{
		addition,
		subtraction,
		multiplication,
		divison,
		mod,
		exponent
	};
	int choices; // menu variable
	std::cout << "now enter the respective number of your chosen calculator type addition 0 subtraction 1 multiplication 2 divison 3 mod 4 exponent 5" << std::endl;
	std::cin >> choices;
	while (std::cin.fail()||choices <0 || choices > 5)
	{
		std::cout << "ERROR: I expected a number between 0 and 5." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> choices;
	}

	int sn; // second number variable
	std::cout << "enter your second number after that caculation will begin" << std::endl;
	std::cin >> sn;

	while (std::cin.fail())
	{
		std::cout << "ERROR: I expected a number." << std::endl;
		std::cout << "try again" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> sn;
	}

	double a; // answer  variable

	if (choices == 0)
	{
		a = n + sn;
		std::cout << n << "+" << sn << "=" << a << std::endl;
	}
	else if (choices == 1)
	{
		a = n - sn;
		std::cout << n << "-" << sn << "=" << a << std::endl;
	}
	else if (choices == 2)
	{
		a = n * sn;
		std::cout << n << "*" << sn << "=" << a << std::endl;
	}
	else if (choices == 3)
	{
		if (sn == 0)
		{
			std::cout << "cant devide by 0" << std::endl;
			return 1;
		}
		a = n / sn;
		std::cout << n << "/" << sn << "=" << a << std::endl;	
	}
	else if (choices == 4)	
	{
		if (sn == 0)
		{
			std::cout << "cant devide by 0" << std::endl;
			return 1;
		}
		a = static_cast<int>(n) % static_cast<int>(sn);
		std::cout << n << "%" << sn << "=" << a << std::endl;
	}
	else if (choices == 5)
	{
		a = pow(n, sn);
		std::cout << n << "^" << sn << "=" << a << std::endl;	
	}
	else
	{
		std::cout << "ERROR: I expected a number between 0 and 5." << std::endl;
		return 1;
	}
	
	return 0;
}