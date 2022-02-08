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

        // For loop to loop through months and collect data
        for(int i = 0; i < SIZE; i++){
                printf("Enter Rainfall for Month %d: ", i+1);
                scanf("%lf", &months[i]);
        }

        // For loop to add all the months
        double year;
        for(int i = 0; i < SIZE; i++){
                year = year + months[i];
        }

        printf("Calculated Yearly Total: %lf", year);


        return 0;
}
