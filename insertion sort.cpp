#include<stdio.h>
void print_array(int a[], int n){
for(int i = 0;i<n;i++){
printf("%d\t", a[i]);
}
}
void insertion_sort(int a[], int l){
int j,key;
for(int i = 1;i<=l; i++){
key = a[i];
j = i - 1;
while(j >= 0 && a[j] > key){
a[j+1] = a[j];
j--;
}
a[j+1] = key;
}
}
int main(){
int n,ind;
printf("Enter Array Size : ");
scanf("%d",&n);
int arr[n];
printf("Enter Array Elements : ");
for(int i = 0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("\nArray Before Sorting : \n");
print_array(arr,n);
printf("\nSorted Array : \n");
insertion_sort(arr,n-1);
print_array(arr,n);
}

