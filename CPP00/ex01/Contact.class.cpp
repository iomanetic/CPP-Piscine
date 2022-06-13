//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "Contact.class.hpp"

void Contact::SetDflData( size_t index )
{
	_FirstName = "----";
	_LastName = "----";
	_Nickname = "----";
	_DarkSecret = "----";
	_PhoneNumber = "----";
	this->index = index;
}