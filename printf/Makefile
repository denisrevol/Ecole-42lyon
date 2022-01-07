
SRCS		=			ft_printf.c ft_parsing.c ft_parse.c ft_convert.c ft_convert_bis.c ft_nblen.c ft_flaginit.c ft_right.c ft_zero.c ft_tpfinit.c ft_left.c ft_align.c ft_align_left.c ft_alignnb.c ft_alignnb_left.c ft_alignnb_null.c   ft_alignp.c ft_point.c

MAKEDEPEND	= ./Libft/*.c ./Libft/libft.h

LIBFT		=	./Libft

DEPS		=	libftprintf.h

OBJS		=	${SRCS:.c=.o}

NAME		=	libftprintf.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

%.o:		%.c ${DEPS}
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

RM			=	rm -rf

AR			=	ar rc

${NAME}:	${OBJS} ${DEPS} ${MAKEDEPEND}
				make -C ./Libft/
				cp Libft/libft.a ./${NAME}
				${AR} ${NAME} ${OBJS}

all:		${NAME}


clean:		
			${RM} ${OBJS}
			make clean -C ${LIBFT}

fclean:		clean
				${RM} ${NAME}
				make fclean -C ${LIBFT}

re:			fclean all

PHONY:		fclean all clean re

