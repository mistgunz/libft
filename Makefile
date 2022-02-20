# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnait-el <rnait-el@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/23 21:06:52 by rnait-el          #+#    #+#              #
#    Updated: 2022/02/20 01:29:02 by rnait-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		  ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		  ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BSRCS	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		  ft_lstmap.c ft_lstnew.c ft_lstsize.c

CC		= gcc

CFLAGS 	= -Wall -Werror -Wextra 

OBJSRCS = $(SRCS:.c=.o)

BOSRCS 	= $(BSRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJSRCS)

%.o : %.c
	$(CC) -c $< -o $@
	ar rcs $(NAME) $@

bonus: $(BOSRCS) all

clean: 
	rm -rf $(OBJSRCS) $(BOSRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
