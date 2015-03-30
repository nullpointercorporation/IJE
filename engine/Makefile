NAME = ijengine.a

SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj
LIB_DIR = lib
TST_DIR = test

CC = g++
AR = ar

ARFLAGS = rcs
CFLAGS = -W -Wall -pedantic -ansi -std=c++11 -MMD
INCLUDES = -Iinclude

TARGET = $(LIB_DIR)/$(NAME)

TEST = $(TST_DIR)/test
TST_MAIN = $(TST_DIR)/main.cpp

SRC = ${wildcard $(SRC_DIR)/*.cpp}
OBJ = ${addprefix $(OBJ_DIR)/, ${notdir ${SRC:.cpp=.o}}} 

.PHONY: clean depend

all: 
	@mkdir -p $(OBJ_DIR) $(LIB_DIR)
	@make $(TARGET)
	@make $(TEST)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

$(TARGET): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

$(TEST): $(TST_MAIN) $(TARGET)
	$(CC) $(CFLAGS) $(INCLUDES) $(TST_MAIN) $(TARGET) -o $@ 

clean:
	@find . -name *.o -exec rm {} \;
	@find . -name *.d -exec rm {} \;
	@rm -rf *~ *.o prog out.txt

dist-clean: clean
	@find . -name *.a -exec rm {} \;
	@rm test/test

-include $(OBJ:.o=.d)