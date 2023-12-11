NAME = brain
SRC = main.cpp
OBJS = $(SRC:%.cpp=%.o)
RM = rm -f
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

format :
	clang-format -i $(SRC)

.PHONY : all clean fclean re
