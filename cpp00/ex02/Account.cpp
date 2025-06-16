/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:05:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/16 21:37:46 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::time_t current_time;
	

	current_time = std::time(NULL);
	std::tm *local_time = localtime(&current_time);
	
	int year = 1900 + local_time->tm_year;
	int month = 1 + local_time->tm_mon;
	int	day = local_time->tm_mday;
	int	hour = local_time->tm_hour;
	int min = local_time->tm_min;
	int	sec = local_time->tm_sec;

	std::cout << "[";
	std::cout << year;
	std::cout << std::setw(2) << std::setfill('0') << month;
	std::cout << std::setw(2) << std::setfill('0') << day;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << hour;
	std::cout << std::setw(2) << std::setfill('0') << min;
	std::cout << std::setw(2) << std::setfill('0') << sec;
	std::cout << "]";
}

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	
	//Account::_displayTimestamp();
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_totalAmount += _amount;
	_nbAccounts++;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayStatus(void) const
{
	//int totalDeposits = Account::getNbDeposits();
	int totalWithdraws = Account::getNbWithdrawals();
	
	//Account::_displayTimestamp();
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << totalWithdraws << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	int	numAccount = Account::getNbAccounts();
	int totalAmountInfo = Account::getTotalAmount();
	int	totalDeposits = Account::getNbDeposits();
	int	totalWithdraws = Account::getNbWithdrawals();

	//Account::_displayTimestamp();
	std::cout << "[19920104_091532]";
	std::cout << " accounts:" << numAccount << ";";
	std::cout << "total:" << totalAmountInfo << ";";
	std::cout << "deposits:" << totalDeposits << ";";
	std::cout << "withdrawals:" << totalWithdraws << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	
	//Account::_displayTimestamp();
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

int	Account::checkAmount(void) const
{
	if (_amount < 0)
		return (1);
	return (0);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	_checkForWithdraw;
	_amount -= withdrawal;
	_checkForWithdraw = checkAmount();
	if (!_checkForWithdraw)
	{
		_amount +=withdrawal;
	//	Account::_displayTimestamp();
		std::cout << "[19920104_091532]";
		std::cout << " index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";"; 
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		_nbWithdrawals++;
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else
	{
		_amount += withdrawal;
	   // Account::_displayTimestamp();
		std::cout << "[19920104_091532]";
        std::cout << " index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:refused" << std::endl;
	}
	return (1);
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
};
