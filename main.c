/*
 * Name: Dominic Pressler
 * Description: Make an array that takes in 4 students grades,
 * find the average, minimum, and maximum
 * Date: 09/03/25
 */
#include <stdio.h>


int main(void) {
    int arrSize = 4;
    float userInput[arrSize];

    //Grabs student grades from the user
    for (int i = 0; i < arrSize; i++) {

    printf("Enter Student %d: ", i+1);
        scanf(" %f", &userInput[i]);

    }


    float max = userInput[0], min = userInput[0], avg = userInput[0];


    //calculates max and min
    for (int i = 1; i < arrSize; i++) {
        if (max < userInput[i]) {

            max = userInput[i];
        }
        if (min > userInput[i]) {
            min = userInput[i];
        }
        avg += userInput[i];

    }

    //finds the average
    avg /= 4;


    //displays the desired information
    printf("The Highest Score is %f\n", max);
    printf("The Lowest score is %f\n", min);
    printf("The Average score is %f\n", avg);


    return 0;
}