NAME = minitalk
CC = cc -g 
CFLAGS = -Wall -Werror -Wextra

SOURCES = client.c server.c
OBJECTS = $(SOURCES:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) server client

$(LIBFT):
	make -C $(LIBFT_DIR)

server: server.o $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $< $(LIBFT)

client: client.o $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $< $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) server client

fclean: clean
	rm -f server client
	make -C $(LIBFT_DIR) fclean

re: fclean all