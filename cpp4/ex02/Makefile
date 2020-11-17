# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 10:26:17 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/17 14:03:23 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bin

SRCS		=	./main.cpp					\
				./Squad.cpp					\
				./TacticalMarine.cpp		\
				./AssaultTerminator.cpp

CC			=	g++

OBJS		=	$(SRCS:.cpp=.o)

CPPFLAGS		+=	-Wall -Wextra -Werror

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CPPFLAGS) $(OBJS)

san			:	$(OBJS)
				$(CC) -fsanitize=address -o $(NAME) $(CPPFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
