#include <stdio.h>

int main() {
	int n,x,index = -1;
	printf("enter the no of elements in an array:");
	scanf("%d",&n);
    int arr[n];
     printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the number to find:");
    scanf("%d",&x);
    int arrLen = sizeof arr / sizeof arr[0]; 
    for (int i = 0; i < arrLen; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }
    
    if (index > -1) {
        printf("Index : %d\n", index);
    } else {
        printf("%d is not present in this array.\n", x);
    }
    
    return 0;
}