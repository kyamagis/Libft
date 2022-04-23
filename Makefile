CC = gcc
CFLAGS = -Wall -Wextra -Werror
MANDATORY = ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_strtrim.c\
	ft_itoa.c\
	ft_strjoin.c\
	ft_strmapi.c\
	ft_substr.c\
	ft_split.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_striteri.c\
	ft_strmapi.c

BONUS = ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstclear.c\
	ft_lstdelone.c\
	ft_lstiter.c\
	ft_lstlast.c\
	ft_lstmap.c\
	ft_lstnew.c\
	ft_lstsize.c

MAN_OBJS = $(MANDATORY:.c=.o)
BON_OBJS = $(BONUS:.c=.o)
NAME = libft.a

#ifdef with bonus
MAN_OBJS += $(BON_OBJS)
#endif

all: $(NAME)

$(NAME): $(MAN_OBJS)
	ar r $(NAME) $(MAN_OBJS)

clean:
	rm -f $(MAN_OBJS) $(BON_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	make with bonus=1
