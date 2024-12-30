/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:26:06 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/30 20:26:28 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ScravTrap.hpp"

ScravTrap::ScravTrap(void): _name("Undefined"), _hit_points(10), \
	_energy(10), _attack_damage(0)

{
	std::cout << "Default constructor called" << std::endl;
}

ScravTrap::ScravTrap( std::string name ): _name(name), _hit_points(10), \
	_energy(10), _attack_damage(0)
{
	std::cout << "Named constructor called" << std::endl;
}

ScravTrap::ScravTrap( ScravTrap const &src ): _name(src.getName()), \
	_hit_points(src.getHitPoints()), _energy(src.getEnergy()), \
	_attack_damage(src.getAttackDamage())
{
	std::cout << "Copy constructor called" << std::endl;
}

ScravTrap::~ScravTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
}

ScravTrap &ScravTrap::operator=( ScravTrap const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name =src.getName(); 
		this->_hit_points =src.getHitPoints(); 
		this->_energy =src.getEnergy(); 
		this->_attack_damage =src.getAttackDamage();
	}
	return ( *this );
}

void	ScravTrap::attack( const std::string& target )
{
	if ( this->_hit_points == 0 )
		std::cout << "ScravTrap " << this->_name \
			<< " can't attack, no hit points available" 
			<< std::endl;
	else if ( this->_energy == 0 )
		std::cout << "ScravTrap " << this->_name \
			<< " can't attack, no energy available" 
			<< std::endl;
	else
	{
		std::cout << "ScravTrap " << this->_name \
			<< " attack " << target << ", causing " 
			<< this->_attack_damage << " points of damage!"
			<< std::endl;
		this->_energy--;
	}
}

void	ScravTrap::takeDamage( unsigned int amount )
{
	if (this->_hit_points == 0)
		std::cout << this->_name 
			<<" hit points are 0. No more damage can be applied." 
			<< std::endl;
	else if (this->_hit_points <= amount)
	{
		this->_hit_points = 0;
		std::cout << this->_name 
			<< " hit points after attack: 0. No more damage can be applied." 
			<< std::endl;
	}
	else
	{
		this->_hit_points -= amount;
		std::cout << this->_name 
			<< " hit points after attack: " << this->_hit_points 
			<< std::endl;
	}
}

void 	ScravTrap::beRepaired( unsigned int amount)
{
	if ( this->_hit_points == 0 )
		std::cout << "ScravTrap " << this->_name \
			<< " can't be repaired, no hit points available" 
			<< std::endl;
	else if ( this->_energy == 0 )
		std::cout << "ScravTrap " << this->_name \
			<< " can't be repaired, no energy available" 
			<< std::endl;
	else
	{
		this->_hit_points += amount;
		std::cout << "ScravTrap " << this->_name \
			<< " repaired " << amount << " hit points. " 
			<< "Current hit point: " << this->_hit_points
			<< std::endl;
		this->_energy--;
	}
}

std::string	ScravTrap::getName(void) const
{
	return( this->_name );
}

int		ScravTrap::getHitPoints(void) const
{
	return( this->_hit_points );
}

int		ScravTrap::getEnergy(void) const
{
	return( this->_energy );
}

int		ScravTrap::getAttackDamage(void) const
{
	return( this->_attack_damage );
}

void		ScravTrap::setName( std::string name )
{
	this->_name = name;
}

void		ScravTrap::setHitPoints( int amount )
{
	this->_hit_points = amount;
}

void		ScravTrap::setEnergy( int amount )
{
	this->_energy = amount;
}

void		ScravTrap::setAttackDamage( int amount )
{
	this->_attack_damage = amount;
}
