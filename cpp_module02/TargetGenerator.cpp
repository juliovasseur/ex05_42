/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 05:41:27 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 06:03:26 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{}


void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
    {
        this->target_map[target->getType()] = target;
    }
}

void TargetGenerator::forgetTargetType(std::string const &name_target)
{
    if (this->target_map.find(name_target) != this->target_map.end())
    {
        this->target_map.erase(this->target_map.find(name_target));
    }
}

ATarget* TargetGenerator::createTarget(std::string const &name_target)
{
    ATarget * Tmp_target = NULL;
    
    if (this->target_map.find(name_target) != this->target_map.end())
        Tmp_target = this->target_map[name_target];
    return (Tmp_target);
}