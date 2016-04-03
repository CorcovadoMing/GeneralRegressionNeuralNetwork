all:
	@g++ -std=c++11 -O3 *.cpp -o grnn

clean:
	@rm grnn
