#include <stdio.h>

int main() {
    int x, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &x);

    int arr[x];
    int visited[x];

    printf("Enter %d integers: ", x);
    for (i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    for (i = 0; i < x; i++) {
        if (visited[i] == 1) {
            continue;
        }

        count = 1;
        
        for (j = i + 1; j < x; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}