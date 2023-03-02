# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 12:29:33 by nkietwee          #+#    #+#              #
#    Updated: 2023/03/02 15:56:45 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBFT_PATH = libft/
# ACTIONS_PATH = actions/

SWAP_SRCS = ft_push_swap.c\
			ft_push_swap_util.c\
			ft_check_err.c\

LIBFT_SRCS = ft_isdigit.c\
			ft_strlen.c\
			ft_atoi.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_checknum.c\

# ACTIONS_SRCS = ft_swap.c ft_rotate.c ft_reverse_rotate.c ft_push.c

SRCS = $(SWAP_SRCS)\
	   $(addprefix $(LIBFT_PATH), $(LIBFT_SRCS))
	#    $(addprefix $(ACTIONS_PATH), $(ACTIONS_SRCS))\


OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
