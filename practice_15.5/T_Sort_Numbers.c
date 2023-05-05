#include<stdio.h>
void sort(){
     int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int arr[] = {a, b, c};
    int temp;
    for (int i = 0; i < 2; i++) {
        for (int j = i+1; j < 3; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);
  
}
int main(){
    sort();
    return 0;
}