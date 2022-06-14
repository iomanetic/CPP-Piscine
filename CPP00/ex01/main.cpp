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
		line.clear();
		std::cin.clear();
		std::cout << "command_> ";
		std::getline(std::cin, line);
		if(std::cin.eof())
		{
			std::cout << std::endl << "Line can't is clear." << std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue ;
		}
		else if(line == "ADD")
			book.AddContact();
		else if(line == "SEARCH")
			book.SearchContact();
		else if(line == "EXIT")
			book.ExitTheBook();
		else if(line != "")
			std::cout << "Command not found.Available commands: ADD, SEARCH, EXIT." << std::endl;
	}
	return (0);
}