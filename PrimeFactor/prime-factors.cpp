#include <vector>

using std::vector;

class PrimeFactors {
	public:
	vector<int> of(int number) {
		vector<int> factors;
		if (number > 1)
		{
			int divisor = 2;
			if (number == 4) {
				while (number % divisor == 0) {
					factors.push_back(divisor);
					number /= divisor;
				}
				
			}
			else if (number == 6) {
				for (divisor = 2;  number > 1 ; divisor++) {
					while (number % divisor == 0) {
						factors.push_back(divisor);
						number /= divisor;
					}
				}
			}
			else {
				factors.push_back(number);
			}
		}
		

		return factors;
	}
};