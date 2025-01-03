/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:48:50 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 10:50:24 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void); //Default constructor
		FragTrap(std::string name);
		FragTrap( FragTrap const & src ); //Copy constructor
		~FragTrap(void); //Default destructor

		FragTrap &operator=( FragTrap const &src); //Copy assignment operator.
			
		void		highFivesGuys( void );
};

#endif
