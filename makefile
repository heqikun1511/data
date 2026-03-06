
CC := gcc
CFLAGS := -std=c11 -ggdb3 -O0 -Wall -Wextra -Werror
LDLIBS := -lcs50

%: %.c
	$(CC) $(CFLAGS) $< $(LDLIBS) -o $@