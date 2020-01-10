# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/14 16:22:35 by drevol       #+#   ##    ##    #+#        #
#    Updated: 2019/11/04 09:02:54 by drevol      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRCS		= ft_isdigit.c ft_lstmap.c ft_memdel.c ft_putnbr.c ft_strcmp.c \
			  ft_strjoin.c ft_strncpy.c ft_strsub.c ft_isprint.c ft_lstnew.c \
			  ft_memmove.c ft_putnbr_fd.c ft_strcpy.c ft_strlcat.c \
			  ft_strnequ.c ft_strtrim.c ft_atoi.c ft_itoa.c ft_memalloc.c \
			  ft_memset.c ft_putstr.c ft_strdel.c ft_strlen.c ft_strnew.c \
			  ft_tolower.c ft_bzero.c ft_lstadd.c ft_memccpy.c ft_putchar.c \
			  ft_putstr_fd.c ft_strdup.c ft_strmap.c ft_strnstr.c ft_toupper.c\
			  ft_isalnum.c ft_lstdel.c ft_memchr.c ft_putchar_fd.c \
			  ft_strcat.c ft_strequ.c ft_strmapi.c ft_strrchr.c ft_isalpha.c \
			  ft_lstdelone.c ft_memcmp.c ft_putendl.c ft_strchr.c \
			  ft_striter.c ft_strncat.c ft_strsplit.c ft_isascii.c \
			  ft_lstiter.c ft_memcpy.c ft_putendl_fd.c ft_strclr.c \
			  ft_striteri.c ft_strncmp.c ft_strstr.c

DEPS		= libft.h

OBJS		= ${SRCS:.c=.o}

NAME 		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

.c.o:		
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

RM			= 	rm -f

AR			= 	ar rc

$(NAME):	${OBJS} ${DEPS}
			${AR} $(NAME) ${OBJS}

all:		$(NAME)
		
clean:
	${RM} ${OBJS}
		
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re


