# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 12:29:33 by nkietwee          #+#    #+#              #
#    Updated: 2023/08/18 18:34:36 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBFT_PATH = libft/
ACTIONS_PATH = actions/
SRC_PATH = src/

SRC_SRCS = ft_check_err.c\
			ft_checknum.c\
			ft_create_printstack.c\
			ft_push_swap_util.c\
			ft_push_swap.c\
			ft_sort3.c\
			ft_sort5.c\
			ft_sort5_utils.c\
			sort_radix.c\
			sortnumber.c\

LIBFT_SRCS = ft_atoi.c\
			ft_isdigit.c\
			ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstlast.c\
			ft_lstnew.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strlen.c\
			ft_lstclear.c\
			ft_lstdelone.c\
			ft_lstsize.c


ACTIONS_SRCS = ft_r_actions.c\
			ft_rr_actions.c\
			ft_s_actions.c\
			ft_p_actions.c\

SRCS =	$(addprefix $(LIBFT_PATH), $(LIBFT_SRCS))\
		$(addprefix $(SRC_PATH), $(SRC_SRCS))\
		$(addprefix $(ACTIONS_PATH), $(ACTIONS_SRCS))

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
