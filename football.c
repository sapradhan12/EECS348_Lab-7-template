#include <stdio.h> //includes the standard input/output library
#include "football.h" //includes the header file

int count_combinations(int score) { //defines the method count_combinations(), which takes in the integer parameter "score"
    printf("Possible combinations of scoring plays if a team's score is %d:\n", score);
    int found = 0; //initializes the found flag to 0, which is False
    int counter = 0; //initializes counter variable to 0
    /*
    Here is what all of the letter variables mean:
    a: number of TD + 2-point conversion plays (8 points each)
    b: number of TD + FG plays (7 points each)
    c: number of TD plays (6 points each)
    d: number of 3-point FG plays (3 points each)
    e: number of Safety plays (2 points each)
    each for loop iterates over a variable from 0 up until the total score divided by its point value. It does this to find the other factor of the score (the first factor being the number of points a certain scoring opportunity is worth).
    */
    for (int a = 0; a <= score / 8; a++) { //iterates over the possible number of plays of TD + 2-point conversion
        for (int b = 0; b <= score / 7; b++) { //iterates over the possible number of plays of TD + FG
            for (int c = 0; c <= score / 6; c++) { //iterates over the possible number of plays of TD
                for (int d = 0; d <= score / 3; d++) { //iterates over the possible number of plays of 3-point FG
                    for (int e = 0; e <= score / 2; e++) { //iterates over the possible number of Safety plays
                        int total = 8 * a + 7 * b + 6 * c + 3 * d + 2 * e; //at each iteration of the entire nested for loop, this line calculates the total points based on the number of plays
                        if (total == score) { //if the total points are equal to the inputted score
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", a, b, c, d, e); //print the combination of each type of play that achieves the score
                            found = 1; //update the found flag to 1 (i.e. True)
                            counter++; //increments the counter by 1
                        } //end if statement checking the calculated total to the score
                    } //end Safety play for loop
                } //end 3-point FG play for loop
            } //end TD play for loop
        } //end TD + FG play for loop
    } //end TD + 2-point conversion for loop
    if (!found) { //if no possible combinations found (i.e. the found flag is still 0 (aka False))
        printf("No combinations found.\n"); //print "No combinations found" to the termianl
    } //ends the if statement

    return counter; //returns the counter
} //ends the count_combinations() method