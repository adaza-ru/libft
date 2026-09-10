# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaza-ru <adaza-ru@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 19:44:38 by adaza-ru          #+#    #+#              #
#    Updated: 2026/09/11 01:18:51 by adaza-ru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs

INCLUDE_DIR	= include
SRC_DIR		= src
OBJ_DIR		= obj

CPPFLAGS	= -I$(INCLUDE_DIR)

CTYPE_SRC	= $(SRC_DIR)/ctype/ft_isalpha.c \
		  $(SRC_DIR)/ctype/ft_isdigit.c \
		  $(SRC_DIR)/ctype/ft_isalnum.c \
		  $(SRC_DIR)/ctype/ft_isascii.c \
		  $(SRC_DIR)/ctype/ft_isprint.c \
		  $(SRC_DIR)/ctype/ft_toupper.c \
		  $(SRC_DIR)/ctype/ft_tolower.c

MEMORY_SRC	= $(SRC_DIR)/memory/ft_memset.c \
		  $(SRC_DIR)/memory/ft_bzero.c \
		  $(SRC_DIR)/memory/ft_memcpy.c \
		  $(SRC_DIR)/memory/ft_memmove.c \
		  $(SRC_DIR)/memory/ft_memchr.c \
		  $(SRC_DIR)/memory/ft_memcmp.c \
		  $(SRC_DIR)/memory/ft_calloc.c

STRING_SRC	= $(SRC_DIR)/string/ft_strlen.c \
		  $(SRC_DIR)/string/ft_strlcpy.c \
		  $(SRC_DIR)/string/ft_strlcat.c \
		  $(SRC_DIR)/string/ft_strchr.c \
		  $(SRC_DIR)/string/ft_strrchr.c \
		  $(SRC_DIR)/string/ft_strncmp.c \
		  $(SRC_DIR)/string/ft_strnstr.c \
		  $(SRC_DIR)/string/ft_strdup.c \
		  $(SRC_DIR)/string/ft_substr.c \
		  $(SRC_DIR)/string/ft_strjoin.c \
		  $(SRC_DIR)/string/ft_strtrim.c \
		  $(SRC_DIR)/string/ft_split.c \
		  $(SRC_DIR)/string/ft_strmapi.c \
		  $(SRC_DIR)/string/ft_striteri.c

CONVERT_SRC	= $(SRC_DIR)/convert/ft_atoi.c \
		  $(SRC_DIR)/convert/ft_itoa.c

OUTPUT_SRC	= $(SRC_DIR)/output/ft_putchar_fd.c \
		  $(SRC_DIR)/output/ft_putstr_fd.c \
		  $(SRC_DIR)/output/ft_putendl_fd.c \
		  $(SRC_DIR)/output/ft_putnbr_fd.c

LIST_SRC	= $(SRC_DIR)/list/ft_lstnew.c \
		  $(SRC_DIR)/list/ft_lstadd_front.c \
		  $(SRC_DIR)/list/ft_lstadd_back.c \
		  $(SRC_DIR)/list/ft_lstsize.c \
		  $(SRC_DIR)/list/ft_lstlast.c \
		  $(SRC_DIR)/list/ft_lstdelone.c \
		  $(SRC_DIR)/list/ft_lstclear.c \
		  $(SRC_DIR)/list/ft_lstiter.c \
		  $(SRC_DIR)/list/ft_lstmap.c

SRCS		= $(CTYPE_SRC) $(MEMORY_SRC) $(STRING_SRC) $(CONVERT_SRC) $(OUTPUT_SRC) $(LIST_SRC)
OBJS		= $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all