/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/11 15:55:39 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	int	i = 0;

	while (this->contacts[i] != NULL)
	{
		this->contacts[i] = NULL;
		i++;
	}
}

void	PhoneBook::Add(void)
{
	;
}

void	PhoneBook::Print(void)
{
	;
}

void	PhoneBook::Exit(void)
{
	return ;
}
