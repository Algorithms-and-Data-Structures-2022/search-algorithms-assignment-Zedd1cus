#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {
    for (int i = 0; i < static_cast<int>(arr.size()); i += 1) {
      for (int j = static_cast<int>(arr.size()); j > 0; j -= 1) {
        std::pair <int, int> some_pair;
        some_pair = std::make_pair(i, j);
        if ((arr[i] + arr[j]) == sum) {
          return some_pair;
        }
      }
    }
    // Tips: для создания пары (pair) используйте функцию std::make_pair

    return std::nullopt;
  }

}  // namespace assignment