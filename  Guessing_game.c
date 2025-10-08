// A program using do while loop for guess gaming 
/*
Name:METHO JAMES KITHUKA
Reg No: CT101/G/26564/25 
*/

#include <stdio.h>//main for c coding (printf(""),scanf("");;
#include <stdlib.h>//rand() and scrand()
#include <time.h>//time
//Declarations 
int main() {
srand(time(0));
int secret_Number = rand() % 20 + 1;
int guess;
int attempts = 0;
printf("Guess the secret number between 1 and 20.\n");
    
while (guess != secret_Number)
{
printf("Enter your guess(1-20):\n ");
scanf("%d", &guess);
 attempts++;//give room to continue guesiNg until the correct 
 
 if (guess > secret_Number) {
printf("Too high!\n");
} else if (guess < secret_Number) 

{printf("Too low!\n");
}
}

    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
    
    return 0;
}