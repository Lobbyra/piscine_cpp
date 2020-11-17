# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 10:08:29 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/17 14:03:23 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bin

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

CPPFLAGS		+=	-Wall -Werror -Wextra

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CPPFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
