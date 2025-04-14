/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/14 16:04:10 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
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

	i = last_index;
	do {
		std::cout << "Enter first name : ";
		std::cin >> input_data;
		contacts[i].Set_first_name(input_data);
		//std::cin.clear();
		std::cin.ignore(256,'\n');
	} 	while (contacts[i].Get_first_name() == "");
	do {
		std::cout << "Enter last name : ";
		std::cin >> input_data;
		contacts[i].Set_last_name(input_data);
		// std::cin.clear();
		std::cin.ignore(256,'\n');
	} 	while (contacts[i].Get_last_name() == "");
	do {
		std::cout << "Enter nickname : ";
		std::getline(std::cin, input_data);
		contacts[i].Set_nickname(input_data);
		// std::cin.clear();
		std::cin.ignore(256,'\n');
	} 	while (contacts[i].Get_nickname() == "");
	do {
		std::cout << "Enter phone number : ";
		std::cin >> input_data;
		contacts[i].Set_phone_number(input_data);
		// std::cin.clear();
		std::cin.ignore(256,'\n');
	} 	while (contacts[i].Get_phone_number() == "");
	do {
		std::cout << "Enter darkest secret : ";
		std::getline(std::cin, input_data); // Takes several words (contrarily to std::cin) BUT keeps leading white spaces ! (AND waits for the user pressing a key ?) // check diff between std::cin.getline() and std::getline()
		std::cout << input_data << std::endl;
		contacts[i].Set_darkest_secret(input_data);
		std::cout << contacts[i].Get_darkest_secret() << std::endl;
		// std::cin.clear();
		std::cin.ignore(256,'\n');
	} 	while (contacts[i].Get_darkest_secret() == "");
	last_index++;
	if (last_index >= 8)
		last_index = 0;
	if (saved_contacts < 8)
		saved_contacts++;
	std::cout << "Contact saved." << std::endl;
}

void	PhoneBook::Search(void)
{
	int	column_width = 10;

	if (saved_contacts == 0)
	{
		std::cout << "Your phonebook is empty. No contact has been saved yet." << std::endl;
		return ;
	}
	std::cout << " ___________________________________________" << std::endl; 
	std::cout << "|" << std::setw(column_width) << "id";
	std::cout << "|" << std::setw(column_width) << "first n.";
	std::cout << "|" << std::setw(column_width) << "last n.";
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
	std::cout << std::endl << "Enter a person id to see their details : ";
	std::cin >> i;
	if (std::cin.fail())
	{
		std::cout << "Invalid id." << std::endl;
		std::cin.clear();
		std::cin.ignore(256,'\n');
		return ;
	}
	if (i >= 0 && i < saved_contacts)
		contacts[i].Print();
	else
		std::cout << "No saved contact with id " << i << std::endl;
}
