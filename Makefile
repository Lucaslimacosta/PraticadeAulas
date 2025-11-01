CC := gcc
CFLAGS := -std=c17 -Wall -Wextra -O0

SRCS := $(wildcard *.c)
BINS := $(patsubst %.c,bin/%,$(SRCS))

.PHONY: all clean list run

all: $(BINS)

bin/%: %.c | bin
	@echo "Compilando $< -> $@"
	$(CC) $(CFLAGS) $< -o $@

bin:
	@mkdir -p bin

clean:
	@echo "Removendo bin/"
	@rm -rf bin

# lista os binários gerados
list:
	@printf "%s\n" $(BINS)

# executa um binário: make run NAME=ExPratica1
run:
	@if [ -z "$(NAME)" ]; then \
		echo "Uso: make run NAME=<nome> (ex: NAME=ExPratica1)"; exit 1; \
	fi
	@./bin/$(NAME)
