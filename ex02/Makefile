#*******************************#
#			INIT				#
#*******************************#

NAME = HI_THIS_IS_BRAIN

NAME_UP  = $(shell echo $(NAME) | tr  '[:lower:]' '[:upper:]')

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = \
	main.cpp

CPL = 0

#*******************************#
#			FOLDERS				#
#*******************************#

OBJ_DIR = objects
EXE_DIR = executables
DIRS = $(OBJ_DIR) $(EXE_DIR)
MKDIR = mkdir -p $(DIRS)

#*******************************#
#			COLORS				#
#*******************************#

C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_YELLOW = \033[1;33m
C_BLUE = \033[1;34m
C_MAGENTA = \033[1;35m
C_CYAN = \033[1;36m

C_RES = \033[0m

#*******************************#
#			MAKING OBJS			#
#*******************************#

OBJ = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

$(OBJ_DIR)/%.o : %.cpp
	@if [ $(CPL) -eq 0 ]; then \
		echo -n "$(C_YELLOW)[COMPILING $(NAME_UP) ... ⚙️  $(C_RES)"; \
		$(eval CPL = 1) \
	fi
	@$(CPP) $(CPPFLAGS) -c $< -o $@

#*******************************#
#			MAKING				#
#*******************************#

all : $(DIRS) $(NAME)

$(DIRS) :
	@echo -n "$(C_YELLOW)[CREATING DIRECTORIES ... 🗂  $(C_RES)"
	@$(MKDIR)
	@echo "$(C_GREEN)... DIRECTORIES CREATED!]$(C_RES)"

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(EXE_DIR)/$(NAME)
	@echo "$(C_GREEN)... ${NAME_UP} COMPILED!]$(C_RES)"

clean :
	@echo -n "$(C_MAGENTA)[REMOVING $(NAME_UP) OBJECTS ... 🧹$(C_RES)"
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "$(C_RED)... ${NAME_UP} OBJECTS REMOVED!]$(C_RES)"

fclean : clean
	@echo -n "$(C_MAGENTA)[REMOVING $(NAME_UP) EXECUTABLES ... 🧹$(C_RES)"
	@rm -f $(EXE_DIR)/$(NAME)
	@rm -rf $(EXE_DIR)
	@echo "$(C_RED)... ${NAME_UP} EXECUTABLES REMOVED!]$(C_RES)"

re : fclean all

run : re
	@echo "$(C_CYAN)[RUN ${NAME_UP} ... 🚀]$(C_RES)"
	@./$(EXE_DIR)/$(NAME)
	@echo "$(C_BLUE)[... ${NAME_UP} FINISHED!]$(C_RES)"

.PHONY : all clean fclean re run
