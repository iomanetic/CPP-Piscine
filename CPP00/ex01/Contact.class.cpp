//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "Contact.class.hpp"

bool Contact::SetContact( size_t ContactCont )
{
	std::cout << std::endl << "Fields can't empty.Watch out for this..." << std::endl;
	this->_index = ContactCont % 8 + 1;
	this->_WriteContactData("Enter your first name: ", this->_FirstName);
	this->_WriteContactData("Enter your last name: ", this->_LastName);
	this->_WriteContactData("Enter your nickname: ", this->_NickName);
	this->_WriteContactData("Enter your dark secret: " ,this->_DarkSecret);
	this->_WriteContactData("Enter your phone number: ", this->_PhoneNumber);
	if(ContactCont == 8)
		return (false);
	return (true);
}

void Contact::ShowContactPrev( void ) const
{
	std::cout << "|";
	std::cout << std::setw(10) << this->_index;
	std::cout << "|";
	this->_PrintContact(this->_FirstName);
	this->_PrintContact(this->_LastName);
	this->_PrintContact(this->_NickName);
	std::cout << std::endl;
}

void Contact::ShowContactInfo( void ) const
{
	std::cout << std::endl;
	std::cout 	<< "Index: " << this->_index << std::endl
				<< "First Name: " << this->_FirstName << std::endl
				<< "Last Name: " << this->_LastName << std::endl
				<< "Nickname: " << this->_NickName << std::endl
				<< "Dark Secret: " << this->_DarkSecret << std::endl
				<< "Phone Number: " << this->_PhoneNumber << std::endl;
	std::cout << std::endl;
}

void Contact::_PrintContact( std::string field ) const
{
	if(field.length() > 10)
		std::cout << std::setw(9) << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << field;
	std::cout << "|";
}

void Contact::_WriteContactData( const char *message, std::string &field )
{
	bool flag;

	flag = true;
	while(flag)
	{
		std::cout << message;
		std::getline(std::cin, field);
		if(std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue ;
		}
		else if(field.empty())
			continue ;
		else
			flag = false;
	}
}