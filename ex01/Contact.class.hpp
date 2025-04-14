/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:22:31 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/14 11:41:15 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
 #define CONTACT_CLASS_HPP

class	Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:
	void			Print(void);
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
