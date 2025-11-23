#include <iostream>
#include <vector>
#include <cmath>

int main() {
	long unsigned max = 4000000000;
	long unsigned tries;
	long unsigned count = 2;

	//This will be the list of prime numbers obtained.
	//They will be used to find divisors.

	std::vector<long unsigned> primeList{ 2 };

	std::cout << "insert a max for the scan of prime numbers \n(cannot go over 4000000000)\n";
	while (true) {
		std::cin >> tries;

		if (!std::cin) {
			std::cout << "Invalid input.\n";
			return 1;
		}
		if (tries > max) {
			std::cout << " Nope, try lower than that (I said the max was 4000000000) \n";
			continue;
		}
		if (tries < 1) {
			std::cout << " Neither negatives or zero are allowed buddy\n";
			continue;
		}
		break;
	}
	std::cout << "These are the prime numbers up to " << tries << "\n";

	while (count <= tries) {
		bool isPrime = true;
		long unsigned searchRange = static_cast<long unsigned>(sqrt(count));

		for (unsigned long p : primeList) {
			if (p > searchRange) {
				break;
			}
			if (count % p == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			std::cout << count << "\n";
			primeList.push_back(count);
		}
		count++;
	}

	std::cout << "Those were all the prime numbers from 1 to " << tries;

	std::cout << "\n\nPress ENTER to exit...";
	std::cin.ignore();
	std::cin.get();

	return 0;
	return 0;
}
