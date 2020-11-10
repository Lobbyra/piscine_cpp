# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 15:31:58 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/10 15:33:28 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bin

SRCS		=	./main.cpp						\
				./Form.cpp						\
				./Bureaucrat.cpp				\
				./RobotomyRequestForm.cpp		\
				./ShrubberyCreationForm.cpp		\
				./PresidentialPardonForm.cpp

CC			=	g++

OBJS		=	$(SRCS:.cpp=.o)

CFLAGS		+=	-Wall -Werror -Wextra

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

san			:	$(OBJS)
				$(CC) -o $(NAME) -fsanitize=address $(CFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
