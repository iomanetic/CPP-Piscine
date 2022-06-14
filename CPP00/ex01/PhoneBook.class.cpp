//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : _ContactCount(0)
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
	std::cout << std::setw(40) << "Welcome to the Phone Book!" << "You can pick actions:" << std::endl
				<< std::setw(45) << "1 - ADD(Add new contact)." << std::endl
				<< std::setw(47) << "2 - SEARCH(Search contact)." << std::endl
				<< std::setw(48) << "3 - EXIT(exit at Phone Book." << std::endl;
}

void PhoneBook::AddContact( void )
{

}

void PhoneBook::SearchContact( void )
{
		int index;

		std::cout	<< " --------------------------------------------" << std::endl
					<< " |INDEX | FIRST NAME | LAST NAME | NICKNAME |" << std::endl
					<< " --------------------------------------------" << std::endl;
		if(!this->_ContactCount)                                                         //if contact list is empty print this
		{
			std::cout << "  PhoneBook is empty.Please use command: ADD." << std::endl;
			return ;
		}
		for(int i = 0; i < this->_ContactCount; i++)                                      //Print contact list
			this->_Contact[i].ShowContactList();
		std::cout << std::endl << "Please type index contact: ";
		if(!(std::cin >> index))                                                          //Get contact index
		{
			std::cout << "It's non numeric param.Please try again." << std::endl;
			return ;
		}
		if(index > this->_ContactCount || index < 0)                                      //If contact index > numbers of contact
		{
			std::cout << "Index is non valid.Please type correct index." << std::endl;
			return ;
		}
		this->_Contact[index].ShowContactInfo();                                           //Print full info about contact
}

void PhoneBook::ExitTheBook( void )
{
	std::cout << "See you later..." << std::endl;
	exit (0);
}