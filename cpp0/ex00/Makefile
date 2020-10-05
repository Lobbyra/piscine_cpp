# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/05 11:33:41 by jecaudal          #+#    #+#              #
#    Updated: 2020/10/05 11:33:53 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:	megaphone

SRCS		:	megaphone.cpp

CC			=	clang++

OBJS		=	$(SRC:.cpp=.o)

CFLAGS		+=	-Wall -Wextra -Werro

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
