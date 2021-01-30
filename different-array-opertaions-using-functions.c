#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 10  
void invalid_choice(){
    printf("Invalid Choice. Press any key to return to the menu ... \n");
    scanf(" ");
    getchar();
}
void print_screen(){
    printf("------------------------------------------------------------------------------\n\n");
    printf("-----                          1. Insert                                 -----\n");
    printf("-----                          2. Delete                                 -----\n");
    printf("-----                          3. Display                                -----\n");
    printf("-----                          4. Search                                 -----\n");
    printf("-----                          5. Sort                                   -----\n");
    printf("-----                          6. Exit                                   -----\n");
    printf("\n\n\n");
    printf("\n------------------------------------------------------------------------------\n");
}
void insert(int arr[], int n){
    int ins, ind;
    if(n==MAX_LEN){
        printf("Sorry! Array is full. Press any key to return to the menu ... ");
        scanf(" ");
        getchar();
        return;
    }
    printf("Enter no to insert and index: ");
    scanf("%d%d",&ins,&ind);
    if(ind>=MAX_LEN || ind<-1){
        printf("Index out of Bound. Press any key to return to the menu ... ");
        scanf(" ");
        getchar();
        return;
        }
    else if(ind>=0 && ind<MAX_LEN){
        arr[ind]=ins;
        printf("Element inserted successfully. Press any key to continue ...");
        scanf(" ");
        getchar();
        return;
    }
    else{
        // inserts at arr[10] if ind is -1
        arr[10]=ins;
        printf("Element inserted successfully. Press any key to continue ...");
        scanf(" ");
        getchar();
        return;
    } 
}
void delete(int arr[], int n){
    int ins, flag,i;
    if(n==0){
        printf("Array is Empty. Press any key to return to the menu ... ");
        scanf(" ");
        getchar();
        return;
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
        return;
    }
}
void display(int arr[], int n){
    int i;
    if(n==0){
        printf("Array is Empty. Press any key to return to the menu ... ");
        scanf(" ");
        getchar();
        return;
    }
    else{
        for(i=0;i<n;i++){
            printf("%d\t", arr[i]);
        }
    printf("\nPress any key to return to the menu ... ");
    scanf(" ");
    getchar();
    return;
    }
}
void search(int arr[], int n){
    int flag, i, ins;
    if(n==0){
        printf("Array is Empty. Press any key to return to the menu ... ");
        scanf(" ");
        getchar();
        return;
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
            return;
        }
    printf("Press any key to continue ... ");
    scanf(" ");
    getchar();
    return;
    }
}
void sort(int arr[], int n){
    int i, j, a;
    if(n==0){
        printf("Array is Empty. Press any key to return to the menu ... ");
        scanf(" ");
        getchar();
        return;
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
        return;
    }
}
int prog_exit(){
    int flag;
    char sure;
    printf("Are You Sure [Y/N] ... ");
    scanf(" %c",&sure);
    if(sure =='Y' || sure == 'y'){
        flag=1;
        return flag;
    }
    else{
        flag=0;
        return flag;
    } 
}
int main(){
    int choice,arr[MAX_LEN],n,b,i;
    printf("Enter number of elements of array(<=10): ");                                         
    scanf("%d", &n);
	printf("Input %d values \n", n);                                               
    for(i=0; i<n; i++){                                                                              
        scanf("%d", &arr[i]);                                                                                                                        
    }
    printf("\n\n");
    do{
    print_screen();
    printf("Enter Your Choice ... ");
    scanf("%d",&choice);
    printf("\n------------------------------------------------------------------------------\n");
    if(choice<1 || choice>6){
        invalid_choice();
    }
    else if(choice==1){
       // INSERT 
       insert(arr, n);
       choice=9;
       continue;
    }
    else if(choice==2){
       //Delete 
       delete(arr, n);
       choice=9;
       continue;
    }
    else if(choice==3){
    //Display 
       display(arr,n);
       choice=9;
       continue;
    } 
    else if(choice==4){
       //Search 
       search(arr,n);
       choice=9;
       continue;
    }
    else if(choice==5){
       //Sort 
       sort(arr,n);
       choice=9;
       continue;
    }
    else{
        //Exit 
        b = prog_exit();
        if(b==1){
            break;
        }
        else{
            choice=9;
        } 
    }
    } while (choice<1 || choice>6);
    return 0;
}