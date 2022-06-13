//
// Created by Tile Tyuuki on 10.06.2022.
//

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

//includes
# include <iostream>
# include "Contact.class.hpp"

//class
class PhoneBook
{
private:
	Contact	_Contact[8];
	size_t	_ContactCount;

	void WelcomeMessage( void );

public:
	PhoneBook( void );
	~PhoneBook( void );

	void AddContact( void );
	void SearchContact( void );
	void ExitTheBook( void );
};

#endif
