/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:21:59 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/01 16:30:28 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap();
	FragTrap(FragTrap const &src);
	~FragTrap();
	FragTrap(std::string name);
	FragTrap &operator=(FragTrap const &rhs);
	void highFivesGuys(void);
private:
};


#endif /* ******************************************************** FRAGTRAP_H */