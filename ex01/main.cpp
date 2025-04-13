/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/13 22:24:58 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(int argc, char *argv[])
{
	PhoneBook	aPhoneBook;
	Contact		contacts[8];
	std::string	command;

	(void)argc;
	(void)argv;

	while (1)
	{

		std::cout << "Type a command (ADD / SEARCH / EXIT) : ";
		std::cin >> command;
		if (command == "ADD")
			aPhoneBook.Add();
		else if (command == "SEARCH")
			aPhoneBook.Search();
		else if (command == "EXIT")
			return (0);
	}
}
