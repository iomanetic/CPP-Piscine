//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : _ContactCount(0) { }

PhoneBook::~PhoneBook( void ) { }

void PhoneBook::AddContact( void )
{
	if(this->_Contact[this->_ContactCount % 8].SetContact(this->_ContactCount))
		this->_ContactCount++;
}

void PhoneBook::_ShowInfo( void )
{
	std::cout << "---------------------------------------------" << std::endl
			  << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl
			  << "---------------------------------------------" << std::endl;
	for(size_t index = 0; index < this->_ContactCount; index++)
		this->_Contact[index].ShowContactPrev();
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::SearchContact( void )
{
	if(!this->_ContactCount)
		std::cout << "PhoneBook is empty.You can add your first contact with - ADD" << std::endl;
	else
	{
		std::string	s_index;
		int 		index;

		this->_ShowInfo();
		index = -1;
		while(index <= 0 || index > 8)
		{
			std::cout << "Enter contact index: ";
			std::getline(std::cin, s_index);
			if(std::cin.eof())
			{
				std::cin.clear();
				clearerr(stdin);
				std::cout << std::endl;
			}
			index = atoi(s_index.c_str());
		}
		if(index > this->_ContactCount)
			std::cout << "Non valid index.Please try again" << std::endl;
		else
			this->_Contact[index - 1].ShowContactInfo();
	}
}

void PhoneBook::ExitTheBook( void ) const
{
	std::cout << "See you later..." << std::endl;
	exit (0);
}

void PhoneBook::_WelcomeMessage( void ) const
{
	std::cout << std::setw(40) << "Welcome to the Phone Book!" << "You can pick actions:" << std::endl
			  << std::setw(45) << "1 - ADD(Add new contact)." << std::endl
			  << std::setw(47) << "2 - SEARCH(Search contact)." << std::endl
			  << std::setw(48) << "3 - EXIT(exit at Phone Book." << std::endl;
}