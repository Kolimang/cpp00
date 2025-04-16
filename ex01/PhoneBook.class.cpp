/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/16 14:52:59 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	last_index = 0;
	saved_contacts = 0;
}

void	PhoneBook::Add(void) 
{
	int 		i;
	bool		invalid;
	std::string	input_data;

	i = last_index;
	do {
		std::cout << "Enter first name : ";
		if (!std::getline(std::cin >> std::ws, input_data))
			exit(1) ;
		input_data = contacts[i].Trim_from_right(input_data);
		contacts[i].Set_first_name(input_data);
		invalid = contacts[i].Check_valid_name(contacts[i].Get_first_name(), 23);
		if (invalid)
			std::cout << "Invalid input. Please re-enter valid input." << std::endl;
	} 	while (contacts[i].Get_first_name() == "" || invalid);
	do {
		std::cout << "Enter last name : ";
		if (!std::getline(std::cin >> std::ws, input_data))
			exit(1) ;
		input_data = contacts[i].Trim_from_right(input_data);
		contacts[i].Set_last_name(input_data);
		invalid = contacts[i].Check_valid_name(contacts[i].Get_last_name(), 34);
		if (invalid)
			std::cout << "Invalid input. Please re-enter valid input." << std::endl;
	} 	while (contacts[i].Get_last_name() == ""  || invalid);
	do {
		std::cout << "Enter nickname : ";
		if (!std::getline(std::cin >> std::ws, input_data))
			exit(1) ;
		input_data = contacts[i].Trim_from_right(input_data);
		contacts[i].Set_nickname(input_data);
	} 	while (contacts[i].Get_nickname() == "");
	do {
		std::cout << "Enter phone number : ";
		if (!std::getline(std::cin >> std::ws, input_data))
			exit(1) ;
		input_data = contacts[i].Trim_from_right(input_data);
		contacts[i].Set_phone_number(input_data);
		invalid = contacts[i].Check_valid_phonenumber(contacts[i].Get_phone_number(), 26);
		if (invalid)
			std::cout << "Invalid input. Please re-enter valid input." << std::endl;
	} 	while (contacts[i].Get_phone_number() == ""  || invalid);
	do {
		std::cout << "Enter darkest secret : ";
		if (!std::getline(std::cin >> std::ws, input_data))
			exit(1) ;
		input_data = contacts[i].Trim_from_right(input_data);
		contacts[i].Set_darkest_secret(input_data);
	} 	while (contacts[i].Get_darkest_secret() == "");
	last_index++;
	if (last_index >= 8)
		last_index = 0;
	if (saved_contacts < 8)
		saved_contacts++;
	std::cout << "Contact saved." << std::endl << std::endl;
}

void	PhoneBook::Search(void)
{
	int	column_width = 10;

	if (saved_contacts == 0)
	{
		std::cout << "Your phonebook is empty. No contact has been saved yet." << std::endl << std::endl;
		return ;
	}
	std::cout << " ___________________________________________" << std::endl; 
	std::cout << "|" << std::setw(column_width) << "id";
	std::cout << "|" << std::setw(column_width) << "first name";
	std::cout << "|" << std::setw(column_width) << "last name";
	std::cout << "|" << std::setw(column_width) << "nickname";
	std::cout << "|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl; 
	int i = -1;
	while (++i < saved_contacts)
	{
		std::cout << "|";
		std::cout << std::setw(column_width) << i;
		std::cout << "|";
		std::cout << std::setw(column_width) << contacts[i].Crop(contacts[i].Get_first_name(), column_width);
		std::cout << "|";
		std::cout << std::setw(column_width) << contacts[i].Crop(contacts[i].Get_last_name(), column_width);
		std::cout << "|";
		std::cout << std::setw(column_width) << contacts[i].Crop(contacts[i].Get_nickname(), column_width);
		std::cout << "|" << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl << "Enter a person id to see their details : ";
	std::cin >> i;
	if (std::cin.fail())
	{
		std::cout << "Invalid id." << std::endl << std::endl;
		std::cin.clear();
		std::cin.ignore(256,'\n');
		return ;
	}
	if (i >= 0 && i < saved_contacts)
		contacts[i].Print();
	else
		std::cout << "No saved contact with id " << i << std::endl << std::endl;
}
