/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 05:38:20 by jules             #+#    #+#             */
/*   Updated: 2023/12/07 05:58:26 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include <map>


class TargetGenerator
{
    private : 

    std::map<std::string, ATarget *> target_map;

    public :

    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &name_target);
    ATarget* createTarget(std::string const &);

};