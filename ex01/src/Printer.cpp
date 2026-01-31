/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:51:55 by ybutkov           #+#    #+#             */
/*   Updated: 2026/01/30 15:51:56 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Printer.hpp"
#include <iomanip>
#include <iostream>

namespace
{
std::string truncateString(std::string str, std::size_t width = 10)
{
	if (str.size() < width)
		return (str);
	return (str.substr(0, width - 1) + ".");
}

} // namespace

void Printer::printPhonebook(const Phonebook& phonebook)
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐\n";
	std::cout << "│     Index│First Name│ Last Name│  Nickname│\n";
	std::cout << "├──────────┼──────────┼──────────┼──────────┤\n";
	for(int i = 0; i < phonebook.getSize(); ++i)
	{
		printTableRow(i, phonebook.getContact(i).value());
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl; 
}

void Printer::printTableRow(int index, const Contact &contact)
{
	std::cout << "│" << std::setw(10)
				<< index
                << "│" << std::setw(10)
				<< truncateString(contact.getFirstName())
				<< "│" << std::setw(10)
				<< truncateString(contact.getLastName())
				<< "│" << std::setw(10)
				<< truncateString(contact.getNickName())
				<< "│"
				<< std::endl;
}

void Printer::printContact(const Contact &contact)
{
	std::cout << "First name: " << contact.getFirstName() << "\n"
				<< "Last name: " << contact.getLastName()  << "\n"
				<< "Nick name: " << contact.getNickName()  << "\n"
				<< "Phone number: " << contact.getPhoneNumber()  << "\n"
				<< "Darkest secret: " << contact.getDarkestSecret() 
				<< std::endl;
}
