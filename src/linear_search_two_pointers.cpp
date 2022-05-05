#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    for (int i = 0; i < static_cast<int>(arr.size()); i += 1) {
      for (int j = static_cast<int>(arr.size()); j > 0; j -= 1) {
        if (arr[i] == search_elem)  {
          return i;
        } else if (arr[j] == search_elem){
          return j;
        }
      }
    }
    return std::nullopt;
  }

}  // namespace assignment