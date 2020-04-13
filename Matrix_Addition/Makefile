CC = gcc
NAME = Matrix_Addition
CFLAGS = -Iinc
INCD = inc
OBJD = obj
SRCD = src

DEPS = $(wildcard $(INCD)/*.h)
FILES = $(wildcard $(SRCD)/*.c)
OBJO = $(FILES:$(SRCD)%.c=$(OBJD)%.o)

COMPILE = $(CC) -o $(NAME) $^ $(CFLAGS)
COMPILE_OBJ = $(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJD) install

install: $(OBJO)
	@$(COMPILE)

reinstall: uninstall all

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(OBJD)

$(OBJD)/%.o: $(SRCD)/%.c $(DEPS)
	@$(COMPILE_OBJ)

$(OBJD):
	@mkdir -p $@
