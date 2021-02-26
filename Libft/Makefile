# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 19:28:27 by egomes            #+#    #+#              #
#    Updated: 2021/02/17 16:11:29 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 

OBJS	= ${SRCS:.c=.o}
GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : 		${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean :
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}
			rm -f test.out

re :		fclean all

test :		${NAME}
			${GCC} ${CFLAGS} -o test.out test.c libft.a
			./test.out

.PHONY: 	all clean fclean re test