# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 18:02:14 by juhur             #+#    #+#              #
#    Updated: 2022/06/13 18:02:34 by juhur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = \
	main.cpp \

%.o : %.cpp
	$(CXX) $(CXXFLAGS) $^ -c -o $@

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re