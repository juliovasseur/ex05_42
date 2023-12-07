/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 01:11:01 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 01:37:15 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy()
{
    this->type = "Target Practice Dummy";
}

Dummy::~Dummy() {};

ATarget* Dummy::clone() const
{
    return new Dummy(*this);
}


