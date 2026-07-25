#include <iostream>
#include <string>
#include <limits>
int main()
{

	// Write a C++ program that prompts the user to enter their name and age. The program should then print a greeting message in the format "Hello, . You are years old." Replace and with the user's input.

	// declare variables 
	std::string name;
	int age;


	std::cout << "What is your name?" << std::endl;
	std::cin >> name;
	std::cout << "What is your age (enter a number)" << std::endl;
	std::cin >> age;
	
	while  (std::cin.fail())
	{
		std::cout << "ERROR i expeded a number." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		std::cin >> age;
	}
	

	std::cout << "Hello " << name;

	if (age < 25)
		std::cout << ". You are " << age << " years old." << std::endl;
	else if (age >= 25 && age < 50)
		std::cout << ". You are already " << age << " years old." << std::endl;
	else
		std::cout << ". You are a very wise person." << std::endl;
	
	std::cout << "Press enter to continue ..." << std::endl;
	std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}