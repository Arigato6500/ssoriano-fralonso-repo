NAME	= gnl.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g

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
#QUITAR

#QUITAR 
D_main:		$(NAME)
			$(CC) $(CFLAGS) -c get_next_line.c $<
#QUITAR

all:		$(NAME)

clean:
			$(RM) $(OBJS)
			
fclean:		clean
			$(RM) $(NAME)
			$(RM) a.out

re:			fclean all

.PHONY:		all clean fclean re