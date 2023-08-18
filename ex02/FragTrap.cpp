/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:21:54 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/01 16:30:08 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap: copy constructor called" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Parm constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Default destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->energyPoints = copy.energyPoints;
		this->hitPoints = copy.hitPoints;
		this->attackkDamage = copy.attackkDamage;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << this->name << "says Hi 👋" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */