# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 10:08:29 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/09 10:12:24 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

SRCS		=	./main.cpp			\
				./Enemy.cpp			\
				./AWeapon.cpp		\
				./Character.cpp		\
				./PowerFist.cpp		\
				./PlasmaRifle.cpp	\
				./RadScorpion.cpp	\
				./SuperMutant.cpp

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
