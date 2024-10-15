SRCS = $(wildcard ./ft_*.c)
OBJECTS = $(SRCS:.c=.o)
NAME = libft.a
FLAGS = -Werror -Wall

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	cc -c $< -o $@ $(FLAGS)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJECTS) *.out

re: fclean all

.PHONY: all clean fclean re test

## debug

test: fclean $(NAME)
	cc -o myprogram test.c -L ./ -l ft
	./myprogram


