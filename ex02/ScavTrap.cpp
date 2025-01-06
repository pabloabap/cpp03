/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:26:06 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 08:26:09 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_name = "Undefined";
	this->_hit_points = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap - Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy = 50;
	this->_attack_damage= 20;
	std::cout << "ScavTrap - Named constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &src ): ClapTrap(src)
{
	std::cout << "ScavTrap - Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap - Default destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	std::cout << "ScavTrap - Copy assignment operator called" << std::endl;
	return ( *this );
}

void	ScavTrap::attack( const std::string& target )
{
	if ( this->_hit_points == 0 )
		std::cout << "ScavTrap - " << this->_name \
			<< " can't attack, no hit points available" 
			<< std::endl;
	else if ( this->_energy == 0 )
		std::cout << "ScavTrap - " << this->_name \
			<< " can't attack, no energy available" 
			<< std::endl;
	else
	{
		std::cout << "ScavTrap - " << this->_name \
			<< " attack " << target << ", causing " 
			<< this->_attack_damage << " points of damage!"
			<< std::endl;
		this->_energy--;
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap - " << this->_name 
		<< " is now in Gate keeper mode" << std::endl;
}
