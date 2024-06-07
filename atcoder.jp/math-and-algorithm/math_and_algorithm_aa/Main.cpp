/*
    exLast3
    23B30575
    Torimitsu Shunsuke
*/

#include <stdio.h>

void swap(int *a, int *b);
void heapify(int *array, int n, int i);
void heapSort(int *array, int n);

int main(void) {
    int num, length[200009];
    int i;

    // input num and length
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &length[i]);
    }

    // sort length
    heapSort(length, num);

    // output sorted length
    for (i = 0; i < num; i++) {
        printf("%d ", length[i]);
    }

    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// heapify subtree whose root is i
void heapify(int *array, int size, int i) {
    // root
    int largest = i;
    // left and right child
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // find largest element
    if (left < size && array[left] > array[largest]) {
        largest = left;
    }
    if (right < size && array[right] > array[largest]) {
        largest = right;
    }
    if (largest != i) {
        // swap largest element with root
        swap(&array[i], &array[largest]);
        // heapify subtree recursively
        heapify(array, size, largest);
    }
}

void heapSort(int *array, int size) {
    int i;

    // build heap
    for (i = size / 2 - 1; i >= 0; i--) {
        heapify(array, size, i);
    }

    // extract element from heap
    for (i = size - 1; i >= 0; i--) {
        swap(&array[0], &array[i]);
        heapify(array, i, 0);
    }
}
