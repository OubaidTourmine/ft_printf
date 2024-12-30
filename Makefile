SRCS = ft_printf.c utils1.c utils2.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rc
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} : ${OBJS}
		${LIBC} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re