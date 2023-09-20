#include "Account.hpp"
#include <iostream>
#include <time.h>

static int index_acc;

int Account::_totalAmount;
int Account::_nbAccounts;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account( int initial_deposit )
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    this->_accountIndex = index_acc;
    index_acc++;
    this->_amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
};

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
};

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}
void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _totalNbDeposits++;
    _totalAmount += deposit;
    this->_nbDeposits++;
    this->_amount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (this->_amount < withdrawal)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (0);
    }
    else
        this->_amount -= withdrawal;
    _totalNbWithdrawals++;
    this->_nbWithdrawals++;
    _totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (1);
}

void	Account::_displayTimestamp( void )
{
    time_t  stock_time;
    struct tm *time_struct;
    char buffer[19];

    time(&stock_time);
    time_struct = localtime(&stock_time);
    strftime(buffer, 19, "[%Y%m%e_%H%M%S] ", time_struct);
    std::cout << buffer;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

