/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:58:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/30 19:46:59 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main (void) 
{
	ClapTrap a("McGregor");
	ClapTrap b("Topuria");
	
	a.setAttackDamage(1);
	b.setAttackDamage(2);
	for (int i = 0; i < 11; i++)
	{
		b.attack("McGregor");
		a.takeDamage(b.getAttackDamage());
		a.beRepaired(1);
	}
	return (0);
}
