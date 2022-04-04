//documentation section 
/* Exercise 5 - 2D array */

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program

    int myArray[5];
    int i;
    int averageVal;
    int sum = 0;

    for (i=0; i<5; i++){

        printf("Enter Value: ");
        scanf(" %d", &myArray[i]);
        sum = sum + myArray[i];

    }

    averageVal = sum / 5;

    printf("Average value is: %d", averageVal);

    return 0;
}


//user-defined section 
