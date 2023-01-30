# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 00:10:26 by eryudi-m          #+#    #+#              #
#    Updated: 2022/12/04 00:17:49 by eryudi-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
get_next_line.c \
ft_len_unsigned.c ft_itoa_base.c \
ft_printf.c ft_print_char.c ft_print_string.c ft_print_integer.c \
ft_print_unsigned_int.c ft_print_pointer.c ft_print_x.c ft_putnbr_unsig.c \
ft_fprintf.c 


HEADER_PATH = ../inc/
OBJ = $(patsubst %.c, %.o, $(SRC))

FLAGS = -Wall -Wextra -Werror

CC = clang $(FLAGS)

all: $(NAME)
$(NAME): $(OBJ)
	@ar -rcs libft.a $(OBJ)

%.o : %.c $(HEADER_PATH)*.h
	@$(CC) -c $< -I $(HEADER_PATH)  -o $@

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re