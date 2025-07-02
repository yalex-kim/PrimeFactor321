#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		if (number == 2) {
			factors.push_back(2);
		}
		return factors;
	}
};