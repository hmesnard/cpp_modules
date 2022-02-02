NAME		=	MyPhoneBook

SRCS		=	Contact.cpp \
				PhoneBook.cpp \
				main.cpp

OBJS		=	$(SRCS:.c=.o)

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $@ $^

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
