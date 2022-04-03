CC = clang++ -Wall -Wextra -Werror -fsanitize=address 

NAME = html_generator

SRC = srcs/main.cpp srcs/html.cpp srcs/utils.cpp 

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
