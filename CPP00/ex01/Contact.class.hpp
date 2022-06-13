//
// Created by Tile Tyuuki on 10.06.2022.
//

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

//includes
# include <iostream>
# include <cstring>
# include <iomanip>

class Contact
{
private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string _Nickname;
	std::string _DarkSecret;
	std::string _PhoneNumber;
	size_t index;

public:
	void SetDflData( size_t index );
};

#endif
