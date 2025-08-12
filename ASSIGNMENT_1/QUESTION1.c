#include <stdio.h>
#define SIZE 100

int arr[SIZE], n = 0;

void create() {
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void display() {
    printf("Array elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insert() {
    int pos, val;
    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &val);
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
}

void delete() {
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void linear_search() {
    int key, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n----MENU----\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: delete(); break;
            case 5: linear_search(); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
