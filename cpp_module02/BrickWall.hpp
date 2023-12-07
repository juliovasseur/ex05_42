/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 02:11:12 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 02:11:24 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public : 

    BrickWall();
    ~BrickWall();
	ATarget* clone() const;

};