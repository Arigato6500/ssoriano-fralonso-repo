NAME	= gnl.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g

SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)
RM		= rm -f 

all:		$(NAME)

bonus:		$(OBJS)
			ar -rc $@ $(OBJS) 

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
			$(CC) $(CFLAGS) -D BUFFER_SIZE=10 main.c $<
#QUITAR

all:		$(NAME)

clean:
			$(RM) $(OBJS)
			
fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re