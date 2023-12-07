/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 02:11:04 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 02:11:40 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    this->type = "Inconspicuous Red-brick Wall";
}

BrickWall::~BrickWall() {};

ATarget* BrickWall::clone() const
{
    return new BrickWall(*this);
}

