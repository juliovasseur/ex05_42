/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:39:47 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 03:53:59 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Warlock
{
    private :

    std::string const _name;
    std::string _title;

    public:

    Warlock(std::string const &name, std::string const &title);
    ~Warlock();
    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const &title);
    void introduce() const;

};