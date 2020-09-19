
TEST = test

all: $(TEST)

$(TEST):
	gcc -I libft -L libft -lft test.c -o $(TEST)