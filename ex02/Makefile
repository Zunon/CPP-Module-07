# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 14:26:55 by kalmheir          #+#    #+#              #
#    Updated: 2023/09/16 20:19:12 by kalmheir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	array_template
SRCS	:=	main.cpp 
OBJS	:= $(SRCS:.cpp=.o)
CC		:= c++
CFLAGS	:= -Wall -Wextra -Werror -std=c++98
RM		:= rm -f

.PHONY: all clean fclean re run

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all
	./$(NAME)