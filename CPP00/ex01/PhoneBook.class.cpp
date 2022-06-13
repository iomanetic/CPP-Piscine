//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : _ContactCount(0)
{
	size_t index;

	index = 0;
	PhoneBook::WelcomeMessage();
	while(index < 8)
	{
		_Contact[index].SetDflData(index);
		index++;
	}
}

PhoneBook::~PhoneBook( void )
{

}

void PhoneBook::WelcomeMessage( void )
{
	std::cout << "Welcome to the Phone Book!" << std::endl
				<< "You can pick actions:" << std::endl
				<< "1 - ADD(Add new contact)" << std::endl
				<< "2 - SEARCH(Search contact)" << std::endl
				<< "3 - EXIT(exit at Phone Book" << std::endl;
}

void PhoneBook::AddContact( void )
{

}

void PhoneBook::SearchContact( void )
{

}

void PhoneBook::ExitTheBook( void )
{
	std::cout << "See you later..." << std::endl;
	exit (0);
}