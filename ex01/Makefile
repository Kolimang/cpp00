# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 13:11:17 by jrichir           #+#    #+#              #
#    Updated: 2025/04/08 14:31:05 by jrichir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS =	$(NAME).cpp

HEADER = $(NAME).hpp

OBJECTS = $(SRCS:%.cpp=%.o)

CFLAGS = -g -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "\033[K\033[0;34mObject files compiled.\033[0m\n"

	@$(CC) $(CFLAGS) ${OBJECTS} -I ${HEADER} -o ${NAME}
	@printf "\033[0;32mThe binary '$(NAME)' is ready.\033[0m\n"

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}
	@printf "\033[K\033[0;35mCompiling the object files... : \033[0;33m%s\r" "$<"

clean:
	@$(RM) $(OBJECTS) $(OBJ_BNS)
	@printf "\033[0;31mAll objects files removed.\033[0m\n"

fclean: clean
	@$(RM) $(NAME) $(NAME_BONUS)
	@printf "\033[0;31mBinary destroyed.\n\033[0m"

re: fclean all

.PHONY: all bonus clean fclean re
