//
// Created by Tile Tyuuki on 15.06.2022.
//

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) :
_accountIndex( _nbAccounts ),
_amount( initial_deposit ),
_nbDeposits( 0 ),
_nbWithdrawals( 0 )
{
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

static int	getNbAccounts( void )
{
	return ( Account::_nbAccounts );
}

static int	getTotalAmount( void )
{
	return ( Account::_totalAmount );
}

static int	getNbDeposits( void )
{
	return ( Account::_totalNbDeposits );
}

static int	getNbWithdrawals( void )
{
	return ( Account::_totalNbWithdrawals );
}
