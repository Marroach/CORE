NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra 
FILES		= ft_isalpha.c \
				
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

copy:
	cp -f libc-funcs/*.c .

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


