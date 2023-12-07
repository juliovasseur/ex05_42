/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:30:13 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 01:32:35 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    private :

    std::string const name;
    std::string title;
    std::map < std::string, ASpell * > _SpellBook;


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