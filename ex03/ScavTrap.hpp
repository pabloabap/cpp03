/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:26:36 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 10:50:08 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void); //Default constructor
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src ); //Copy constructor
		~ScavTrap(void); //Default destructor

		ScavTrap &operator=( ScavTrap const &src); //Copy assignment operator.
			
		void		attack( const std::string& target );
		void		guardGate( void );
};

#endif
