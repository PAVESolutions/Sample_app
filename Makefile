.PHONY: all clean


all: build

build:
	mkdir -p build
	cd build && cmake .. && make

clean:
	rm -rf build