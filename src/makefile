include config.mk

$(TARGET): main.o fill_parts.o get_answer.o operand_chr.o
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -Wall -O2 -g -DCAP=$(MPG_CAP)

clean:
	rm -f *.o

.PHONY: clean
