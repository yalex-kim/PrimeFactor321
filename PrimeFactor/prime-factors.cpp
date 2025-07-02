#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		
		for (int divisor = 2;  number > 1 ; divisor++) {
			while (number % divisor == 0) {
				factors.push_back(divisor);
				number /= divisor;
			}
		}

		return factors;
	}
};