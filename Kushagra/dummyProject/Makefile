CC = gcc
INC = -I ./include
CCFLAGS = -Wall -Wextra -ggdb -std=c99
BUILD_DIR = ./build
SRCS = $(wildcard *.c)
SRCS += $(wildcard $(INC)/*.c)
OBJ = $(SRCS:%.c=$(BUILD_DIR)/%.o)
DEPS = $(OBJ:%.o=%.d)

# Extract the name of the containing folder
FOLDER_NAME := $(notdir $(patsubst %/,%,$(dir $(realpath $(firstword $(MAKEFILE_LIST))))))

# Set BIN_NAME to the folder name followed by .out
BIN_NAME = $(FOLDER_NAME).out

$(BIN_NAME): $(BUILD_DIR)/$(BIN_NAME)

$(BUILD_DIR)/$(BIN_NAME): $(OBJ)
	@mkdir -p $(@D)
	@$(CC) $(CCFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)

-include $(DEPS)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -static $(CCFLAGS) -MMD -c $< -o $@ $(INC)

.PHONY: all clean tests

all: $(BIN_NAME)

clean:
	@rm -rf $(BUILD_DIR)

tests: $(BIN_NAME)
	@$(BUILD_DIR)/$(BIN_NAME)
