# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 18:32:23 by ylabrahm          #+#    #+#              #
#    Updated: 2023/07/29 16:06:20 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)
OBJS := $(addprefix obj/, $(OBJS))

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ScavTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(shell dirname $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) -rf obj/

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re