/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:13:26 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 01:39:11 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

std::string const & ASpell::getName() const
{
    return (this->name);
}

std::string const & ASpell::getEffects() const
{
    return (this->effects);
}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
    this->name = name;
    this->effects = effects;
}


ASpell::ASpell()
{
    this->name = "default";
    this->effects = "default";
}

ASpell::~ASpell() {}


ASpell & ASpell::operator=(const ASpell &src)
{
    if (this != &src)
    {
        this->name = src.name;
        this->effects = src.effects;
    }
    return *this;
}
    
ASpell::ASpell(const ASpell &src)
{
    *this = src;
}

void ASpell::launch(ATarget const & src) const
{
    src.getHitBySpell(*this);
}