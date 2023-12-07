NAME = replace
SRCS = $(wildcard srcs/*.cpp)
OBJS = $(patsubst srcs/%.cpp, objs/%.o, $(SRCS))
RM = rm -f
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MP -MMD
INC = -I./includes/sed.hpp

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

objs/%.o: srcs/%.cpp
	mkdir -p objs
	clang-format -i $<
	$(CXX) $(CXXFLAGS) $(INC) -o $@ -c $<

clean :
	$(RM) $(OBJS)
	rm -rf objs

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re