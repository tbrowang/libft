NAME			=	libft.a

BUILD_PATH		=	build/

SRCS_PATH		=	srcs/

INCS_PATH		=	incs/


SRCS_MEMORY		=	ft_bzero.c				\
					ft_memcmp.c				\
					ft_memcpy.c				\
					ft_memset.c				\
					ft_memmove.c			\
					ft_memchr.c				\
					ft_calloc.c				\
				
SRCS_STRINGS	=	ft_strlen.c				\
					ft_strchr.c				\
					ft_strrchr.c			\
					ft_strncmp.c			\
					ft_strlcat.c			\
					ft_strlcpy.c			\
					ft_strnstr.c			\
					ft_strdup.c				\
					ft_substr.c				\
					ft_strjoin.c			\
					ft_strtrim.c			\
					ft_strmapi.c			\
					ft_striteri.c			\
					ft_split.c				\
					ft_strcmp.c				\
					fill_str.c				\
					cmatrix/cmatrix_free.c	\
					cmatrix/cmatrix_size.c	\
					cmatrix/cmatrix_join.c
					
					

SRCS_CTYPES		=	ft_isascii.c			\
					ft_isalnum.c			\
					ft_isalpha.c			\
					ft_isdigit.c			\
					ft_isprint.c			\
					ft_tolower.c			\
					ft_toupper.c			\
					ft_isspace.c			\
					ft_isint.c				

SRCS_CONVERT	=	ft_atoi.c				\
					ft_itoa.c				\
					ltoa_base.c				\
					utoa_base.c


SRCS_IO			=	ft_putchar_fd.c			\
					ft_putendl_fd.c			\
					ft_putnbr_fd.c			\
					ft_putstr_fd.c			\
					get_next_line.c			\

SRCS_LST		=	ft_lstadd_back.c		\
					ft_lstadd_front.c		\
					ft_lstclear.c			\
					ft_lstdelone.c			\
					ft_lstiter.c			\
					ft_lstlast.c			\
					ft_lstmap.c				\
					ft_lstnew.c				\
					ft_lstsize.c


SRCS_PRINTF		=	ft_printf.c					\
					state/state_default.c		\
					state/state_flags.c			\
					state/state_length.c		\
					state/state_precision.c		\
					state/state_print.c			\
					state/state_wrong_flag.c	\
					state/apply_flag.c			\
					print/print_char.c			\
					print/print_str.c			\
					print/print_ptr.c			\
					print/print_int.c			\
					print/print_u_int.c			\
					print/print_hex_low.c		\
					print/print_hex_up.c		\
					print/print_percent.c		\
					init.c

SRCS_DOUBLY_LST =	doubly_lst_add_back.c	\
					doubly_lst_clear.c		\
					doubly_lst_is_equals.c	\
					doubly_lst_last.c		\
					doubly_lst_set_next.c	\
					doubly_lst_sort.c		\
					doubly_lst_add_front.c	\
					doubly_lst_cpy.c		\
					doubly_lst_is_sort.c	\
					doubly_lst_new.c		\
					doubly_lst_size.c

SRCS_HEAD_TAIL	=	head_tail_add_back.c	\
					head_tail_add_front.c	\
					head_tail_new.c

SRCS_MATH		=	ft_abs.c				\
					ft_max.c				\
					ft_min.c

PSRCS_MEMORY	=	$(addprefix memory/, $(SRCS_MEMORY))
PSRCS_STRINGS	=	$(addprefix strings/, $(SRCS_STRINGS))
PSRCS_CTYPES	=	$(addprefix ctype/, $(SRCS_CTYPES))
PSRCS_CONVERT	=	$(addprefix convert/, $(SRCS_CONVERT))
PSRCS_IO		=	$(addprefix io/, $(SRCS_IO))
PSRCS_LST		=	$(addprefix lst/, $(SRCS_LST))
PSRCS_PRINTF	=	$(addprefix io/printf/, $(SRCS_PRINTF))
PSRCS_DOUBLY_LST=	$(addprefix doubly_linked_list/, $(SRCS_DOUBLY_LST))
PSRCS_HEAD_TAIL	=	$(addprefix head_tail/, $(SRCS_HEAD_TAIL))
PSRCS_MATH		=	$(addprefix math/, $(SRCS_MATH))

ALL_SRCS		=	$(PSRCS_MEMORY)			\
					$(PSRCS_STRINGS)		\
					$(PSRCS_CTYPES)			\
					$(PSRCS_CONVERT)		\
					$(PSRCS_IO)				\
					$(PSRCS_LST)			\
					$(PSRCS_PRINTF)			\
					$(PSRCS_DOUBLY_LST)		\
					$(PSRCS_HEAD_TAIL)		\
					$(PSRCS_MATH)


OBJS_O			=	$(SRCS:.c=.o)
DEP				= 	$(SRCS:%.c=$(BUILD_PATH)%.d)

OBJS			=	$(addprefix $(BUILD_PATH), $(OBJS_O))

SRCS			=	$(addprefix $(SRCS_PATH), $(ALL_SRCS))

INCLUDES		=	-I $(INCS_PATH)

CFLAGS			=	-Wall -Wextra -Werror -g3

DEPFLAGS		=	-MP -MMD

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(BUILD_PATH)%.o: %.c
	mkdir -p $(dir $@)
	gcc -c $< -o $@ $(INCLUDES) $(CFLAGS) $(DEPFLAGS)

clean:
	rm -rf $(BUILD_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

-include $(DEP)

.PHONY: all clean fclean re bonus
