##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for my project
##

SRC		=	./src/main.c      		\
			./src/action.c			\
			./src/communication.c	\
			./src/playthroug.c		\
			./src/utils.c			\
			./src/moov.c

OBJ		=	$(SRC:.c=.o)

NAME	=	ai

CPPFLAGS=	-I./include/

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	$(NAME) all clean fclean re
