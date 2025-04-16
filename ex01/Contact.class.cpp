/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:29:39 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/16 14:51:25 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	is_invalid = false;
}

void	Contact::Print(void)
{
	std::cout << std::endl;
	std::cout << "First name     : " << this->Get_first_name() << std::endl;
	std::cout << "Last name      : " << this->Get_last_name() << std::endl;
	std::cout << "Nickname       : " << this->Get_nickname() << std::endl;
	std::cout << "Phone number   : " << this->Get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << this->Get_darkest_secret() << std::endl << std::endl;
}

std::string	Contact::Trim_from_right(std::string str, const char* whitespaces)
{
    str.erase(str.find_last_not_of(whitespaces) + 1);
    return (str);
}

bool	Contact::Check_valid_name(std::string name, unsigned int maxlength)
{
	this->is_invalid = false;
	this->is_invalid = name.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ '.-") != std::string::npos;
	if (name.length() < 2 || name.length() > maxlength)
		this->is_invalid = true;
	return (this->is_invalid);
}

bool	Contact::Check_valid_phonenumber(std::string phonenumber, unsigned int maxlength)
{
	this->is_invalid = false;
	this->is_invalid = phonenumber.find_first_not_of("0123456789 /.()-+") != std::string::npos;
	if (phonenumber.length() < 2 || phonenumber.length() > maxlength)
		this->is_invalid = true;
	return (this->is_invalid);
}

std::string	Contact::Crop(std::string str, unsigned int limit)
{
	std::string 	cropped_str;
	unsigned int	i;

	if (str.length() < limit)
		return (str);
	i = 0;
	while (i < limit - 1)
	{
		cropped_str += str[i];
		i++;
	}
	cropped_str += '.';
	return (cropped_str);
}

// Accessors (getters, setters)
std::string	Contact::Get_first_name(void)     { return (this->first_name);     }
std::string	Contact::Get_last_name(void)      { return (this->last_name);      }
std::string	Contact::Get_nickname(void)       { return (this->nickname);       }
std::string	Contact::Get_phone_number(void)   { return (this->phone_number);   }
std::string	Contact::Get_darkest_secret(void) { return (this->darkest_secret); }
void	Contact::Set_first_name(std::string str)     { this->first_name = str;     }
void	Contact::Set_last_name(std::string str)      { this->last_name = str;      }
void	Contact::Set_nickname(std::string str)       { this->nickname = str;       }
void	Contact::Set_phone_number(std::string str)   { this->phone_number = str;   }
void	Contact::Set_darkest_secret(std::string str) { this->darkest_secret = str; }
