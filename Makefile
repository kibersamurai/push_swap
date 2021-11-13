NAME		= 	push_swap
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
SRCS		=	push_swap.c \
				error_exit.c \
				parser.c \
				index.c\
				three_arg.c\
				operations_push.c\
				operations_rr.c\
				operations_rrr.c\
				operations_ss.c\
				algorithm.c\
				search.c\
				steps.c\
				swap_st.c\
				utils/ft_atoi.c\
				utils/lst_clear.c\
				utils/lst_last.c\
				utils/lst_add_back.c\
				utils/lst_free.c\
				utils/lst_size.c\
				utils/lst_new.c\
				utils/ft_split.c\
				utils/ft_strchr.c\
				utils/ft_strlen.c\

OBJ			=	$(SRCS:%.c=%.o)

INCLUDES	=	push_swap.h

.o: .c
	$(CC) $(CFLAGS)	$< -o $@ 

all: $(NAME)
	 @echo "Make done"

$(NAME): $(OBJ) push_swap.h
		 @$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

%.o : %.c $(INCLUDES)
						$(CC) $(CFLAGS) -c $< -I $(INCLUDES) -o $(<:.c=.o)
clean:
	@rm -f $(OBJ)
	@echo "Make clean done"

fclean: clean
	@rm -f $(NAME)
	@echo "Make fclean done"

re: fclean all

norm:
	norminette 
 
 .PHONY: all re clean fclean norm
