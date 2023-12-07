/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 04:00:39 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 04:49:54 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected :

    std::string _type;

    public :

    ATarget(std::string const &type);
    virtual ~ATarget() {};
    std::string const & getType() const;
    virtual ATarget * clone() = 0;
    void getHitBySpell(ASpell const &Spell) const;


};