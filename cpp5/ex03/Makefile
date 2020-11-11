# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/11 11:37:57 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/11 11:42:07 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bin

SRCS		=	./Form.cpp						\
				./main.cpp						\
				./Intern.cpp					\
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
