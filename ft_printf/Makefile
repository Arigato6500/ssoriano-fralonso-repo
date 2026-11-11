NAME	= libftprintf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address 
SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)
RM		= rm -f 

all:		$(NAME)

%.o:		%.c
			$(CC) $(CFLAGS)  -c $<

main: $(NAME)
			$(CC) $(CFLAGS) main.c $<

$(NAME):	$(OBJS)
			ar -rc $@ $(OBJS)

clean:
			$(RM) $(OBJS)
			
fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re