#_printf#

This  project try to mimics the real printf function. We made it for our first part of software engineer formation.
The scope that we have given to the project includes only the conversion parameters and we have prepared a manual of our function. This project was carried out by Marcela Carrasco and Raymundo Barrera Flores.
##Approach the project##
First we divide the project into "Must task", "Needed" and  "Nice to have". To make this definition we separate the challenges into conversion challenges, flag challenges and other challenges. Taking into account the time for the project and the development effort of each one, we limit, as mentioned previously, the development to only include converters.
With the selected scope we proceeded to create an architecture for development. In this sense, our architecture can be understood with four major components. One: A main function called "_printf", second: a "header" where we define the structure that we will use and the functions, third a function "get_function" that will go through the structure and the entered parameter and will return the memory address of the function we need and lastly some files with all the developed functions.
The next big decision we made was how we would go to print. In this sense, we analyze two alternatives: The first to print character by character on the screen and the second to generate a buffer where each character will be sent and finally to print the information in BUFFER at once. Our choice was to carry out the first method, this has as its main disadvantage that we must call the write () function as many times as there are characters and its main advantage is the security in which the printing of the characters and the counting of them are equated and ease of memory management.
Finally, we carry out a detailed analysis of the border cases and different scenarios that could arise to ensure the operation of the system in an integral way.
##Project General Requirements##
###Allowed editors: vi, vim, emacs###
###All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89###
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be :xdifferent from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h.
##Authorized function & maros##
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
