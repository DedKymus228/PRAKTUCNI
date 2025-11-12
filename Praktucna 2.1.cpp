#include <vector>
#include <utility>

std::pair<int, int> fLOccurrence(const std::vector<std::vector<int>>& A, int R) {
    for (int m = A.size() - 1; m >= 0; --m) {
        for (int n = A[m].size() - 1; n >= 0; --n) {
            if (A[m][n] == R) {
                    return {m, n};
                }
            }
        }
        return {-1, -1};
    }
