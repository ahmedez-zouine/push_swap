# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aez-zoui <aez-zoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:58:46 by aez-zoui          #+#    #+#              #
#    Updated: 2024/04/01 03:35:33 by aez-zoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror  

NAME = libft.a

SRCS =ft_strlen.c ft_memcpy.c ft_strchr.c ft_strncmp.c ft_atoi.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_putchar_fd.c ft_putstr_fd.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $^
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all