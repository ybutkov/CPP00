/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:51:21 by ybutkov           #+#    #+#             */
/*   Updated: 2026/01/30 15:51:23 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTER_HPP
# define PRINTER_HPP

# include "Phonebook.hpp"

class Printer
{
	private:
		static void printTableRow(int index, const Contact& contact);
	public:
		static void printPhonebook(const Phonebook& phonebook);
		static void printContact(const Contact& contact);
};

#endif
