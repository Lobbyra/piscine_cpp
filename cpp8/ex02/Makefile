# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 16:23:38 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/05 14:58:56 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mutantstack

SRCS		=	main.cpp

CC			=	g++

OBJS		=	$(SRCS:.cpp=.o)

CFLAGS		+=	-Wall -Werror -Wextra -fsanitize=address

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
