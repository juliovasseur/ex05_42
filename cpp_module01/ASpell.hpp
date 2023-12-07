/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:11:32 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 01:39:06 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;


class ASpell
{
    protected : 

    std::string name;
    std::string effects;

    public :

    ASpell();
    ASpell(std::string const &name, std::string const &effects);
    virtual ~ASpell();
    ASpell &operator=(const ASpell &src);
    ASpell(const ASpell &src);
    std::string const & getName() const;
    std::string const & getEffects() const;
    virtual ASpell* clone() const = 0;
    void launch(ATarget const & target) const;


};