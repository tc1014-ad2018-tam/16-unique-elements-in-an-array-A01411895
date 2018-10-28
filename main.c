//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that inputs n number of integer values and return how many of that numbers are unique.
 * For example, if the user decides to enter the following 5 numbers: [5, 2, 4, 2, 3],
 * the program should inform the user that 5, 4 and 3 are unique elements.
 */

#include <stdio.h>

int main() {

    int n;

    //State the purpose of the program to the user.
    printf("This program will request you to form an array, then it will give you the unique numbers in the array.\n");

    //Request the array length to the user.
    printf("State the size of the array: \n");
    scanf("%d", &n);

    double list[n];

    //Form the array.
    for (int i = 0; i < n ; i++) {
        printf("Give me integer number %i: ",i+1);
        scanf("%lf", &list[i]);
    }

    //Variable that takes counts how many times a number has been repeated.
    int repeated = 0;

    //Loop to check all the letters
    for (int i = 0; i < n; i++) {
        repeated = 0;

        //Loop that checks all the letters that are in front if position i.
        for (int x = i +1; x < n; x++) {
            if (list[i] == list[x]) {
                repeated++;
            }
        }

        //Loop that check all the letters before position i.
        for (int y = 0; y < i; y++) {
            if (list[i] == list[y]) {
                repeated++;
            }
        }

        //If no letter was repeated during a cycle, print that is unique.
        if (repeated == 0) {
            printf("The number %lf is unique.\n", list[i]);
            repeated = 0;
        }
    }

    //If at the end if the whole cycle nothing was print and the variable repeats end with something, print that that
    //were no unique numbers.
    if (repeated != 0) {
        printf("You gave me no unique numbers.");
    }

    return 0;
}