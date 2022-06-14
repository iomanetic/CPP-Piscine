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
	for(int i = 0; i < this->_ContactCount; i++)
		this->_Contact[i].ShowContactPrev();
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::SearchContact( void )
{
	if(!this->_ContactCount)
		std::cout << "PhoneBook is empty.You can add your first contact with - ADD" << std::endl;
	else
	{
		int index;

		this->_ShowInfo();
		std::cout << "Enter index: ";
		while(!(std::cin >> index))
		{
			std::cout << std::endl << "Enter index: ";
			if(std::cin.eof())
			{
				std::cin.clear();
				clearerr(stdin);
				continue ;
			}
			std::cin.clear();
			clearerr(stdin);
			std::cin.ignore(1000, '\n');
		}
		std::cin.ignore(1000, '\n');
		if(index + 1 > this->_ContactCount || index < 0)
			std::cout << "Non valid index.Please try again." << std::endl;
		else
			this->_Contact[index].ShowContactInfo();
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