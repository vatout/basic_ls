##
## Makefile for Makefile in /home/vatout_a/taff/USP/my_ls
## 
## Made by Vatoutine Artem
## Login   <vatout_a@epitech.net>
## 
## Started on  Mon Nov 23 22:46:04 2015 Vatoutine Artem
## Last update Sat Nov 28 14:19:25 2015 Vatoutine Artem
##

CC	=	gcc

SRCS	=	main.c \
		my_aff.c \
		my_list.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	my_ls

LDFLAG	=	-lmy -L./lib

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -pedantic -ansi

$(NAME):	$(OBJS)
	$(CC) $(OBJS) $(LDFLAG) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
