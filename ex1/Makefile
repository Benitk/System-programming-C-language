all: mymaths mymathd mains maind
mains: main.o mymaths
	gcc -Wall -g -o $@ $< libmyMath.a
maind: main.o mymathd
	gcc -Wall -g -o $@ $< ./libmyMath.so
mymaths: libmyMath.a
mymathd: libmyMath.so 
libmyMath.so: power.o basicMath.o
	gcc -shared -o $@ $^
libmyMath.a: power.o basicMath.o
	ar -rcs $@ $^
power.o: power.c myMath.h
	gcc -Wall -g -fPIC -c $<
basicMath.o: basicMath.c myMath.h
	gcc -Wall -g -c $<
main.o: main.c myMath.h
	gcc -Wall -g -c $<

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
