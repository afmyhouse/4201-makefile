# MAKE FILE to compile a library with the functions of the printf function
# Add "printf" function to existing library libft.a and genetate a new library libftprintf.a
# keeping libft.a intact.

# Add the following rules to your Makefile:
# double commented (##) functions and variables aren't used in this project

## CC 			= gcc
## CFLAGS 		= -Wall -Wextra -Werror
## CFLAGSG		= -Wall -Wextra -Werror -g
RM			= rm -f
ARS			= ar rcs
CPY 		= cp

# files paths and names from Makefile workspace location
# progam file or executable file destination folder
BIN     	:= bin
# source c/c++ files folder
SRC     	:= src
# header files folder
INCLUDE 	:= inc
# libraries folder (custom libraries) to be included as a dependency
LIB			:= lib

# source files with extension .c or cpp
SRCS    	:= $(wildcard $(SRC)/*.c)
# object files with extension .o generated from .c or .cpp files
OBJS		= $(SRCS:.c=.o)
# output library file with extension .a
OUTPUT		= $(LIB)/libftprintf.a
# specific library file with extension .a to be included as a dependency
LIBFT 		= $(LIB)/libft.a
## LIBRARIES	:= $(wildcard $(LIB)/*.a)

all: $(OUTPUT) clean

$(OUTPUT):$(OBJS)
	clear
	@$(ARS) $(OUTPUT) $(OBJS)
	@echo "## Build printf functions to libftprintf.a OK! ##"

clean:
	@$(RM) $(OBJS)
	@echo "## Files type *.o removal OK! ##"

fclean: clean
	@$(RM) $(OUTPUT)
	@echo "## File libftprintf.a removal OK! ##"

re: fclean all

.PHONY: all clean fclean re
