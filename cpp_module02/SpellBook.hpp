/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 05:10:57 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 05:54:37 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include <map>
#pragma once

class SpellBook
{
    private :

    std::map<std::string, ASpell *> spell_book;
    SpellBook & operator=(SpellBook const &src);
    SpellBook(SpellBook const &src);

    public :

    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);
   

};