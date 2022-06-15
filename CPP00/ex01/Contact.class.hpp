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
public:
	void ShowContactPrev( void ) const;
	void ShowContactInfo( void ) const;
	bool SetContact( size_t ContactCount );

private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string _NickName;
	std::string _DarkSecret;
	std::string _PhoneNumber;
	size_t _index;

	void _PrintContact( std::string field ) const;
	void _WriteContactData( const char *message, std::string &field );
};

#endif
