all: test

objects = object_files/*.o
sources = source_files/*.cpp
headers = ../color.h
targets = test

$(objects) : $(sources) $(headers)
	g++ -c source_files/test.cpp -o object_files/test.o

test: $(objects)
	g++ $(objects) -o test

clean:
	rm -rf $(objects) $(targets)
