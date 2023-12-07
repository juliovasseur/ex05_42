/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 04:00:35 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 04:49:53 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"


ATarget::ATarget(std::string const &type) : _type(type)
{

}

std::string const & ATarget::getType() const
{
    return(this->_type);
}

void ATarget::getHitBySpell(const ASpell &Spell) const
{
    std::cout << this->_type << " has been " << Spell.getEffects() << "!" << std::endl;
}