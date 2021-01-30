//Finding the Frequency Of Elements in An Array


#include <stdio.h>

int main(){
    int arr[10], freq[10], n, i, j, count; //freq is temp array to store frequency of elements
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        freq[i] = -1; // we can intilize each elment with any negative no. 
                        // negative no is used because frequency can be zero or any positive no
    }
    for(i=0; i<n; i++){
        count = 1;
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){ // checking if elment at i occours multiple times
                count++;        // keeping count of the times no occours
                freq[j] = 0; // not to count frequency of same element again. Checks repetation.
                            // if the frequency of element is already counted here it is ignored by assgining zero to it here
                            // otherwise from this point its frequency would be counted again
            }
        }
        if(freq[i] != 0){ // If frequency of current element is not counted
            freq[i] = count; // for each elment storing frequency in frequency array. without repeating the elements
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++){
        if(freq[i] != 0){
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}
