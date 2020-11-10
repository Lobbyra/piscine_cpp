# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 14:27:32 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/10 14:28:25 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	bin

SRCS		=	./Ice.cpp			\
				./Cure.cpp			\
				./main.cpp			\
				./AMateria.cpp		\
				./Character.cpp		\
				./MateriaSource.cpp

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
