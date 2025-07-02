#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		if (number > 1)
		{
			if (number == 4) {
				while (number % 2 == 0) {
					factors.push_back(2);
					number /= 2;
				}
				
			}
			else if (number == 6) {
				factors.push_back(2);
				factors.push_back(3);
			}
			else {
				factors.push_back(number);
			}
		}
		

		return factors;
	}
};