NAME		=	a.out

SRCS		=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

RM			=	rm -f

.cpp.o:
			$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $@ $^

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
