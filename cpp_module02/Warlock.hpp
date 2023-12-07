/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:39:47 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 05:54:25 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;

class SpellBook;

class Warlock
{
    private :

    std::string const _name;
    std::string _title;
    SpellBook _SpellBook;
    

    public:

    Warlock(std::string const &name, std::string const &title);
    ~Warlock();
    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const &title);
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string name_spell);
    void launchSpell(std::string spell_name, ATarget const &target);

};