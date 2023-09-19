CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c\
ft_isalnum.c\
ft_isascii.c\
ft_isalpha.c\
ft_isdigit.c\
ft_isprint.c\
ft_tolower.c\
ft_toupper.c\
*ft_memcpy.c\
ft_memcmp.c\
*ft_memset.c\
*ft_memchr.c\
*ft_memmove.c\
*ft_strchr.c\
*ft_strrchr.c\
ft_strlen.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strncmp.c\
ft_strdup.c\
*ft_strnstr.c\
*ft_substr.c\
ft_calloc.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd

OBJ = $(SRC:.c=.o)

HEADERS = libft_h

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJS) $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re






