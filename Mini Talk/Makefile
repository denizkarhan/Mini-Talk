CC = gcc

CFLAGS = -Wall -Werror -Wextra

PRINTF_SRC = ft_printf/ft_printf_ptr.c ft_printf/ft_printf_utils.c ft_printf/ft_printf.c

PRINTF_OBJ = $(PRINTF_SRC:.c=.o)

PRINTF = libftprintf.a

SERVER = server

CLIENT = client

all: $(PRINTF) $(SERVER) $(CLIENT)

$(PRINTF): $(PRINTF_OBJ)
	@ar cr $(PRINTF) $(PRINTF_OBJ)

$(SERVER):
	@gcc $(CFLAGS) server.c -o $(SERVER)

$(CLIENT):
	@gcc $(CFLAGS) client.c -o $(CLIENT)
	@echo "###############################################"
	@echo "# *       * # **   * #   ***** **** *    *  * #"
	@echo "# **     ** * * *  * *     *   *  * *    * *  #"
	@echo "# * *   * * * *  * * *     *   **** *    **   #"
	@echo "# *  * *  * * *   ** *     *   *  * *    * *  #"
	@echo "# *   *   * * *    * *     *   *  * **** *  * #"
	@echo "###############################################"

clean:
	@rm -rf server client

fclean: clean
	@rm -rf $(PRINTF) $(PRINTF_OBJ) $(LIBFT_OBJ)

re: clean fclean all
