NAME = libft.a
CFLAGS = 
SOURCES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c  ft_memmove.c ft_memset.c ft_strchr.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
ft_split.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_substr.c \
ft_calloc.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_striteri.c ft_strdup.c ft_strlcat.c \
get_next_line_utils.c get_next_line.c \
ft_atoi.c ft_c.c ft_chosehex.c ft_hexlower.c ft_hexupper.c ft_pointer.c ft_printf.c ft_putchar_onear.c ft_putchar.c ft_putnbr.c\
ft_putnewl.c ft_putstr.c ft_putunsint.c ft_chosenbr.c

OBJECTS = $(SOURCES:.c=.o)

all:${NAME} ${OBJECTS}

${NAME} : ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f ${NAME}

re: fclean all
