/*
 * This is a program to calculate the amount of rainfall per year
 * based on monthly rainfall
 *
 * Preston Dickerson
 * CSC 280
 */

#include <stdio.h>

int main(){

        // Create array to store the data.
        int SIZE = 12;
        double months[SIZE];
        // First we will do a while loop, this will be commented out.
        /*int count = 0;
        while(count < Size){
                printf("Enter Rainfall for Month %lf", count+1);
                scanf("%lf", &months[count]);


        }*/

        // For loop to loop through months and collect data / add up 0 months
        for(int i = 0; i < SIZE; i++){
                printf("Enter Rainfall for Month %d: ", i+1);
                scanf("%lf", &months[i]);

        }

        // For loop to add all the months
        int zero;
        double year;
        for(int i = 0; i < SIZE; i++){
                year = year + months[i];

                int m = months[i];
                if(m == 0){
                        zero = zero + 1;
                }
        }

        printf("Calculated Yearly Total: %lf", year);
        printf("Calculated Monthly Average: %lf", (year/SIZE));
        printf("Months at Zero Rainfall: %d", zero);




        return 0;
}
