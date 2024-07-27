NAME = megaphone
COMPILER := c++
FLAGS :=	-Wall -Werror -Wextra -std=c++98

SOURCE := megaphone.cpp
OBJECTS_FOLDER = ./bin/
OBJECTS = $(SOURCE:%.cpp=$(OBJECTS_FOLDER)%.o)

$(OBJECTS_FOLDER)%.o:%.cpp
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

