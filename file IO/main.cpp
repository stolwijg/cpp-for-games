#include <fstream>
#include <iostream>

int main()
{   // write ascii files 
	{
		std::ofstream highscores("highscores.txt");
		if (!highscores)
		{
			std::cerr << "Error: could not open file for writing." << std::endl;
			return 1;
		}

		highscores << "gjs " << std::endl;

		if (highscores.bad())
		{
			std::cerr << "Error: could not open file for writing." << std::endl;
			return 1;
		}

	}
	return 0;

}