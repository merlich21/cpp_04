# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merlich <merlich@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/11 19:26:47 by merlich           #+#    #+#              #
#    Updated: 2022/08/13 22:51:21 by merlich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animal

SRCS		=	main.cpp AAnimal.class.cpp Cat.class.cpp Dog.class.cpp Brain.class.cpp

OBJS		=	${SRCS:.cpp=.o}

D_FILES		=	${SRCS:.cpp=.d}

CPP			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -MD

RM			=	rm -f

%.o:		%.cpp Makefile
			${CPP} ${CPPFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS} Makefile
			${CPP} ${OBJS} -o ${NAME}

-include ${D_FILES}

clean:
			${RM} ${OBJS} ${D_FILES}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
