/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:05:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2025/06/16 19:08:46 by yrodrigu         ###   ########.fr       */
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

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_amount = deposit;
}

Account::Account(int initial_deposit)
{
	makeDeposit(initial_deposit);
	_accountIndex = _nbAccounts;
	std::cout << " index:" << _accountIndex << std::endl;
	_nbAccounts++;
}

Account::~Account(void){};
