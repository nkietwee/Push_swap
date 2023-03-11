# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 12:29:33 by nkietwee          #+#    #+#              #
#    Updated: 2023/03/11 16:36:10 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBFT_PATH = libft/
# ACTIONS_PATH = actions/

PUSHSWAP_SRCS = ft_push_swap.c\
			ft_push_swap_util.c\
			ft_check_err.c\
			ft_lstnew.c\
			ft_lstadd_back.c\
			ft_lstadd_front.c\
			sortnumber.c\
			ft_ra.c\
			ft_rra.c\
			ft_sa.c\
			ft_sort3.c\
			ft_sort5.c\
			ft_create_printstack.c\
			ft_testascend.c\

LIBFT_SRCS = ft_isdigit.c\
			ft_strlen.c\
			ft_atoi.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_checknum.c\


# ACTIONS_SRCS = ft_ra.c\


SRCS = $(PUSHSWAP_SRCS)\
	   $(addprefix $(LIBFT_PATH), $(LIBFT_SRCS))
	#    $(addprefix $(ACTIONS_PATH), $(ACTIONS_SRCS))


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
