TARGET = output 

$(TARGET): main.o lib.a
	gcc $^ -o $@

lib.a: string.o
	ar rcs $@ $^

main.o: main.c
	gcc -c $< -o $@

string.o: string.c string.h
	gcc -c -o $@ $<

clean:
	rm -f *.o $(TARGET)
