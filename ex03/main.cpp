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
#include "ScravTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void	genericFunctions( ClapTrap *robot );
static void	scravFunctions( ScravTrap *robot );
static void	fragFunctions( FragTrap *robot );
static void	diamFunctions( DiamondTrap *robot );

int main (void) 
{
	ClapTrap *robots[2];
	robots[0] = new DiamondTrap("Diamond");
	DiamondTrap *dan = dynamic_cast<DiamondTrap*>(robots[0]);
	robots[1] = new DiamondTrap(*dan);
	robots[1]->setName("Diamond II");
	for (int i = 0; i < 2; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		genericFunctions(robots[i]);
		scravFunctions(dynamic_cast<ScravTrap*>(robots[i]));
		fragFunctions(dynamic_cast<FragTrap*>(robots[i]));
		diamFunctions(dynamic_cast<DiamondTrap*>(robots[i]));
	}
	std::cout << "\n------------------------------\n" << std::endl;
	for (int i = 0; i < 2; i++)
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

static void	scravFunctions( ScravTrap *robot )
{
	std::cout << "___SCRAVTRAP INVOCATIONS___" << std::endl;
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
