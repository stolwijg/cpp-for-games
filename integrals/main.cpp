#include <iostream>
#include <cstdint>

int main()
{
	int min_int = -2146483647;
	int max_int = 2146483647;

	unsigned int min_uint = 0;
//	unsigned int max_uint = 4294967295;  dit mag je ook als -1 schrijven. max nummer integer.
	unsigned int max_uint = -1;
	std::cout << "Sizeof int: " << sizeof(int) << std::endl;
	std::cout << "min uint (-1): " << max_uint << std::endl;


	short max_short = 32767;
	short min_short = -32768;

	unsigned max_ushort = 0xFFFF;

	std::cout << " a " << std::endl;
	std::cout << "size of short  " << sizeof(short) << std::endl;


	return 0;
}