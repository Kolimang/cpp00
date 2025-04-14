/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:22:31 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/14 11:58:20 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
 #define PHONEBOOK_CLASS_HPP

 #include "Contact.class.hpp"
 
class	PhoneBook
{
	Contact	contacts[8];
	int		last_index;
	int		saved_contacts;

	public:
	PhoneBook(void);
	void	Add();
	void	Search();
};

#endif
