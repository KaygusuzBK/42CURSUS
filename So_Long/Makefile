CC		  = gcc
OS		= $(shell uname)

# mlx library
ifeq ($(OS), Linux)
	MLX		= ./minilibx-linux/
	MINILIBX	= minilibx-linux/libmlx.a
	LFLAGS	= -L $(MLX) -l mlx -lXext -lX11
else
	MLX		= ./minilibx/
	MINILIBX	= minilibx/libmlx.a
	LFLAGS	= -L $(MLX) -l mlx -framework OpenGL -framework AppKit -Dunix
endif

NAME		= so_long
SRC_DIR	 = src
SRCS		:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS		= $(SRCS:.c=.o)
FT		= ./libft/
FT_LIB	= ./libft/libft.a
FT_PRINT		= ./ft_printf/
FT_PRINT_LIB	= ./ft_printf/libftprintf.a
CFLAGS	  = -Wall -Wextra -Werror -I./src -I $(MLX) -I $(FT) -glldb

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(FT_LIB) $(FT_PRINT_LIB) $(MINILIBX) $(OBJS)
	$(CC) $(OBJS) -lm $(FT_LIB) $(FT_PRINT_LIB) -o $(NAME) $(LFLAGS)

$(MINILIBX):
	@make -C $(MLX)

$(FT_PRINT_LIB):
	@make -C $(FT_PRINT)

$(FT_LIB):
	@make -C $(FT)

clean:
	rm -rf $(OBJS)
	@make -C $(MLX) clean
	@make -C $(FT) clean
	@make -C $(FT_PRINT) clean

fclean: clean
	rm -rf $(NAME)
	@make -C $(MLX) clean
	@make -C $(FT) fclean
	@make -C $(FT_PRINT) fclean

norminette:
	norminette src/
	norminette $(FT)
	norminette $(FT_PRINT)

re:
	@make fclean
	@make all
	
.PHONY: clean run fclean re all norminette