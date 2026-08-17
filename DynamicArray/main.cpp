#include <iostream>
#include <limits> // used for std::numeric_limits
#include <algorithm> // used for min and max
#include <numeric> // used for avg

int main()
{
	// create a program that  creates an array based on the user input for size.
	// fill with data and  calculate statistics
	uint32_t aSize;  //array size
	std::cout << "Enter array size (1-to-10) : ";
	std::cin >>  aSize;
	// check for valid input
	while (std::cin.fail() || aSize < 1 || aSize > 10)
	{
		std::cout << "Error: expected integer between 1 and 10:";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> aSize;
	}
	//std::cout << "you want to go with : " << aSize << std::endl;
	 
	int* myArray = new int[aSize]{};

	for (int i = 0; i < aSize; ++i)
	{ 
		std::cout << "enter values 1 to " << aSize << " Value " << i + 1 << ":";
		std::cin >> myArray[i];
	}

	// ouput to screen min, max, avg 
	// ?? why do min and max need pointer to  array...   and avg does not?  
	// the reason is that min and max are functions that take iterators (pointers) to the beginning and end of the array, 
	// while avg is calculated using std::accumulate which takes a range of values (the array itself) and a starting value (0.0 in this case).
	std::cout << "min : " << *std::min_element(myArray, myArray + aSize) << std::endl;
	std::cout << "max : " << *std::max_element(myArray, myArray + aSize) << std::endl;
	std::cout << "avg : " << std::accumulate(myArray, myArray + aSize, 0.0) / aSize << std::endl;

	delete[] myArray; 
	return 0;

}