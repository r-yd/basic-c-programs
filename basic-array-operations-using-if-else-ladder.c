// Q:6.

#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 10  

int main(){
    int choice, arr[MAX_LEN], i, n, j, a, ins, ind, flag;
    char sure;
    printf("Enter number of elements of array(<=10): ");                                         
    scanf("%d", &n);
	printf("Input %d values \n", n);                                               
    for(i=0; i<n; i++){                                                                              
        scanf("%d", &arr[i]);                                                                                                                        
    }
    printf("\n\n");              
    do{
    printf("------------------------------------------------------------------------------\n\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Search\n");
    printf("5. Sort\n");
    printf("6. Exit\n");
    printf("\n\n\n");
    printf("Enter Your Choice ... ");
    scanf("%d",&choice);
    printf("\n------------------------------------------------------------------------------\n");
    if(choice<1 || choice>6){
        printf("Invalid Choice. Press any key to return to the menu ... \n");
        scanf(" ");
        getchar();
   }
   else if(choice==1){
       // INSERT 
       if(n==MAX_LEN){
            printf("Sorry! Array is full. Press any key to return to the menu ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
       }
       printf("Enter no to insert and index: ");
       scanf("%d%d",&ins,&ind);
       if(ind>=MAX_LEN || ind<-1){
            printf("Index out of Bound. Press any key to return to the menu ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
       }
       else if(ind>=0 && ind<MAX_LEN){
            arr[ind]=ins;
            printf("Element inserted successfully. Press any key to continue ...");
            scanf(" ");
            getchar();
            choice=9;
            continue;
       }
       else{
            arr[10]=ins;
            printf("Element inserted successfully. Press any key to continue ...");
            scanf(" ");
            getchar();
            choice=9;
            continue;
       }    
   }
   else if(choice==2){
       //Delete 
       if(n==0){
           printf("Array is Empty. Press any key to return to the menu ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
       }
       else {
            printf("Enter the Element: ");
            scanf("%d",&ins);
            for(i=0; i<=n; i++){
                if(arr[i]==ins){
                    flag=1;
                    break;
                }
                else{
                    flag=0;
                }
            }
            if(flag==1){
                arr[i]=0;
                printf("Element Deleted. ");
            }
            else if(flag==0){
                printf("Elment not found. ");
            }

            printf("Press any key to return to the menu ...");
            scanf(" ");
            getchar();
            choice = 9;
            continue;
        }
    }
    else if(choice==3){
    //Display 
        if(n==0){
            printf("Array is Empty. Press any key to return to the menu ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
       }
       else{
           for(i=0;i<n;i++){
               printf("%d\t", arr[i]);
           }
            printf("\nPress any key to return to the menu ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
        }
    } 
    else if(choice==4){
       //Search 
       if(n==0){
            printf("Array is Empty. Press any key to return to the menu ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
        }
        else{
            printf("Enter Element: ");
            scanf("%d",&ins);
            flag=0;
            for(i=0;i<n;i++){
                if(arr[i]==ins){
                    printf("Element found at index: %d \n", i);
                    flag=1;
                }
            }
            if(flag==0){
            printf("Elment not found. Press any key to continue ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
            }
            printf("Press any key to continue ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
        }
    }
    else if(choice==5){
       //Sort 
       if(n==0){
            printf("Array is Empty. Press any key to return to the menu ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
        }
        else{
            for (i = 0; i < n; i++){
	            for (j = i + 1; j < n; j++){
	                if (arr[i] > arr[j]){
	                    a =  arr[i];
	                    arr[i] = arr[j];
	                    arr[j] = a;
                    }
                }
            }
            printf("Array sorted. Press any key to continue ... ");
            scanf(" ");
            getchar();
            choice=9;
            continue;
        }
   }
    else{
        //Exit 
        printf("Are You Sure [Y/N] ... ");
        scanf(" %c",&sure);
        if(sure =='Y' || sure == 'y'){
        break;
        }
        else{
            choice = 9;
        } 
    }
    } while (choice<1 || choice>6);
    return 0;
}