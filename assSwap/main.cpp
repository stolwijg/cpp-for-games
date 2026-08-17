#include <iostream>

void swap(int &a,  int &b)
{ // function called swap that takes two integers as arguments and swaps their values.
	// passed as reference, so  original values  get swapped. ( even if the name has changed in the context of the function.) 
	int orgA = a;
	
	a = b;
	b = orgA;
	std::cout << "swapped values" << std::endl;
	// return 0; void dus geen return.

}

void swapp(int* a, int* b)
{ // function called swap that takes two integers (int pointers) as arguments and swaps their values.
	// passed as reference, so  original values  get swapped. ( even if the name has changed in the context of the function.) 
	int orgA = *a;

	*a = *b;
	*b = orgA;
	std::cout << "swapped values" << std::endl;
	std::cout << "tmp val: " << orgA << std::endl;
	// return 0; void dus geen return.

}

int main()
{
		int previous = 2003; 
		int proposed = 2026;

		int* pprevious = &previous;
		int* pproposed = &proposed;

		std::cout << "previous value: " << *pprevious << std::endl;
		std::cout << "proposed value: " << *pproposed << std::endl;

		swapp(pprevious, pproposed);
		
		std::cout << "previous value: " << *pprevious << std::endl;
		std::cout << "proposed value: " << *pproposed << std::endl;


		std::cout << "-- after --" << std::endl;
		std::cout << "previous: " << previous << " (address: " << pprevious << ")" << std::endl;
		std::cout << "proposed: " << proposed << " (address: " << pproposed << ")" << std::endl;


	return 0;
}

