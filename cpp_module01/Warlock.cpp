/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:42:26 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 04:49:59 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->_name << ": My job here is done!" << std::endl;
}


std::string const & Warlock::getName() const
{
    return (this->_name);
}

std::string const & Warlock::getTitle() const
{
    return (this->_title);
}

void Warlock::setTitle(std::string const &title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
    {
        if (this->spell_book.find(spell->getName()) == this->spell_book.end())
        {
            this->spell_book[spell->getName()] = spell->clone();
        }
    }
}

void Warlock::forgetSpell(std::string name_spell)
{
    if (this->spell_book.find(name_spell) != this->spell_book.end())
    {
        this->spell_book.erase(this->spell_book.find(name_spell));
    }
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target)
{
    if (this->spell_book.find(spell_name) != this->spell_book.end())
    {
        this->spell_book[spell_name]->launch(target);
    }
}