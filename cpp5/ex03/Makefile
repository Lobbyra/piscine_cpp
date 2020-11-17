# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/11 11:37:57 by jecaudal          #+#    #+#              #
#    Updated: 2020/11/17 14:03:23 by jecaudal         ###   ########.fr        #
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

CPPFLAGS		+=	-Wall -Werror -Wextra

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CPPFLAGS) $(OBJS)

san			:	$(OBJS)
				$(CC) -o $(NAME) -fsanitize=address $(CPPFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
