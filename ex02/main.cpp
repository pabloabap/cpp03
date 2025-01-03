/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 09:12:40 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScravTrap.hpp"
#include "FragTrap.hpp"

static void	genericFunctions( ClapTrap *robot );
static void	scravFunctions( ScravTrap *robot );
static void	fragFunctions( FragTrap *robot );

int main (void) 
{
	ClapTrap *robots[5];
	robots[0] = new ClapTrap("Clapton");
	robots[1] = new ScravTrap("Scravton");
	ScravTrap *eli = dynamic_cast<ScravTrap*>(robots[1]);
	robots[2] = new ScravTrap(*eli);
	robots[2]->setName("Scrav II");
	robots[3] = new FragTrap("Fragton");
	FragTrap *fran = dynamic_cast<FragTrap*>(robots[3]);
	robots[4] = new FragTrap(*fran);
	robots[4]->setName("Frag II");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		genericFunctions(robots[i]);
	}
	std::cout << "\n------------------------------\n" << std::endl;
	for (int i = 1; i < 3; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		scravFunctions(dynamic_cast<ScravTrap*>(robots[i]));
	}
	std::cout << "\n------------------------------\n" << std::endl;
	for (int i = 3; i < 5; i++)
	{
		std::cout << "\n------------------------------\n" << std::endl;
		fragFunctions(dynamic_cast<FragTrap*>(robots[i]));
	}
	std::cout << "\n------------------------------\n" << std::endl;
	delete robots[0];
	delete robots[1];
	delete robots[2];
	delete robots[3];
	delete robots[4];
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

