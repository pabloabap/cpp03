/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:34 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/02 10:39:01 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <string>

class ClapTrap 
{
	public:
		ClapTrap(void); //Default constructor
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src ); //Copy constructor
		virtual	~ClapTrap(void); //Default destructor

		ClapTrap &operator=( ClapTrap const &src); //Copy assignment operator.
		
		virtual void	attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void 		beRepaired( unsigned int amount);

		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getEnergy(void) const;
		int		getAttackDamage(void) const;
		
		void		setName( std::string name );
		void		setHitPoints( int amount );
		void		setEnergy( int amount );
		void		setAttackDamage( int amount );
	protected:
		std::string	_name;
		unsigned int	_hit_points;
		unsigned int	_energy;
		unsigned int	_attack_damage;
};

#endif
