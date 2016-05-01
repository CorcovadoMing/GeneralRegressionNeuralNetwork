#include "src/grnn.h"
#include <vector>
#include <iostream>

int main() {

	std::vector< std::vector<double> > train_y { {-10}, {-10}, {-10}, {-10}, {-10}, {-10}, {-10}, {-10}, {-10}, {0}, {0}, {10}, {10}, {10} };
	std::vector< std::vector<double> > train_x { {3, 5}, {3, 11}, {8, 6}, {0, 34}, {13, 3}, {2, 17}, {23, 2}, {37, 1}, {1, 40}, {21, 30}, {30, 24}, {24, 64}, {43, 46}, {31, 51} };

	std::vector< std::vector<double> > input { {25, 21} };
	
	for (int i = 0; i < input.size(); i += 1) {
		std::cout << grnn(input[i], train_x, train_y, 20)[0] << std::endl;
	}

	return 0;
}
