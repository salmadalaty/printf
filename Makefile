# Compiler and archiver commands
CC = cc
AR = ar rcs

CFLAGS = -Wall -Wextra -Werror
NAME		= libftprintf.a
SRCS = ft_printf.c file1.c ft_file2.c file3.c file4.c
OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
