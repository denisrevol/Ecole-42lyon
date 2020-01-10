# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/10 14:10:23 by drevol       #+#   ##    ##    #+#        #
#    Updated: 2019/10/14 15:03:12 by drevol      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRCS	=	ft_display_file.c

OBJS	=	${SRCS:.c=.o}

NAME	=	ft_display_file

RM		=	rm -f

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM}  ${OBJS}

fclean:		clean	
			${RM} ${NAME}
