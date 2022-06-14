//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "Contact.class.hpp"

void Contact::SetDflData( size_t index )
{
	_FirstName = "Is empty";
	_LastName = "Is empty";
	_NickName = "Is empty";
	_DarkSecret = "Is empty";
	_PhoneNumber = "Is empty";
	this->_index = index;
}

void Contact::ShowContact( int flag )
{
	std::cout << '|';
	std::cout << this->_index;
	std::cout << '|';
	Contact::PrintContact( this->_FirstName );
	Contact::PrintContact( this->_LastName );
	Contact::PrintContact( this->_NickName );
	if(flag == 1)
	{
		Contact::PrintContact( this->_DarkSecret );
		Contact::PrintContact( this->_PhoneNumber );
	}
	std::cout << std::endl;
}

void Contact::PrintContact( std::string field )
{
	if(field.length() > 10)
	{
		std::cout << field.substr(0, 9);;
		std::cout << '.';
	}
	else
		std::cout << field;
	std::cout << '|';
}