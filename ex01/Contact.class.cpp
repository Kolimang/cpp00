/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/13 22:17:18 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	Contact::Print(void)
{
	;
}

std::string	Contact::Get_first_name(void)
{
	return (this->first_name);
}

void	Contact::Set_first_name(const char *str)
{
	//this->first_name = std::string(str);
	this->first_name = str;
}
