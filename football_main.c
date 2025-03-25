#include <stdio.h> //includes the standard input/output library
#include "football.h" //includes the header file

int main() { //defines the main function
    int score; //declares a variable "score" of integer type
    printf("Enter 0 or 1 to STOP\n"); //prints to the terminal that the user can enter a 0 or 1 to stop the program
    
    while (1) { //a while True loop
        printf("Enter the NFL score: "); //asks the user to enter a score
        // Check if user input is a valid integer
        if (scanf("%d", &score) != 1) { //asks the user for integer input using the scanf() and stores in it the address of score
            printf("Invalid input. Please enter an integer.\n"); //prints to the terminal the the input is invalid and that the input needs to be an integer
            int ch = getchar(); //read the first character from input and store it in "ch" variable
            
            while (ch != '\n' && ch != EOF) { //while the character in the input is not a newline or end-of-file character
                ch = getchar(); //read the next character and update ch
            } //end while loop
            continue; //skip the rest of the current iteration of the enclosing loop and move to the next one
        } //end if statement

        if (score == 0 || score == 1) { //if the score is less than or equal to 1
            break; //break outo f the while loop
        } //end if statement
        
        if (score < 0) { //if statement to check if the score is negative
            printf("Negative score is invalid. Please enter a score of 2 or greater.\n"); //lets the user know the error (that the score is negative) and tells them to print a valid score (a score that is 2 or greater)
            continue; //continues to the next iteration of the while loop
        } //end if statement
        find_combinations(score); //passes in score variable into the find_combinations() method
    } //end while loop
    return 0; //returns 0, signifying that the method ran correctly
} //end main function
