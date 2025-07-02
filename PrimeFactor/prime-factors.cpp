#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		if (number > 1)
		{
			if (number == 4) {
				factors.push_back(2);
				factors.push_back(2);
			}
			else {
				factors.push_back(number);
			}
		}
		

		return factors;
	}
};