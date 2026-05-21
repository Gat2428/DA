#include <stdio.h>
int iterativeBinarySearch(int arr[], int n, int target) {
 int left = 0, right = n - 1;
 
 while (left <= right) {
 int mid = left + (right - left) / 2;

 if (arr[mid] == target) {
 return mid; 
 }
 
 if (arr[mid] > target) {
 right = mid - 1;
 }
 
 else {
 left = mid + 1;
 }
 }
 
 return -1;
}
int main() {
 int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
 int n = sizeof(arr) / sizeof(arr[0]);
 int target = 7;
 int result = iterativeBinarySearch(arr, n, target);
 if (result != -1)
 {
 printf("Target %d found at index %d\n", target, result);
 } else {
 printf("Target %d not found in the array\n", target);
 }
 return 0;
} 
