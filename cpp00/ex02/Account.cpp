#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_totalAmount += this->_amount;
	Account::_nbAccounts++;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}


bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
	else
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
}

int	Account::checkAmount(void) const
{
	return (1);
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	now;
	tm		*ltm;

	now = time(0);
	ltm = localtime(&now);
	std::cout << '[' << 1900 + ltm->tm_year;
	if (1 + ltm->tm_mon < 10)
		std::cout << '0';
	std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << '0';
	std::cout << ltm->tm_mday << '_';
	if (ltm->tm_hour < 10)
		std::cout << '0';
	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << '0';
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << '0';
	std::cout << ltm->tm_sec << ']';
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
