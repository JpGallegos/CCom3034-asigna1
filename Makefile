fracarray: bin/ src/fracArray.o src/frac.o src/fracArrayClient.o
	g++ -o bin/fracArray src/fracArray.o src/frac.o src/fracArrayClient.o
	@echo "Output file is located in bin/"

bin/:
	@echo "Creating bin/" 
	mkdir bin

src/frac.o: src/frac.cpp src/frac.h
	g++ -c src/frac.cpp -o src/frac.o

src/fracArray.o: src/fracArray.h src/fracArray.cpp
	g++ -c src/fracArray.cpp -o src/fracArray.o

src/fracArrayClient.o: src/fracArrayClient.cpp src/fracArray.h
	g++ -c src/fracArrayClient.cpp -o src/fracArrayClient.o

clean:
	rm src/*.o bin/*

config:
	@echo "Use run to test"
	alias run="bin/./fracArray"