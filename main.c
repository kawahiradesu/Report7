#include <stdio.h>

void sortScores(int scores[], int sorted[], int size) {
    for (int i = 0; i < size; i++) {
        sorted[i] = scores[i];
    }

    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (sorted[j] > sorted[maxIndex]) {  // より大きい要素を探す
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            int temp = sorted[i];
            sorted[i] = sorted[maxIndex];
            sorted[maxIndex] = temp;
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    const int SIZE = 5;                         
    int scores[5] = {0, 60, 70, 100, 90}; 
    int sorted[SIZE];  

    sortScores(scores, sorted, SIZE);

    printf("scores = ");
    printArray(scores, SIZE);

    printf("results = ");
    printArray(sorted, SIZE);

    return 0;
}
