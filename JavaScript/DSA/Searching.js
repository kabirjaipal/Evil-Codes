/*
Linear Search: Linear search is a simple searching algorithm that searches for an element in an array by iterating through the array, checking each element until it finds the target element.
*/

function linearSearch(arr, target) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i;
    }
  }
  return -1;
}

/*
Binary Search: Binary search is a fast searching algorithm that searches for an element in a sorted array by repeatedly dividing the search interval in half. If the target element is found, then its index is returned, otherwise -1 is returned.
*/

function binarySearch(arr, target) {
  let left = 0;
  let right = arr.length - 1;
  while (left <= right) {
    let mid = Math.floor((left + right) / 2);
    if (arr[mid] === target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

/*
Interpolation Search: Interpolation search is an algorithm for searching for a given key in an ordered list that uses interpolation to narrow the search range. It is an improvement over binary search for datasets where values are uniformly distributed.
*/

function interpolationSearch(arr, target) {
  let left = 0;
  let right = arr.length - 1;
  while (left <= right && target >= arr[left] && target <= arr[right]) {
    let pos = Math.floor(
      left + ((target - arr[left]) / (arr[right] - arr[left])) * (right - left)
    );
    if (arr[pos] === target) {
      return pos;
    } else if (arr[pos] < target) {
      left = pos + 1;
    } else {
      right = pos - 1;
    }
  }
  return -1;
}
