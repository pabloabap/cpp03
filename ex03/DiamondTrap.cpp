/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:26:57 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 13:00:16 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("Undefined_clap_name")
{
	this->_name = "Undefined";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy = ScravTrap::_energy;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap - Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy = ScravTrap::_energy;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap - Named constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ): ClapTrap(src), ScravTrap(src), FragTrap(src)

{
	std::cout << "DiamondTrap - Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap - Default destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &src)
{
	if (this != &src)
	{
		ClapTrap::_name = src._name + "_clap_name";
		this->_name = src._name;
		this->_hit_points = FragTrap::_hit_points;
		this->_energy = ScravTrap::_energy;
		this->_attack_damage = FragTrap::_attack_damage;
	}
	std::cout << "DiamondTrap - Copy assignment operator called" << std::endl;
	return ( *this );
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "CLAPTRAP NAME - " << ClapTrap::_name << "\nDIAMONDTRAP - " 
		<< this->_name << std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	ScravTrap::attack( target );
}

std::string	DiamondTrap::getName( void ) const
{
	return ( this->_name );
}

void		DiamondTrap::setName( std::string name )
{
	this->_name = name;
}
