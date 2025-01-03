/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 09:34:37 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScravTrap.hpp"
#include "FragTrap.hpp"

static void	genericFunctions( ClapTrap &robot );
static void	scravFunctions( ScravTrap &robot );
static void	fragFunctions( FragTrap &robot );

int main (void) 
{
	ClapTrap c("Clapton");
	ScravTrap s("Scrav II");
	FragTrap f("Fragton");
	
	std::cout << "\n------------------------------\n" << std::endl;
	genericFunctions(c);
	std::cout << "\n------------------------------\n" << std::endl;
	genericFunctions(s);
	std::cout << "\n------------------------------\n" << std::endl;
	genericFunctions(f);
	std::cout << "\n------------------------------\n" << std::endl;
	scravFunctions(s);
	std::cout << "\n------------------------------\n" << std::endl;
	fragFunctions(f);
	std::cout << "\n------------------------------\n" << std::endl;
	return (0);
}

static void	genericFunctions( ClapTrap &robot )
{
	std::cout << "___ROBOT DESCRIPTION___" << std::endl;
	std::cout << "|- Name: " << robot.getName() << std::endl;
	std::cout << "|- Hit points: " << robot.getHitPoints() << std::endl;
	std::cout << "|- Energy: " << robot.getEnergy() << std::endl;
	std::cout << "|- Attack Damage: " << robot.getAttackDamage() << std::endl;
	std::cout << "---Robot actions---" << std::endl;
	robot.attack("noone");
	robot.takeDamage( 1 );
	robot.beRepaired( 1 );
}

static void	scravFunctions( ScravTrap &robot )
{
	std::cout << "___SCRAVTRAP INVOCATIONS___" << std::endl;
	std::cout << "|- Name: " << robot.getName() << std::endl;
	robot.guardGate();
	robot.attack("noone");
	robot.takeDamage( 1 );
	robot.beRepaired( 1 );
	std::cout << "|- Hit points: " << robot.getHitPoints() << std::endl;
	std::cout << "|- Energy: " << robot.getEnergy() << std::endl;
	std::cout << "|- Attack Damage: " << robot.getAttackDamage() << std::endl;
}

static void	fragFunctions( FragTrap &robot )
{
	std::cout << "___FRAGTRAP INVOCATIONS___" << std::endl;
	std::cout << "|- Name: " << robot.getName() << std::endl;
//	robot.guardGate();
	robot.highFivesGuys();
	robot.attack("noone");
	robot.takeDamage( 1 );
	robot.beRepaired( 1 );
	std::cout << "|- Hit points: " << robot.getHitPoints() << std::endl;
	std::cout << "|- Energy: " << robot.getEnergy() << std::endl;
	std::cout << "|- Attack Damage: " << robot.getAttackDamage() << std::endl;
}

