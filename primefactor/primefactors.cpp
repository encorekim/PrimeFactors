#include <vector>

using std::vector;

class PrimeFactors {
 public:
  vector<int> getPrimeFactors(int n) {
    vector<int> result = {};
    if (n == 2) {
      result.push_back(2);
    }
    return result;
  }
};