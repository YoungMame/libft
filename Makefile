SRCS = srcs/*.c
OBJECTS = src/*.o 
NAME = libft.a
FLAGS = -Werror -Wall

$(NAME): $(OBJECTS)
	ar rcs $(OBJECTS) -o $(NAME)

$(OBJECTS): $(SRCS)
	cc -c $(SRCS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

## DEBUG