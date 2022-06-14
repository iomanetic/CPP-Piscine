//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "Contact.class.hpp"

void Contact::SetDflData( size_t index )
{
	_FirstName = "Is emptyqddqdqd";
	_LastName = "Is emptyqdqdqd";
	_NickName = "Is emptyqdqd";
	_DarkSecret = "Is empty";
	_PhoneNumber = "Is empty";
	this->_index = index;
}

void Contact::ShowContactList( void )
{
	std::cout << " | ";
	std::cout << this->_index;
	std::cout << " | ";
	Contact::PrintContact( this->_FirstName );
	Contact::PrintContact( this->_LastName );
	Contact::PrintContact( this->_NickName );
	std::cout << std::endl;
}

void Contact::ShowContactInfo( void )
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

void Contact::PrintContact( std::string field )
{
	if(field.length() > 10)
		std::cout << std::setw(5) << field.substr(0, 9) << ".";
	else
		std::cout << field;
	std::cout << " | ";
}