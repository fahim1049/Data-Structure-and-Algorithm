//comparing linear and binary serch
#include <stdio.h>
#include <stdbool.h>
int main() {
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int max, min, mid, count_binary = 0, count_linear = 0;
int search_item;
bool flag = true;
printf("Enter which item you want to search(1-10): ");
scanf("%d", &search_item);
printf("\n");
//for bianary
min = 0;
max = 9;
while(min <= max) {
count_binary++;
mid = (min + max) / 2;
if(arr[mid] == search_item) {
printf("%d found after looping %d times\n", search_item,
count_binary);
flag = false;
break;
}
else if(search_item < arr[mid]) {
max = mid - 1;
}
else {
min = mid + 1;
}
}
//for linear search
for(int i = 0; i < 10; i++) {
count_linear++;
if(arr[i] == search_item) {
printf("%d found atfer looping %d time(s)\n", search_item,
count_linear);
break;
}
}
if(flag) {
printf("Data is not available\n");
}
else {
printf("\n\n====>\t\n\n");
}
return 0;
}
