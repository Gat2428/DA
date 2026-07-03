#include<stdio.h>
#include<string.h>
void naiveStringMatch(char text[], char pattern[])
{
 int n = strlen(text);
 int m = strlen(pattern);
 for(int i = 0; i<=n-m; i++)
 {
 int j = 0;
 while(j<m && text[i+j] == pattern[j])
 j++;
 if(j==m)
 printf("Pattern match found at index %d\n", i);
 }
}
int main()
{
 char text[20], pattern[10];
 printf("Enter the text: ");
 scanf("%s", text);
 printf("Enter the pattern: ");
 scanf("%s", pattern);
 naiveStringMatch(text, pattern);
 return 0;
}

//1b.c

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
