NAME = nakamabook
COMPILER := c++
FLAGS :=	-Wall -Werror -Wextra -std=c++98

SOURCE_FOLDER := src/
MAIN := main.cpp
SOURCE := $(addprefix $(SOURCE_FOLDER), $(MAIN))

OBJECTS_FOLDER = bin/
OBJECTS = $(SOURCE:$(SOURCE_FOLDER)%.cpp=$(OBJECTS_FOLDER)%.o)

$(OBJECTS_FOLDER)%.o:$(SOURCE_FOLDER)%.cpp
	@mkdir -p $(OBJECTS_FOLDER)
	@$(COMPILER) $(FLAGS) -o $@ -c $< && echo "Compilando: $(notdir $<)"


all: $(NAME)
	@echo "$(NAME) está pronto!"

teste: $(OBJECTS)
	@echo "Entrou aqui $(OBJECTS)"

$(NAME): $(OBJECTS)
	@$(COMPILER) $(FLAGS) -o $(NAME) $(OBJECTS) && echo "Compilando $(NAME)"

clean:
	@rm -rf $(OBJECTS_FOLDER)

fclean: clean
	@rm -f $(NAME)

re: fclean all

