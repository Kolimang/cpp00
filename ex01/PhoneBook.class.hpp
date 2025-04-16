/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:22:31 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/16 14:52:03 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
 #define PHONEBOOK_CLASS_HPP

 #include <iostream>
 #include <iomanip>
 #include <cstdlib>
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
