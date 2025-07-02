#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		if (number >  1) {
			factors.push_back(number);
		}
		

		return factors;
	}
};