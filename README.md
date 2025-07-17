# Prime-Number-Calculator-in-C
First real algorithm I've written in C, designed by me.

------------------------------------------------------------------------------------------------------------
explanation
------------------------------------------------------------------------------------------------------------
- input an Nth prime you wish to find (100, 1000 etc)
- establish a list of primes that we have found:  primes[]
- establish a variable that iterates so we can find primes: check_int

- attempt to modulo divide the check_int by each of the primes in the primes list
- if any result is 0 -> number is not prime -> end loop, increase check_int and repeat
- if no results are 0 -> number is prime -> add number to the list, end loop, increase check_int and repeat

- continue until you have found N number of primes
------------------------------------------------------------------------------------------------------------

Made on day 2 of learning C, first experience using malloc and free. It was definitely challenging adapting this algorithm 
to C, given the manual memory management, which is a new concept to me in programming. 

I designed this algorithm in a secure software development class in university, in which we covered prime generation for
encryption algorithms. It was made with the principle of checking as few numbers as possible. 

It is definitely not perfect, and can be optimised further, at some point i could impliment:
  - not checking number that are above the ~square route of the check number
  - implementing multithreading
