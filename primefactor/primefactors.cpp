#include <vector>

using std::vector;

class PrimeFactors {
 public:
  vector<int> getPrimeFactors(int n) {
    vector<int> result = {};
    for (int devisor = 2; devisor <= n; devisor++) {
      while ((n % devisor) == 0) {
        result.push_back(devisor);
        n /= devisor;
      }
    }

    return result;
  }
};