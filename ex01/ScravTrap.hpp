/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:26:36 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/02 13:30:09 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_CLASS_HPP
# define SCRAVTRAP_CLASS_HPP

# include <string>
# include "ClapTrap.hpp"

class ScravTrap: public ClapTrap
{
	public:
		ScravTrap(void); //Default constructor
		ScravTrap(std::string name);
		ScravTrap( ScravTrap const & src ); //Copy constructor
		~ScravTrap(void); //Default destructor

		ScravTrap &operator=( ScravTrap const &src); //Copy assignment operator.
		
		void		attack( const std::string& target );
		void		guardGate( void );
};

#endif
