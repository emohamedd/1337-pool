CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

all : libft.a

libft.a : $(SRCS) includes/ft.h
	$(CC) $(CFLAGS) $(SRCS) -c -I includes/ft.h -o $(SRCS:.c=.o)
	ar rcs libft.a src/*.o

clean :
	rm srcs/*.o

fclean :
	rm srcs/*.o libft.a

re : fclear all