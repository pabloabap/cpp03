// CABECERA

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

ClapTrap::ClapTrap( ClapTrap const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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
		this_>_name =src.getName(); 
		this_>_hit_points =src.getHitPoints(); 
		this_>_energy =src.getEnergy(); 
		this_>_attack_damage =src.getAttackDamage();
	}
	return ( *this );
}

void	ClapTrap::attack( const std::string& target )
{
	if ( this->_hit_points == 0 )
		std::cout << "ClapTrap " << this->_name \
			<< "can't do anything, no hit points available" 
			<< std::endl;
	else if ( this->_energy == 0 )
		std::cout << "ClapTrap " << this->_name \
			<< "can't do anything, no energy available" 
			<< std::endl;
	else
		
	
		
}

void	ClapTrap::takeDamage( unsigned int amount )
{

}

void 	ClapTrap::beRepaired( unsigned int amount)
{

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
