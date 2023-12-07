/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:39:47 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 04:50:01 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;

class Warlock
{
    private :

    std::string const _name;
    std::string _title;
    std::map<std::string, ASpell *> spell_book;

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