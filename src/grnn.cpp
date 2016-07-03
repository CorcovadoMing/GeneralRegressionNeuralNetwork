#include <cmath>
#include <iostream>
#include "grnn.h"

const double activator(const std::vector<double> input, const std::vector<double> x, const double sigma) {
	double distance = 0;
	for(int i = 0; i < input.size(); i += 1) {
		distance += std::pow(input[i] - x[i], 2);
	}
	return std::exp(-distance / std::pow(sigma, 2));
}

const std::vector<double> grnn(const std::vector<double> input, const std::vector< std::vector<double> > train_x, const std::vector< std::vector<double> > train_y, const double sigma) {
	std::vector<double> result;
	for (int dim = 0; dim < train_y[0].size(); dim += 1) {
		double factor = 0, divide = 0;
		for (int i = 0; i < train_x.size(); i += 1) {
            double cache = activator(input, train_x[i], sigma);
			factor += train_y[i][dim] * cache;
			divide += cache;
		}
		result.push_back(factor/divide);
	}
	return result; 
}
