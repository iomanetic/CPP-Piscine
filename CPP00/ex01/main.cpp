//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "PhoneBook.class.hpp"

int main( void )
{
	std::string	line;
	PhoneBook	book;

	while(true)
	{
		std::getline(std::cin, line);
		if(line.empty())
			std::cout << "Line can't is clear" << std::endl;
		else
		{
			if (line == "EXIT")
				book.ExitTheBook();
		}
	}
	return (0);
}