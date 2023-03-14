#include <stdio.h>
#include <stdlib.h>

// Map function to apply the callback function to each element of the array.
void* map(void* arr, int length, size_t size, void* (*callback)(void*)) {
    void* mappedArr = malloc(length * size);
    for (int i = 0; i < length; i++) {
        void* element = arr + i * size;
        void* mappedElement = callback(element);
        // Copy the mapped element to the new array.
        memcpy(mappedArr + i * size, mappedElement, size);
        free(mappedElement); // free the temporary memory used for mappedElement
    }
    return mappedArr;
}


// Callback function to square an integer element.
void* square(void* elem) {
    int* num = (int*) elem;
    int* result = malloc(sizeof(int));
    *result = (*num) * (*num);
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* mappedArr = map(arr, 5, sizeof(int), &square);
    for (int i = 0; i < 5; i++) {
        printf("%d ", mappedArr[i]); // prints 1 4 9 16 25
    }
    free(mappedArr);
    return 0;
}