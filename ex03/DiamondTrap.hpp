/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:27:08 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 12:48:19 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void); //Default constructor
		DiamondTrap(std::string name);
		DiamondTrap( DiamondTrap const & src ); //Copy constructor
		~DiamondTrap(void); //Default destructor

		DiamondTrap &operator=( DiamondTrap const &src); //Copy assignment operator.
			
		void		whoAmI( void );
		void		attack( const std::string &target);
		std::string	getName( void ) const;
		void		setName( std::string name ); 
	private:
		std::string	_name;
};

#endif
