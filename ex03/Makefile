NAME = violence
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
SRCDIR = srcs
SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
RM = rm -f
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MP -MMD
INC = -I./includes/
HEADERS = $(wildcard includes/*.hpp)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INC) -o $@ -c $<

clean :
	$(RM) $(OBJS)
	rm -rf $(OBJDIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

format :
	clang-format -i $(SRCS) $(HEADERS)

.PHONY : all clean fclean re