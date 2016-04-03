#include <cmath>
#include "grnn.h"

const double activator(const double input, const double xi, const double sigma) {
	double distance = std::pow(input-xi, 2);
	return std::exp(-distance/sigma);
}

const double grnn(const double input, const std::vector<double> train_x, const std::vector<double> train_y, const double sigma) {
	double factor = 0, divide = 0;
	for (int i = 0; i < train_x.size(); i += 1) {
		factor += train_y[i]*activator(input, train_x[i], sigma);
		divide += activator(input, train_x[i], sigma);
	}
	return factor/divide; 
}
