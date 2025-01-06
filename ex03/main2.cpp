/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 12:57:34 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void	genericFunctions( ClapTrap *robot );
static void	scavFunctions( ScavTrap *robot );
static void	fragFunctions( FragTrap *robot );
static void	diamFunctions( DiamondTrap *robot );

int main (void) 
{
	ClapTrap *robots[7];
	robots[0] = new ClapTrap("Clapton");
	robots[1] = new ScavTrap("Scavton");
	ScavTrap *eli = dynamic_cast<ScavTrap*>(robots[1]);
	robots[2] = new ScavTrap(*eli);
	robots[2]->setName("Scav II");
	robots[3] = new FragTrap("Fragton");
	FragTrap *fran = dynamic_cast<FragTrap*>(robots[3]);
	robots[4] = new FragTrap(*fran);
	robots[4]->setName("Frag II");
	robots[5] = new DiamondTrap("Diamond");
	DiamondTrap *dan = dynamic_cast<DiamondTrap*>(robots[5]);
	robots[6] = new DiamondTrap(*dan);
	robots[6]->setName("Diamond II");
	for (int i = 0; i < 7; i++)
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
	for (int i = 3; i < 5; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		fragFunctions(dynamic_cast<FragTrap*>(robots[i]));
	}
	std::cout << "\n------------------------------\n" << std::endl;
	for (int i = 5; i < 7; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		diamFunctions(dynamic_cast<DiamondTrap*>(robots[i]));
	}
	std::cout << "\n------------------------------\n" << std::endl;
	for (int i = 0; i < 7; i++)
	{
		delete robots[i];
	}
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

static void	fragFunctions( FragTrap *robot )
{
	std::cout << "___FRAGTRAP INVOCATIONS___" << std::endl;
	std::cout << "|- Name: " << robot->getName() << std::endl;
//	robot->guardGate();
	robot->highFivesGuys();
	robot->attack("noone");
	robot->takeDamage( 1 );
	robot->beRepaired( 1 );
	std::cout << "|- Hit points: " << robot->getHitPoints() << std::endl;
	std::cout << "|- Energy: " << robot->getEnergy() << std::endl;
	std::cout << "|- Attack Damage: " << robot->getAttackDamage() << std::endl;
}

static void	diamFunctions( DiamondTrap *robot )
{
	std::cout << "___DIAMOND INVOCATIONS___" << std::endl;
	std::cout << "|- Name: " << robot->getName() << std::endl;
	robot->guardGate();
	robot->highFivesGuys();
	robot->attack("noone");
	robot->whoAmI();
	robot->attack("noone");
	robot->takeDamage( 1 );
	robot->beRepaired( 1 );
	std::cout << "|- Hit points: " << robot->getHitPoints() << std::endl;
	std::cout << "|- Energy: " << robot->getEnergy() << std::endl;
	std::cout << "|- Attack Damage: " << robot->getAttackDamage() << std::endl;
}
