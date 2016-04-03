#include <cmath>
#include "grnn.h"

const double activator(const double input, const double xi, const double sigma) {
	double output = 0;
	double distance = std::pow(input-xi, 2);
	return std::exp(-distance/sigma);
}

const double grnn(const double input, const std::vector<double> train_x, const std::vector<double> train_y, const double sigma) {
	double output = 0;

	return output;
}
