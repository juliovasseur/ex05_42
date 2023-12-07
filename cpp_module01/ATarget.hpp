/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:27:32 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 01:40:03 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{

    protected :

    std::string type;

    public :

    ATarget();
    ATarget(std::string const &type);
    virtual ~ATarget();
    ATarget &operator=(const ATarget &src);
    ATarget(const ATarget &src);
    std::string const &getType() const;
    virtual ATarget *clone() const = 0;
    void getHitBySpell(const ASpell &src) const;


};