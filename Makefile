SRCS = $(wildcard ./ft_*.c)
OBJECTS = $(SRCS:.c=.o)
NAME = libft.a
FLAGS = -Werror -Wall -Wextra

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	cc -c $< -o $@ $(FLAGS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) *.out *.o

re: fclean all

.PHONY: all clean fclean re test

## debug

test: fclean $(NAME)
	cc -o myprogram.out test.c -L ./ -l ft
	./myprogram.out


