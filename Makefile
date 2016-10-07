main : PassGrid.o Path.o main.o
	g++ -g $^ -o $@

PassGrid.o : PassGrid.h
Path.o : Path.h
main.o : PassGrid.h Path.h

%.o : %.c
	g++ -g $< -o $@

clean:
	rm -f *.o
