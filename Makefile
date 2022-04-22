##
## EPITECH PROJECT, 2021
## B-CPE-110-PAR-1-1-bsbsq-ethan.saux
## File description:
## Makefile
##

DIR	=	src/

SRC	=	$(DIR)main.c\
		$(DIR)check_error.c\
		$(DIR)init_structure.c\
		$(DIR)my_strlen.c\
		$(DIR)free_structure.c\
		$(DIR)run_bsq.c\
		$(DIR)get_size.c\
		$(DIR)my_getnbr.c\
		$(DIR)my_intlen.c\
		$(DIR)change_map.c\
		$(DIR)free_map.c\
		$(DIR)display_map.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

NAME_DEBUG	=	$(NAME)_debug

CPPFLAGS	=	-I./include

CFLAGS	=	-W -Wall -Wextra

CFLAGS_debug	=	$(CFLAGS) -g

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

debug:	$(OBJ)
		$(CC) -o $(NAME_DEBUG) $(OBJ) $(CFLAGS_debug)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

dclean:	clean
		$(RM) $(NAME_DEBUG)

re:		fclean all

.PHONY:	clean fclean re all debug
