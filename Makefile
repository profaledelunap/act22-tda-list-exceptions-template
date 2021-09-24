all: clean test1 test2 test3 test4 test5

test1:
	g++ -std=c++11 test1.cpp -o test1
	./test1

test2:
	g++ -std=c++11 test2.cpp -o test2
	./test2

test3:
	g++ -std=c++11 test3.cpp -o test3
	./test3

test4:
	g++ -std=c++11 test4.cpp -o test4
	./test4

test5:
	g++ -std=c++11 test5.cpp -o test5
	./test5

clean:
ifneq ("$(wildcard ./test1)","")
	rm test1
endif
ifneq ("$(wildcard ./test2)","")
	rm test2
endif
ifneq ("$(wildcard ./test3)","")
	rm test3
endif
ifneq ("$(wildcard ./test4)","")
	rm test4
endif
ifneq ("$(wildcard ./test5)","")
	rm test5
endif

.PHONY: main test1 test2 test3 test4 test5