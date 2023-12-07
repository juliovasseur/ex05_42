/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 02:11:58 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 02:31:00 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private :

    SpellBook & operator=(SpellBook & src);
    SpellBook(SpellBook & src);
    std::map < std::string, ASpell * > _SpellBook;

    public : 

    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell*);
	void forgetSpell(std::string const &);
	ASpell* createSpell(std::string const &);

};