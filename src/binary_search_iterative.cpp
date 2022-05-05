#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    // search space is nums[low…high]
    int low = 0;
    int high = static_cast<int>(arr.size() - 1);

    // loop till the search space is exhausted
    while (low <= high) {
      // find the mid-value in the search space and
      // compares it with the target

      int mid = (low + high)/2;    // overflow can happen
      // int mid = low + (high - low)/2;
      // int mid = high - (high - low)/2;

      // target value is found
      if (search_elem == arr[mid]) {
        return mid;
      }

      // if the target is less than the middle element, discard all elements
      // in the right search space, including the middle element
      else if (search_elem < arr[mid]) {
        high = mid - 1;
      }

      // if the target is more than the middle element, discard all elements
      // in the left search space, including the middle element
      else {
        low = mid + 1;
      }
    }

    // target doesn't exist in the array
    return std::nullopt;

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

  }

}  // namespace assignment