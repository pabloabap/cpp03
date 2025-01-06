/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 12:13:15 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void	genericFunctions( ClapTrap *robot );
static void	scavFunctions( ScavTrap *robot );

int main (void) 
{
	ClapTrap *robots[3];
	robots[0] = new ClapTrap("Clapton");
	robots[1] = new ScavTrap("Scavton");
	ScavTrap *eli = dynamic_cast<ScavTrap*>(robots[1]);
	robots[2] = new ScavTrap(*eli);
	robots[2]->setName("Scav II");
	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		genericFunctions(robots[i]);
	}
	std::cout << "\n------------------------------\n" << std::endl;
	for (int i = 1; i < 3; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		scavFunctions(dynamic_cast<ScavTrap*>(robots[i]));
	}
	std::cout << "\n------------------------------\n" << std::endl;
	delete robots[0];
	delete robots[1];
	delete robots[2];
	return (0);
}

static void	genericFunctions( ClapTrap *robot )
{
	std::cout << "___ROBOT DESCRIPTION___" << std::endl;
	std::cout << "|- Name: " << robot->getName() << std::endl;
	std::cout << "|- Hit points: " << robot->getHitPoints() << std::endl;
	std::cout << "|- Energy: " << robot->getEnergy() << std::endl;
	std::cout << "|- Attack Damage: " << robot->getAttackDamage() << std::endl;
	std::cout << "---Robot actions---" << std::endl;
	robot->attack("noone");
	robot->takeDamage( 1 );
	robot->beRepaired( 1 );
}

static void	scavFunctions( ScavTrap *robot )
{
	std::cout << "___SCAVTRAP INVOCATIONS___" << std::endl;
	std::cout << "|- Name: " << robot->getName() << std::endl;
	robot->guardGate();
	robot->attack("noone");
	robot->takeDamage( 1 );
	robot->beRepaired( 1 );
	std::cout << "|- Hit points: " << robot->getHitPoints() << std::endl;
	std::cout << "|- Energy: " << robot->getEnergy() << std::endl;
	std::cout << "|- Attack Damage: " << robot->getAttackDamage() << std::endl;
}

