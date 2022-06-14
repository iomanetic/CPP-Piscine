//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "Contact.class.hpp"

bool Contact::SetContact( size_t ContactCont )
{
	this->_index = ContactCont % 8;
	if(!this->_WriteContactData("Enter your first name: ", this->_FirstName))
		return (false);
	if(!this->_WriteContactData("Enter your lase name: ", this->_LastName))
		return (false);
	if(!this->_WriteContactData("Enter your nickname: ", this->_NickName))
		return (false);
	if(!this->_WriteContactData("Enter your dark secret: " ,this->_DarkSecret))
		return (false);
	if(!this->_WriteContactData("Enter your phone number: ", this->_PhoneNumber))
		return (false);
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

bool Contact::_WriteContactData( const char *message, std::string &field )
{
	std::cout << message;
	std::getline(std::cin, field);
	if(std::cin.eof() || field.empty())
	{
		std::cout << std::endl << "Info can't is empty.Please try again" << std::endl;
		std::cin.clear();
		clearerr(stdin);
		return (false);
	}
	return (true);
}