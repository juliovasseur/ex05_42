/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:58:38 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 04:49:52 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"


ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects)
{

}

std::string const & ASpell::getName() const
{
    return (this->_name);
}

std::string const & ASpell::getEffects() const
{
    return (this->_effects);
}

void ASpell::launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}
