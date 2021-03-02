NAME = 				libft.a 
CC = 				gcc
CFLAGS = 			-Wall -Wextra -Werror -c
HEA_PATH = 			./includes
HEA_NAME = 			ft.h
HEA = 				$(addprefix $(HEA_PATH)/,$(HEA_NAME))
SRC_PATH = 			./srcs
SRC_NAME = 			ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC = 				$(addprefix $(SRC_PATH)/,$(SRC_NAME))		
OBJ_PATH = 			./srcs
OBJ_NAME = 			$(SRC_NAME:.c=.o)
OBJ = 				$(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): 			$(OBJ) 
					@ar rc $(NAME) $(OBJ)
					@ranlib $(NAME)

%.o: 				%.c $(HEA)
					@$(CC) $(CFLAGS) -c $< -o $@ 

clean:
					@rm -rf $(OBJ)

fclean: 			clean
					@rm -rf $(NAME) 
					@rm -rf rc 

re: 				fclean all

.PHONY: 			all clean fclean re