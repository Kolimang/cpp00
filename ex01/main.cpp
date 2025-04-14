/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/14 12:17:40 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(int argc, char *argv[])
{
	PhoneBook	myPhoneBook;
	std::string	command;

	(void)argc;
	(void)argv;

	while (1)
	{

		std::cout << "Type a command (ADD / SEARCH / EXIT) : ";
		std::cin >> command;
		if (command == "ADD")
			myPhoneBook.Add();
		else if (command == "SEARCH")
			myPhoneBook.Search();
		else if (command == "EXIT")
			return (0);
	}
}
