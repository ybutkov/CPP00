/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybutkov <ybutkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:51:44 by ybutkov           #+#    #+#             */
/*   Updated: 2026/01/30 15:51:46 by ybutkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Buro.hpp"

int main()
{
	Phonebook phonebook;
	Printer printer;
	Buro buro(phonebook, printer);
	phonebook.addContact({"John", "Doe", "Johnny", "1234567", "secret"});
	buro.work();
	return (0);
}
