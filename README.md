# raylib-test

This is a test to check if Raylib works.

# Compiling

There are two different makefiles:

- `Makefile` for Linux
- `Makefile.win` for Windows

The process is as simple as replacing RAYLIB_SRC_PATH with your own one and then running `make` on Linux or `mingw32-make` on Windows.

## Editing Makefile and Makefile.win

I'm only going to explain the structure in `Makefile` as it's very similar to the one in `Makefile.win`.

The file contents are as following:

```
# Library stuff
RAYLIB_SRC_PATH := ~/raylib/src# REPLACE WITH YOUR RAYLIB PATH
LDFLAGS 		:= -L$(RAYLIB_SRC_PATH) -lm -lraylib -pthread #-lopengl32 -lgdi32 -lwinmm -mwindows

# ooga booga variables
TARGET_NAME	:= raylib_test
INCLUDE 	:= include
SOURCE		:= source
OUT			:= out

# Source files
CXX_SRC_FILES	:= $(wildcard $(addsuffix /*.cpp ,$(SOURCE)))
CC_SRC_FILES	:= $(wildcard $(addsuffix /*.c ,$(SOURCE)))

all:
	$(CXX) $(CC_SRC_FILES) $(CXX_SRC_FILES) -o $(OUT)/$(TARGET_NAME) -I$(INCLUDE) $(LDFLAGS)
```

Where:

- `RAYLIB_SRC_PATH` is the path to Raylib's source code
- `TARGET_NAME` is the name of the output file
- `INCLUDE` is your include path
- `SOURCE` is the source code path
- `OUT` is your out path, where you'll find your compiled executable