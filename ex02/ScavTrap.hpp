/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:47:02 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/29 17:59:43 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &copy);
	void guardGate();
private:

};

#endif /* ******************************************************** SCAVTRAP_H */