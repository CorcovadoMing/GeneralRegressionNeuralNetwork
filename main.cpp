#include "grnn.h"
#include <vector>

int main() {
	std::vector<double> input {0}, train_y {0};
	std::vector< std::vector<double> > train_x { {0} };
	double grnn_output = grnn(input, train_x, train_y, 0);
	return 0;
}
