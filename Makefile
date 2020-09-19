# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 20:52:25 by casteria          #+#    #+#              #
#    Updated: 2020/09/19 16:47:10 by casteria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
FLAGS = -Wall -Wextra -Werror -c -I.

SOURCES_DIR =		base
BONUSES_DIR =		bonus
ADDITIONAL_DIR =	additional

SOURCES =			ft_putchar_fd.c ft_tolower.c ft_toupper.c ft_strlen.c \
					ft_isprint.c ft_isascii.c ft_isalpha.c ft_isdigit.c \
					ft_isalnum.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c \
					ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c \
					ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c \
					ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
					ft_split.c ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c \
					ft_putnbr_fd.c

BONUSES =			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c

ADDITIONAL = 		ft_destroy_matrix.c

REL_SOURCES =		$(addprefix $(SOURCES_DIR)/, $(SOURCES))
REL_BONUSES =		$(addprefix $(BONUSES_DIR)/, $(BONUSES))
REL_ADDITIONAL = 	$(addprefix $(ADDITIONAL_DIR)/, $(ADDITIONAL))

OBJECTS =				$(REL_SOURCES:.c=.o)
BONUS_OBJECTS =			$(REL_BONUSES:.c=.o)
ADDITIONAL_OBJECTS = 	$(REL_ADDITIONAL:.c=.o)
.PHONY: all clean fclean bonus re

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	gcc $(FLAGS) $< -o $@

clean: 
	rm -f $(OBJECTS) $(BONUS_OBJECTS) $(ADDITIONAL_OBJECTS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

bonus: $(BONUS_OBJECTS) $(ADDITIONAL_OBJECTS)
	ar rcs $(NAME) $(BONUS_OBJECTS)
