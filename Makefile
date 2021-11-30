NAME		= 	push_swap
BNAME		=	checker
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

BSRCS		=	bonus/index.c\
				bonus/operations_push.c\
				bonus/lst_add_back.c\
				bonus/operations_rr.c\
				bonus/error_exit.c\
				bonus/lst_clear.c\
				bonus/operations_rrr.c\
				bonus/ft_atoi.c\
				bonus/lst_free.c\
				bonus/operations_ss.c\
				bonus/ft_split.c\
				bonus/lst_last.c\
				bonus/operations_st.c\
				bonus/ft_strchr.c\
				bonus/lst_new.c\
				bonus/parser.c\
				bonus/ft_strlen.c\
				bonus/lst_size.c\
				bonus/get_next_line.c\
				bonus/main.c

OBJ			=	$(SRCS:%.c=%.o)

BOBJ		=	$(BSRCS:%.c=%.o)

INCLUDES	=	push_swap.h

BINCLUDES	=	bonus/checker.h

.o: .c
	$(CC) $(CFLAGS)	$< -o $@ 

all: $(NAME)
	 @echo "Make done"

$(NAME): $(OBJ) push_swap.h
		 @$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
		
bonus: $(BNAME)

$(BNAME): $(BOBJ) bonus/checker.h
			$(CC) $(CFLAGS) $(BOBJ) -o $(BNAME)

clean:
	@rm -f $(OBJ) $(BOBJ)
	@echo "Make clean done"

fclean: clean
	@rm -f $(NAME) $(BNAME)
	@echo "Make fclean done"

re: fclean all

norm:
	norminette 
 
.PHONY: all re clean fclean norm bonus
