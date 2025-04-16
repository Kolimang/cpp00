/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:22:31 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/16 14:51:16 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
 #define CONTACT_CLASS_HPP

 #include <iostream>
 #include <iomanip>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		bool		is_invalid;

	public:
		Contact(void);
		bool			Check_valid_name(std::string name, unsigned int maxlength);
		bool			Check_valid_phonenumber(std::string phonenumber, unsigned int maxlength);
		void			Print(void);
		std::string		Crop(std::string str, unsigned int limit);
		std::string		Trim_from_right(std::string str, const char* whitespaces = " \t\n\r\f\v");
		std::string		Get_first_name(void);
		std::string		Get_last_name(void);
		std::string		Get_nickname(void);
		std::string		Get_phone_number(void);
		std::string		Get_darkest_secret(void);
		void			Set_first_name(std::string str);
		void			Set_last_name(std::string str);
		void			Set_nickname(std::string str);
		void			Set_phone_number(std::string str);
		void			Set_darkest_secret(std::string str);
};

#endif
