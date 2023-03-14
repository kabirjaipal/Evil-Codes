#include <iostream>
#include <algorithm>

using namespace std;

class Sort
{
public:
    static void bubble_sort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    static void selection_sort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int min_index = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min_index])
                {
                    min_index = j;
                }
            }
            swap(arr[i], arr[min_index]);
        }
    }

    static void insertion_sort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int j = i - 1;
            int key = arr[i];
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    static void quick_sort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);
            quick_sort(arr, low, pi - 1);
            quick_sort(arr, pi + 1, high);
        }
    }

    static int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    static void merge_sort(int arr[], int l, int r)
    {
        if (l >= r)
        {
            return;
        }
        int mid = l + (r - l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }

    static void merge(int arr[], int l, int mid, int r)
    {
        int n1 = mid - l + 1;
        int n2 = r - mid;
        int L[n1], R[n2];
        for (int i = 0; i < n1; i++)
        {
            L[i] = arr[l + i];
        }
        for (int j = 0; j < n2; j++)
        {
            R[j] = arr[mid + 1 + j];
        }
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k++] = L[i++];
            }
            else
            {
                arr[k++] = R[j++];
            }
        }
        while (i < n1)
        {
            arr[k++] = L[i++];
        }
        while (j < n2)
        {
            arr[k++] = R[j++];
        }
    }
};

int main()
{
    int arr[] = {5, 2, 7, 3, 9, 4, 6, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort::bubble_sort(arr, n);
    cout << "Bubble sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort::selection_sort(arr, n);
    cout << "Selection sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort::insertion_sort(arr, n);
    cout << "Insertion sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort::quick_sort(arr, 0, n - 1);
    cout << "Quick sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort::merge_sort(arr, 0, n - 1);
    cout << "Merge sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}