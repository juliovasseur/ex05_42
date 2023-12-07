/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 02:14:14 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 02:23:22 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); ++it) {
		delete it->second;
	}
	_SpellBook.clear();
}


void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
	{
		_SpellBook[spell->getName()] = spell->clone();
	}
}



void SpellBook::forgetSpell(std::string const & SpellName)
{
	std::map<std::string, ASpell*>::iterator it = _SpellBook.find(SpellName);
	if (it != _SpellBook.end())
	{
		delete it->second;
		_SpellBook.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    ASpell* tmp = NULL;
	if (_SpellBook.find(spell) != _SpellBook.end())
		tmp = _SpellBook[spell];
	return (tmp);
}