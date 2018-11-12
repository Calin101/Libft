# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: calin <calin@student.le-101.fr>            +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/05 11:07:00 by calin        #+#   ##    ##    #+#        #
#    Updated: 2018/11/09 18:16:59 by calin       ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_bzero.c \
    	ft_memchr.c \
        ft_memcpy.c \
        ft_putchar.c \
        ft_putstr.c \
        ft_strcpy.c \
        ft_strlen.c \
        ft_strncpy.c \
        ft_atoi.c \
        ft_memccpy.c \
        ft_memcmp.c \
        ft_memset.c \
        ft_putnbr.c \
        ft_strcmp.c \
        ft_strdup.c \
        ft_strncmp.c \
        ft_strstr.c \
        ft_strcat.c \
        ft_strncat.c \
        ft_memmove.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_isascii.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_isalnum.c \
        ft_memchr.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strnstr.c \
        ft_striter.c \
        ft_strclr.c \
        ft_striteri.c \
        ft_memalloc.c \
        ft_memdel.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_strequ.c \
        ft_strnequ.c \
        ft_strnew.c \
        ft_strdel.c \
        ft_strmap.c \
        ft_strmapi.c \
        ft_strsub.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_strsplit.c \
        ft_itoa.c \
        ft_strlcat.c \
		ft_count_integer.c \
		ft_countwords.c \
		ft_lenword.c \
		ft_memrcpy.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstlen.c \
		ft_swap.c \
		ft_index.c \
		get_next_line.c \

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

CC = gcc $(FLAG)

RM = /bin/rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "Make libft.a :\033[0;32m DONE !\033[0m"

%.o: %.c
	$(CC) -o $@ -c $< -I ./

clean:
	@$(RM) $(OBJ)
	@echo "Make obj clean :\033[0;32m DONE !\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "Make libft.a clean :\033[0;32m DONE !\033[0m"

re: fclean all

.PHONY: all clean fclean re
