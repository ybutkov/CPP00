/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:51:15 by ybutkov           #+#    #+#             */
/*   Updated: 2026/01/30 15:51:17 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <optional>

class Phonebook
{
    private:
		static constexpr int CONTACTS_CAPACITY = 8;
		int	m_size = 0;
		int	m_index = 0;
		Contact m_contacts[CONTACTS_CAPACITY];
	public:
		std::optional<Contact>  getContact(int contactIndex) const;
		bool addContact(Contact contact);
		bool updateContact(int index, Contact contact);
		int	getSize() const;
        
};

#endif
