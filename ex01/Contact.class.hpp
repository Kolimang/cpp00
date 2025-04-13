/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:22:31 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/13 22:17:29 by jrichir          ###   ########.fr       */
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
	void			Set_first_name(const char *s);
};

#endif
