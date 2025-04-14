/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/14 12:19:27 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	last_index = 0;
	saved_contacts = 0;
}

void	PhoneBook::Add(void) 
{
	int 		i;
	std::string	input_data;

	std::cout << "Add a contact" << std::endl;
	i = last_index;
	do {
		std::cout << "Enter first name : ";
		std::cin >> input_data;
		contacts[i].Set_first_name(input_data);
	} 	while (contacts[i].Get_first_name() == "");
	do {
		std::cout << "Enter last name : ";
		std::cin >> input_data;
		contacts[i].Set_last_name(input_data);
	} 	while (contacts[i].Get_last_name() == "");
	do {
		std::cout << "Enter nickname : ";
		std::cin >> input_data;
		contacts[i].Set_nickname(input_data);
	} 	while (contacts[i].Get_nickname() == "");
	do {
		std::cout << "Enter phone number : ";
		std::cin >> input_data;
		contacts[i].Set_phone_number(input_data);
	} 	while (contacts[i].Get_phone_number() == "");
	do {
		std::cout << "Enter darkest secret : ";
		std::cin >> input_data;
		contacts[i].Set_darkest_secret(input_data);
	} 	while (contacts[i].Get_darkest_secret() == "");
	last_index++;
	if (last_index >= 8)
		last_index = 0;
	if (saved_contacts < 8)
		saved_contacts++;
}

void	PhoneBook::Search(void)
{
	if (saved_contacts == 0)
	{
		std::cout << "Your phonebook is empty. No contact has been saved yet." << std::endl;
		return ;
	}
	int i = -1;
	while (++i < saved_contacts)
	{
		std::cout << i;
		std::cout << " " << contacts[i].Get_first_name();
		std::cout << " " << contacts[i].Get_last_name();
		std::cout << " " << contacts[i].Get_nickname() << std::endl;
	}
	std::cout << "Want to see a contact's details ? Enter its id number : ";
	std::cin >> i;
	if (i >= 0 && i < saved_contacts)
		contacts[i].Print();
	else
		std::cout << "No saved contact with id " << i << std::endl;
}

