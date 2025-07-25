all:
	g++ -fPIC -Iinc -c src/encoder.cpp -o obj/encoder.o
	g++ -fPIC -Iinc -c src/decoder.cpp -o obj/decoder.o
	g++ -shared -o lib/libcaesar.so obj/encoder.o obj/decoder.o
	g++ -Iinc -c src/main.cpp -o obj/main.o
	g++ -o bin/caesar_app obj/main.o -Llib -lcaesar

clean:
	rm -f obj/*.o bin/* lib/*.so
