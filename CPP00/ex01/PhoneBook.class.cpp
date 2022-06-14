//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : _ContactCount(2)
{
	size_t index;

	index = 0;
	PhoneBook::_WelcomeMessage();
	while(index < 8)
	{
		this->_Contact[index].SetDflData(index);
		index++;
	}
}

PhoneBook::~PhoneBook( void )
{

}

void PhoneBook::_WelcomeMessage( void ) const
{
	std::cout << std::right << std::setw(40) << "Welcome to the Phone Book!" << "You can pick actions:" << std::endl
				<< std::right << std::setw(45) << "1 - ADD(Add new contact)." << std::endl
				<< std::right << std::setw(47) << "2 - SEARCH(Search contact)." << std::endl
				<< std::right << std::setw(48) << "3 - EXIT(exit at Phone Book." << std::endl;
}

void PhoneBook::AddContact( void )
{

}

void PhoneBook::SearchContact( void )
{
	if(!this->_ContactCount)
		std::cout << "PhoneBook is empty.Please use command: ADD." << std::endl;
	else
	{
		int index;

		for(int i = 0; i < this->_ContactCount; i++)
			this->_Contact[i].ShowContact( 0 );
		std::cout << "Please type index contact: ";
		while(!(std::cin >> index))
		{
			std::cout << "Please type correct index: ";
			if(std::cin.eof())
			{
				std::cin.clear();
				clearerr(stdin);
				continue ;
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			clearerr(stdin);
		}
		if(index > this->_ContactCount || index < 0)
		{
			std::cout << "Index is non valid.Please type correct index." << std::endl;
			return ;
		}
		this->_Contact[index].ShowContact( 1 );
	}
}

void PhoneBook::ExitTheBook( void )
{
	std::cout << "See you later..." << std::endl;
	exit (0);
}