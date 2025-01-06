/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:22 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 09:16:14 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hit_points = 100;
	std::cout << "FRAG " << ClapTrap::getLastClass() << std::endl;
	if (ClapTrap::getLastClass() == CLAPTRAP)
		this->_energy = 100;
	this->_attack_damage = 30;
	ClapTrap::setLastClass(FRAGTRAP);
	std::cout << "FragTrap - Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = 100;
	std::cout << "FRAG " << ClapTrap::getLastClass() << std::endl;
	if (ClapTrap::getLastClass() == CLAPTRAP)
		this->_energy = 100;
	this->_attack_damage= 30;
	ClapTrap::setLastClass(FRAGTRAP);
	std::cout << "FragTrap - Named constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ): ClapTrap(src)
{
	std::cout << "FragTrap - Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap - Default destructor called" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	std::cout << "FragTrap - Copy assignment operator called" << std::endl;
	return ( *this );
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap - " << this->_name 
		<< " say: HIGH 5 GUYS!!" << std::endl;
}
