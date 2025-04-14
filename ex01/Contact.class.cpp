/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/14 11:42:10 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	Contact::Print(void)
{
	std::cout << "First name : " << this->Get_first_name() << std::endl;;
	std::cout << "Last name : " << this->Get_last_name() << std::endl;;
	std::cout << "Nickname : " << this->Get_nickname() << std::endl;;
	std::cout << "Phone # : " << this->Get_phone_number() << std::endl;;
	std::cout << "Darkest secret : " << this->Get_darkest_secret() << std::endl;;
}

std::string	Contact::Get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::Get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::Get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::Get_phone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::Get_darkest_secret(void)
{
	return (this->darkest_secret);
}

// void	Contact::Set_first_name(const char *str)
void	Contact::Set_first_name(std::string str)
{
	//this->first_name = std::string(str);
	this->first_name = str;
}

void	Contact::Set_last_name(std::string str)
{
	//this->first_name = std::string(str);
	this->last_name = str;
}

void	Contact::Set_nickname(std::string str)
{
	//this->first_name = std::string(str);
	this->nickname = str;
}
void	Contact::Set_phone_number(std::string str)
{
	//this->first_name = std::string(str);
	this->phone_number = str;
}
void	Contact::Set_darkest_secret(std::string str)
{
	//this->first_name = std::string(str);
	this->darkest_secret = str;
}
