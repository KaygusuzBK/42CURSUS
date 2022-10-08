# ************************************************************************** */
#                                                                            */
#                                                        :::      ::::::::   */
#   ft_show_tab.c                                      :+:      :+:    :+:   */
#                                                    +:+ +:+         +:+     */
#   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
#                                                +#+#+#+#+#+   +#+           */
#   Created: 2022/08/10 03:14:07 by bkaygusu          #+#    #+#             */
#   Updated: 2022/08/10 03:14:22 by bkaygusu         ###   ########.fr       */
#                                                                            */
# ************************************************************************** */

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = *.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all