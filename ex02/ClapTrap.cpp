/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:54:39 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/01 16:25:11 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : name("Default"), hitPoints(100), energyPoints(100), attackkDamage(30)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100), energyPoints(100), attackkDamage(30)
{
	std::cout << "ClapTrap: Parm constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Default destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackkDamage = copy.attackkDamage;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no hit points, so he can do nothing" << std::endl;
		return;
	}
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackkDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no Energy Points to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no hit points, so he can do nothing" << std::endl;
		return;
	}
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
		this->hitPoints = 0;
	std::cout << "ClapTrap " << this->name << " has take damage, Hit Points : " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no hit points, so he can do nothing" << std::endl;
		return;
	}
	if (energyPoints > 0)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << this->name << " has been repaired, Hit Points : " << hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy points" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */