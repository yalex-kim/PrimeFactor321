#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		if (number > 1)
		{
			if (number == 4) {
				if (number % 2 == 0) {
					factors.push_back(2);
					number /= 2;
				}
				if (number % 2 == 0) {
					factors.push_back(2);
					number /= 2;
				}
			}
			else {
				factors.push_back(number);
			}
		}
		

		return factors;
	}
};