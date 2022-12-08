//applying binary search & delete
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main() {
int min = 0, max = 9, mid, del_item, i;
bool flag = true;
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
printf("Enter which element you want to delete: ");
scanf("%d", &del_item);
while(min <= max) {
mid = (min + max) / 2;
if(del_item == arr[mid]) {
printf("%d found at index %d\n", del_item, mid);
flag = false;
break;
}
else if(arr[mid] < del_item) {
min = mid + 1;
}
else {
max = mid - 1;
}
}
if(flag) {
printf("%d is not available in the data set\n", del_item);
}
else {
for(i = mid; i < 9; i++) {
arr[i] = arr[i+1];
}
printf("After delete: ");
for(i = 0; i < 9; i++) {
printf("%d ", arr[i]);
}
}
return 0;
}
