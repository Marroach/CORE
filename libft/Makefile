NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra
CC			= gcc
LIB			= libft.h
FILES		= ft_islower.c \
			  ft_isupper.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
OBJ			= $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
	