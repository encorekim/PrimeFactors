#include <vector>

using std::vector;

class PrimeFactors {
 public:
  vector<int> getPrimeFactors(int n) {
    vector<int> result = {};
    if (n == 2 || n == 3) {
      result.push_back(n);
    }
    return result;
  }
};