#include <vector>

using std::vector;

class PrimeFactors {
 public:
  vector<int> getPrimeFactors(int n) {
    vector<int> result = {};
    while ((n % 2) == 0) {
      result.push_back(2);
      n = n / 2;
    }
    while (n % 3 == 0) {
      result.push_back(3);
      n = n / 3;
    }
    return result;
  }
};