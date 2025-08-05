NAME = gnl.a
OBJS = get_next_line_bonus.o get_next_line_utils_bonus.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

f fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean f re all