NAME = libftprintf.a

SRC = 

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $<
	ar rcs $(NAME) $@

clean : 
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus