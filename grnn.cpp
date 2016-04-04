#include <cmath>
#include "grnn.h"

const double activator(const std::vector<double> input, const std::vector<double> x, const double sigma) {
	double distance = 0;
	for(int i = 0; i < input.size(); i += 1) {
		distance += std::pow(input[i] - x[i], 2);
	}
	return std::exp(-distance/sigma);
}

const double grnn(const std::vector<double> input, const std::vector< std::vector<double> > train_x, const std::vector<double> train_y, const double sigma) {
	double factor = 0, divide = 0;
	for (int i = 0; i < train_x.size(); i += 1) {
		factor += train_y[i]*activator(input, train_x[i], sigma);
		divide += activator(input, train_x[i], sigma);
	}
	return factor/divide; 
}
