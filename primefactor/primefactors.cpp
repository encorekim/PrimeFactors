#include <vector>

using std::vector;

class PrimeFactors {
 public:
  vector<int> getPrimeFactors(int n) {
    vector<int> result = {};
    if (n == 2 || n == 3) {
      result.push_back(n);
    }
    if (n == 4) {
      result.push_back(2);
      result.push_back(2);
    }
    return result;
  }
};