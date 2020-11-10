# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 09:49:30 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/09 09:50:51 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

SRCS		=	main.cpp			\
				ScavTrap.cpp		\
				FragTrap.cpp		\
				GlobalTrap.cpp		\
				ScavTrapChall.cpp

CC			=	g++

OBJS		=	$(SRCS:.cpp=.o)

CFLAGS		+=	-Wall -Werror -Wextra

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
