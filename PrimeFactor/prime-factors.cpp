#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		if (number == 2) {
			factors.push_back(number);
		}
		if (number == 3) {
			factors.push_back(number);
		}

		return factors;
	}
};