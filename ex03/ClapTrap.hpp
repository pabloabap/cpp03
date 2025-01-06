/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:34 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/03 12:43:12 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP
# include <string>

typedef enum e_class
{
	CLAPTRAP ,
	SCAVTRAP ,
	FRAGTRAP ,
	DIAMTRAP
} t_class;

class ClapTrap 
{
	public:
		ClapTrap(void); //Default constructor
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src ); //Copy constructor
		virtual ~ClapTrap(void); //Default destructor

		ClapTrap 			&operator=( ClapTrap const &src); //Copy assignment operator.
		
		virtual void		attack( const std::string& target );
		void				takeDamage( unsigned int amount );
		void 				beRepaired( unsigned int amount);

		virtual	std::string	getName(void) const;
		int					getHitPoints(void) const;
		int					getEnergy(void) const;
		int					getAttackDamage(void) const;
		static int			getLastClass(void);
		
		virtual void		setName( std::string name );
		void				setHitPoints( int amount );
		void				setEnergy( int amount );
		void				setAttackDamage( int amount );
		static void			setLastClass(int);
	protected:
		std::string			_name;
		unsigned int		_hit_points;
		unsigned int		_energy;
		unsigned int		_attack_damage;
		static int			_last_class;
};


#endif
