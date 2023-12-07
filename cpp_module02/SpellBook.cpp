/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 05:15:04 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 05:59:56 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        this->spell_book[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
    if (this->spell_book.find(spell_name) != this->spell_book.end())
    {
        this->spell_book.erase(this->spell_book.find(spell_name));
    }
    
}

ASpell* SpellBook::createSpell(std::string const &spell_name)
{
    ASpell *tmp_spell = NULL;
    if (this->spell_book.find(spell_name) != this->spell_book.end())
        tmp_spell = this->spell_book[spell_name];
    return (tmp_spell);
}


SpellBook::SpellBook()
{}
    
SpellBook::~SpellBook()
{
}
