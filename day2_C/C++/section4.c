#include <stdio.h>

/* Question 1
int main() {
    
    int a,b;
    printf("Enter no. of rows : ");
    scanf("%d",&a);
    printf("Enter no. of columns : ");
    scanf("%d",&b);
    
    int arr[a][b];
    int i,j;
    for (i = 0; i < a;i++) {
        for (j = 0; j < b; j++) {
            printf("Enter the arrays for [%d][%d]: ", i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The array is as following : \n");
    for (i = 0; i < a;i++) {
        for (j = 0; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

   
   return 0;
   
}


*/

/* Question 2
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a,b;
    printf("Enter no. of rows : ");
    scanf("%d",&a);
    printf("Enter no. of columns : ");
    scanf("%d",&b);
    
    char arr[a][b];
    int i,j;
    for (i = 0; i < a;i++) {
        for (j = 0; j < b; j++) {
            printf("Enter the arrays for [%d][%d]: ", i,j);
            scanf(" %c",&arr[i][j]);
        }
    }
    printf("The array is as following : \n");
    for (i = 0; i < a;i++) {
        for (j = 0; j < b; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    
       for (i = 0; i < a;i++) {
        for (j = 0; j < b; j++) {
        }
        printf("Size of row %d is : %d \n", i,b);
    }
   
   return 0;
   
}

*/