/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:30:13 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 00:06:58 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Warlock
{
    private :

    std::string const name;
    std::string title;

    public :

    Warlock(std::string const &name, std::string const &title);
    ~Warlock();
    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const & title);
    void introduce() const;


};