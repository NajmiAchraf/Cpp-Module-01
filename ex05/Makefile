#*******************************#
#			INIT				#
#*******************************#

NAME = Harl_2.0

NAME_UP = $(shell echo $(NAME) | tr  '[:lower:]' '[:upper:]')

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = \
	main.cpp	\
	Harl.cpp	\

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
#			TEXTS				#
#*******************************#

T_COMP_S = echo -n "$(C_YELLOW)➔ COMPILING $(NAME_UP) ... ⚙️ $(C_RES)"
T_COMP_E = echo "$(C_GREEN)... ${NAME_UP} COMPILED ✔$(C_RES)"

T_DIR_S = echo -n "$(C_YELLOW)➔ CREATING ${NAME_UP} DIRECTORIES ... 📂 $(C_RES)"
T_DIR_E = echo "$(C_GREEN)... ${NAME_UP} DIRECTORIES CREATED ✔$(C_RES)"

T_O_RMV_S = echo -n "$(C_MAGENTA)➔ REMOVING $(NAME_UP) OBJECTS ... 🗑️ $(C_RES)"
T_O_RMV_E = echo "$(C_RED)... ${NAME_UP} OBJECTS REMOVED ✔$(C_RES)"

T_E_RMV_S = echo -n "$(C_MAGENTA)➔ REMOVING $(NAME_UP) EXECUTABLES ... 🗑️ $(C_RES)"
T_E_RMV_E = echo "$(C_RED)... ${NAME_UP} EXECUTABLES REMOVED ✔$(C_RES)"

T_RUN_S = echo "$(C_CYAN)➔ RUN ${NAME_UP} ... 🚀$(C_RES)"
T_RUN_E = echo "$(C_BLUE)... ${NAME_UP} FINISHED ✔$(C_RES)"

#*******************************#
#			MAKING OBJS			#
#*******************************#

OBJ = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

$(OBJ_DIR)/%.o : %.cpp
	@if [ $(CPL) -eq 0 ]; then \
		$(T_COMP_S); \
		$(eval CPL = 1) \
	fi
	@$(CPP) $(CPPFLAGS) -c $< -o $@

#*******************************#
#			MAKING				#
#*******************************#

all : $(DIRS) $(NAME)

$(DIRS) :
	@$(T_DIR_S)
	@$(MKDIR)
	@$(T_DIR_E)

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(EXE_DIR)/$(NAME)
	@$(T_COMP_E)

clean :
	@$(T_O_RMV_S)
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@$(T_O_RMV_E)

fclean : clean
	@$(T_E_RMV_S)
	@rm -f $(EXE_DIR)/$(NAME)
	@rm -rf $(EXE_DIR)
	@$(T_E_RMV_E)

re : fclean all

run : re
	@$(T_RUN_S)
	@./$(EXE_DIR)/$(NAME)
	@$(T_RUN_E)

.PHONY : all clean fclean re run