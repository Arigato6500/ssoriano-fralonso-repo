NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)
RM		= rm -f 

all:		$(NAME)

%.o:		%.c
			$(CC) $(CFLAGS) -c $<

$(NAME):	$(OBJS)
			ar -rc $@ $(OBJS) 

#QUITAR 
main:		$(NAME)
			$(CC) $(CFLAGS) main.c $<
rm_main:
			
#QUITAR

all:		$(NAME)

clean:
			$(RM) $(OBJS)
			$(RM) a.out

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re