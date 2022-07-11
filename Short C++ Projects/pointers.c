#include<stdio.h>

int main(){
    int x=3, y=1, *px=&x, *py=&y, i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *arrp=arr;
    printf("x is %p y is %p arr[0] is %p px is %p arr is %p \n", &x, &y, &arr[0], &*px, arr);
    for (i=0; i<10; i++) {
        printf("%d:%p\n", *arrp, arrp);
        arrp++;
    }
    return 0;
}
