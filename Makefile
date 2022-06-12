NAME = cub3d

CC = clang
FLAGS = -Wall -Werror -Wextra
LIBRARIES = -lXext -lX11

MINILIBX = $(MINILIBX_DIRECTORY)libmlx_Linux.a
MINILIBX_DIRECTORY = ./mlx/

SOURCES = main.c \
./utils/utils.c \
./rendering/rendering.c \

OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFT) $(MINILIBX) $(OBJECTS)
	@$(CC) $(FLAGS) $(LIBRARIES) $(OBJECTS) $(MINILIBX) -o $(NAME)

%.o:	%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(MINILIBX):
	@$(MAKE) -sC $(MINILIBX_DIRECTORY)

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
