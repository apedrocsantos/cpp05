CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03

FILES =	Bureaucrat\
		AForm\
		ShrubberyCreationForm\
		RobotomyRequestForm\
		PresidentialPardonForm\
		Intern\

SRCS =	$(FILES:=.cpp) main.cpp

HEADERS =	$(FILES:=.hpp)

all: $(NAME)

$(NAME) : $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME) -g

clean:


fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re