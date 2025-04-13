/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:22:31 by jrichir           #+#    #+#             */
/*   Updated: 2025/04/13 21:43:18 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
 #define PHONEBOOK_CLASS_HPP

 #include "Contact.class.hpp"
 
class	PhoneBook
{
	Contact	contacts[8];
	
	public:
	PhoneBook(void);
	void	Add();
	void	Search();
	void	Exit();
};

#endif
