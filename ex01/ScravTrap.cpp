/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:26:06 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/02 13:32:24 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ScravTrap.hpp"

ScravTrap::ScravTrap(void): ClapTrap()
{
	this->_name = "Undefined";
	this->_hit_points = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScravTrap - Default constructor called" << std::endl;
}

ScravTrap::ScravTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy = 50;
	this->_attack_damage= 20;
	std::cout << "ScravTrap - Named constructor called" << std::endl;
}

ScravTrap::ScravTrap( ScravTrap const &src ): ClapTrap(src)
{
	std::cout << "ScravTrap - Copy constructor called" << std::endl;
	*this = src;
}

ScravTrap::~ScravTrap(void)
{
	std::cout << "ScravTrap - Default destructor called" << std::endl;
}

ScravTrap &ScravTrap::operator=( ScravTrap const &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	std::cout << "ScravTrap - Copy assignment operator called" << std::endl;
	return ( *this );
}

void	ScravTrap::attack( const std::string& target )
{
	if ( this->_hit_points == 0 )
		std::cout << "ScravTrap - " << this->_name \
			<< " can't attack, no hit points available" 
			<< std::endl;
	else if ( this->_energy == 0 )
		std::cout << "ScravTrap - " << this->_name \
			<< " can't attack, no energy available" 
			<< std::endl;
	else
	{
		std::cout << "ScravTrap - " << this->_name \
			<< " attack " << target << ", causing " 
			<< this->_attack_damage << " points of damage!"
			<< std::endl;
		this->_energy--;
	}
}

void	ScravTrap::guardGate( void )
{
	std::cout << "ScravTrap is now in Gate keeper mode" << std::endl;
}
