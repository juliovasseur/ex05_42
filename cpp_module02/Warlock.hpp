/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:30:13 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 02:30:17 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private :

    std::string const name;
    std::string title;
    SpellBook _SpellBook;
    


    public :

    Warlock(std::string const &name, std::string const &title);
    ~Warlock();
    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const & title);
    void introduce() const;
    void learnSpell(ASpell* spell);
	void forgetSpell(std::string SpellName);
	void launchSpell(std::string SpellName, ATarget const & target);

};