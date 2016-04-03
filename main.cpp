#include "grnn.h"
#include <vector>

int main() {
	std::vector<double> train_x, train_y;
	double grnn_output = grnn(0, train_x, train_y, 0);
	return 0;
}
