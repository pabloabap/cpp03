/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:24 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/30 19:47:18 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Undefined"), _hit_points(10), \
	_energy(10), _attack_damage(0)

{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), \
	_energy(10), _attack_damage(0)
{
	std::cout << "Named constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src ): _name(src.getName()), \
	_hit_points(src.getHitPoints()), _energy(src.getEnergy()), \
	_attack_damage(src.getAttackDamage())
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &src)
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

void	ClapTrap::attack( const std::string& target )
{
	if ( this->_hit_points == 0 )
		std::cout << "ClapTrap " << this->_name \
			<< " can't attack, no hit points available" 
			<< std::endl;
	else if ( this->_energy == 0 )
		std::cout << "ClapTrap " << this->_name \
			<< " can't attack, no energy available" 
			<< std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name \
			<< " attack " << target << ", causing " 
			<< this->_attack_damage << " points of damage!"
			<< std::endl;
		this->_energy--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
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

void 	ClapTrap::beRepaired( unsigned int amount)
{
	if ( this->_hit_points == 0 )
		std::cout << "ClapTrap " << this->_name \
			<< " can't be repaired, no hit points available" 
			<< std::endl;
	else if ( this->_energy == 0 )
		std::cout << "ClapTrap " << this->_name \
			<< " can't be repaired, no energy available" 
			<< std::endl;
	else
	{
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name \
			<< " repaired " << amount << " hit points. " 
			<< "Current hit point: " << this->_hit_points
			<< std::endl;
		this->_energy--;
	}
}

std::string	ClapTrap::getName(void) const
{
	return( this->_name );
}

int		ClapTrap::getHitPoints(void) const
{
	return( this->_hit_points );
}

int		ClapTrap::getEnergy(void) const
{
	return( this->_energy );
}

int		ClapTrap::getAttackDamage(void) const
{
	return( this->_attack_damage );
}

void		ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void		ClapTrap::setHitPoints( int amount )
{
	this->_hit_points = amount;
}

void		ClapTrap::setEnergy( int amount )
{
	this->_energy = amount;
}

void		ClapTrap::setAttackDamage( int amount )
{
	this->_attack_damage = amount;
}
