//Short and binary search
#include <stdio.h>
#include <stdbool.h>
int main() {
char arr[5] = {'z', 'k', 'l', 'a', 'g'};
int i, j, min, max, mid;
char temp, search_data;
bool flag = true;
for(i = 0; i < 5; i++) {
for(j = 0; j < (4 - i); j++) {
if(arr[j] > arr[j+1]) {
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
printf("Enter which data you want to search: ");
fflush(stdin);
scanf("%c", &search_data);
min = 0;
max = 4;
while (min <= max) {
mid = (min + max) / 2;
if(arr[mid] == search_data) {
printf("%c found at index %d\n", search_data, mid);
flag = false;
break;
}
else if(search_data < arr[mid]) {
max = mid - 1;
}
else {
min = mid + 1;
}
}
if(flag) {
printf("Data is not in the array\n");
}
return 0;
}
