//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с границами поиска от начала массива до конца
    return search(arr, search_elem, 0, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> BinarySearchRecursive::search(const std::vector<int>& arr, int search_elem, int start, int stop) const {
    int low = start;
    int high = stop;

    int mid = start + (stop - start) / 2;

    // If found at mid, then return it
    if (arr[mid] == search_elem) {
      return mid;
    }

    // Search the left half
    else if (arr[mid] > search_elem) {
      return search(arr, search_elem, start, mid - 1);
    }
    else {
      // Search the right half
      return search(arr, search_elem, mid + 1, stop);
    }
    return std::nullopt;
  }

}  // namespace assignment
