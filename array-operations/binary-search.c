/*
Implementataion Of Binary Search without using Function/Recursion
*/


#include <stdio.h>

int main() {
    int c, first, last, middle, n, search, arr[20],a,j;
    printf("Enter no of Elments: ");
    scanf("%d",&n);
    printf("Enter %d elments:\n",n);
    for(c=0;c<n;c++)
	scanf("%d",&arr[c]);
	printf("Enter value to find: ");
	scanf("%d",&search);
	 for (c = 0; c < n; c++){ 			// sorting the array in asending order for binary search to work
	     for (j = c + 1; j < n; j++){
	         if (arr[c] > arr[j]){
	             a =  arr[c];
	             arr[c] = arr[j];
	             arr[j] = a;
	             }
	     }
	 }
	first=0;
	last=n-1;
	middle= (first+last)/2; // finding the middle index
	while(first<=last){
	    if(arr[middle]<search)
	    first=middle+1; //if middle element is smaller than searched element first index is made middle +1 so right portion from middle is checked next
	    else if(arr[middle]==search){ // if element to be searched is middle element 
	        printf("%d found \n", search);
	        break;
	    }
	    else
	    last=middle-1; // if above two conditions fail here last element is made middle-1 so that left portion from middle is checked next
	    
	    middle=(first+last)/2; // here middle index is calculated again for next itration
	    }
	    if(first>last) // if entered element dosent match any element.
	    printf("%d is not present in the array\n", search);
	    return 0;
} 
