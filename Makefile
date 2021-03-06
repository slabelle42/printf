NAME = libftprintf.a
LIB_DIR = libft/
LIB = libft.a

FLAG = -Wall -Wextra -Werror

EXE = libftprintf
MAIN = main.c

# [ src ]
SRC =	ft_printf.c
SRC +=	printf_1_specs_flags.c
SRC +=	printf_1_width_precision.c
SRC +=	printf_2_percent.c
SRC +=	printf_2_pointer.c
SRC +=	printf_2_signed_decimal.c
SRC +=	printf_2_string.c
SRC +=	printf_2_unsigned_char.c
SRC +=	printf_2_unsigned_decimal.c
SRC +=	printf_2_unsigned_hexa.c

# [ obj ]
OBJ_DIR = obj/
OBJ_NAME = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $?
	@ranlib $@
	@echo "Indexing ... OK"

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@make -C $(LIB_DIR)
	@cp $(LIB_DIR)$(LIB) $(NAME)
	@echo "Creating [$(LIB)] ... OK"
	@mkdir $@
	@echo "Creating [$@] directory ... OK"

$(OBJ_DIR)%.o: %.c
	@gcc $(FLAG) -I . -I $(LIB_DIR) -c $? -o $@
	@echo "Compiling [$?] ... OK"

bonus: $(NAME)

exe:
	@gcc -o $(EXE) $(MAIN) -L. -lftprintf
	@echo "Creating executable ... OK"

clean:
	@rm -rf $(OBJ_DIR)
	@rm -rf $(LIB_DIR)$(OBJ_DIR)
	@echo "Cleaning ... OK"

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIB_DIR)$(LIB)
	@rm -f $(EXE)

re: fclean all

.PHONY: all bonus exe clean fclean re
