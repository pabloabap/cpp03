// Cabecera

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <string>

class ClapTrap 
{
	public:
		ClapTrap(void); //Default constructor
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src ); //Copy constructor
		~ClapTrap(void; //Default destructor

		ClapTrap &operator=( ClapTrap const &src); //Copy assignment operator.
		
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void 		beRepaired( unsigned int amount);

		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getEnergy(void) const;
		int		getAttackDamage(void) const;
		
		std::string	setName(void) const;
		int		setHitPoints(void) const;
		int		setEnergy(void) const;
		int		setAttackDamage(void) const;
	private:
		std::string	_name;
		int		_hit_points;
		int		_energy;
		int		_attack_damage;
	protected:
		...

}

#endif
