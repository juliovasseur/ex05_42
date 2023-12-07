/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 02:10:05 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 02:10:14 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

class Polymorph : public ASpell 
{
    public :
		Polymorph();
		~Polymorph();
		ASpell* clone() const;
};