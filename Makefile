all: stack
	./stack

stack: stack.c
	gcc stack.c -o stack

run: stack
	./stack

clean:
	rm -f stack a.out 