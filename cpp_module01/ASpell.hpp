/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:56:02 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 04:49:48 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected :

    std::string _name;
    std::string _effects;

    public :

    ASpell(std::string const &name, std::string const &effects);
    virtual ~ASpell() {};
    std::string const & getName() const;
    std::string const & getEffects() const;
    virtual ASpell * clone() = 0;
    void launch(ATarget const &target) const;

};