// Program to find second largest in Array


#include <stdio.h>

int main(){
    int arr[10], i,big, sec;
    printf("Enter 10 elements of the array:\n");
    for(i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

   if(arr[0] > arr[1]) { // if no at index 0 is greater than no at index 1 
      big = arr[0];     // we assume no at index 0 is largest and at 1 is second largest
      sec = arr[1];
   } else {
      big = arr[1]; //no at 1 is largest and 0 is second largest
      sec  = arr[0];
   }
   // then we check from index 2:
   for(i = 2; i < 10; i++) {
      if( big < arr[i] ) {   // if the assumed largest is smaller than no at index i
         sec = big;           // no stored in big is assumed to be second largest then
         big = arr[i];        // no at index i is assumed to be largest
      } else if( sec < arr[i] ) {  // if no in sec is less than no at index i
         sec =  arr[i];             // second largest is assumed to be no at index i
      }
   }

   printf("Second Largest No is: %d \n",sec);   

   return 0;
}
