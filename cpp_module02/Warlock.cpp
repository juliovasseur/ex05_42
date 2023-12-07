/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:38:18 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 02:26:59 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name)
{
    this->title = title;

    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const
{
    return (this->name);
}

std::string const & Warlock::getTitle() const
{
    return (this->title);

}

void Warlock::setTitle(std::string const & title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	_SpellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string SpellName)
{
	_SpellBook.forgetSpell(SpellName);
}

void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (_SpellBook.createSpell(SpellName))
		_SpellBook.createSpell(SpellName)->launch(target);
}