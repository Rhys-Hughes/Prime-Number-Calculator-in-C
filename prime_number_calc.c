//prime number calculator, super simple:

// - input a number n which is the amount of primes we want to go to

// - divide the number by the contents of the prime array

//      - if the number is not divisible by anything -> number is prime, add it to the array

//      - if the number is divisible by something -> number is not prime, pass

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int nth_prime;
    int primes_found = 0;
    bool nth_found = false;
    int check_int = 1;
    bool prime_toggle = true;

    printf("what Nth prime number do you want: ");
    scanf("%d", &nth_prime);

    //becuase i don't know what size the array of primes will be when i start, i use malloc/free
    int *primes = malloc(nth_prime * sizeof(int));

    //this checks if the memory has been successfully allocated
    if (primes == NULL){
        printf("memory allocation failed.\n");
        return 1;
    }

    //checking the numbers
    while (!nth_found){

        check_int++;

        //checks against every prime found thus far and sets a toggle if the check integer is divisible by any
        if (primes_found != 0){

            for (int i = 0; i < primes_found; i++){

                    //debugging
                    printf("%d : CI: %d -> %d \n", primes_found, check_int, i);

                    //checks for divisability and breaks the loop
                    if ((check_int % primes[i] == 0)){
                        prime_toggle = false;
                        i = primes_found;
                    }
            }
        }

        //if the toggle is set, the prime is added to the array in the place of the primes found variable
        if (prime_toggle){

            primes[primes_found] = check_int;
            primes_found++;
        }

        prime_toggle = true;

        //breaks the loop once the desired amount of primes are found
        if (primes_found == nth_prime){
            nth_found = true;
        }
    }

    printf("RESULT -> %d\n", primes[primes_found-1]);

    free(primes);

    return 0;

}

