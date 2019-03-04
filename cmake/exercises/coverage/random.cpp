#include <iostream>
#include <random>
#include <cstdlib>
#include <unistd.h>

int main(int argc, char** argv)
{
	std::size_t count = 1;
	double mu = 0;
	double sigma = 1.0;

	int c;
	while ((c = getopt(argc, argv, "m:s:n:")) > 0) {
		switch (c) {
		case 'm':
			mu = std::atof(optarg);
			break;
		case 's':
			sigma = std::atof(optarg);
			break;
		case 'n':
			count = std::atoi(optarg);;
			break;
		default:
			std::cerr << "invalid option " << static_cast<char>(c) << '\n';
			break;
		}
	}

	if (sigma <= 0) {
		std::cerr << "bad value\n";
		std::exit(1);
	}

	std::random_device rd;
	std::mt19937 gen(rd());
	std::normal_distribution<> dist(mu, sigma);

	for (std::size_t i = 0; i < count; ++i) {
		std::cout << dist(gen) << '\n';
	}
}
