##
## Makefile for  in /home/kaimou_m/FDI-DEVC/libmy2/libmy_02
## 
## Made by KAIMOUNI Mossab
## Login   <kaimou_m@etna-alternance.net>
## 
## Started on  Tue Oct  6 14:32:36 2015 KAIMOUNI Mossab
## Last update Tue Oct  6 14:58:39 2015 KAIMOUNI Mossab
##

CC =	gcc

NAME =	libmy.a

SRC =	my_putchar.c	\
	my_strcmp.c	\
	my_strncmp.c	\
	my_put_nbr.c	\
	my_strcpy.c	\
	my_strncpy.c	\
	my_getnbr.c	\
	my_putstr.c	\
	my_strlen.c	\
	my_strstr.c	\
	my_isneg.c	\
	my_strcat.c	\
	my_strncat.c	\
	my_swap.c	\
	my_strdup.c	\
	my_str_to_wordtab.c

OBJ =		$(SRC:%.c=%.o)
AR =		ar r
RANLIB =	ranlib
RM =		rm -f

$NAME:		$(OBJ)
		$(AR) $(NAME) $(OBJ)
		$(RANLIB) $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean