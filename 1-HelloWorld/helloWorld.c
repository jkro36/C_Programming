/* helloWorld.c
 
 Author: Abrahim J. Kromah
 
Date: April 7, 2024

 */

#include <stdio.h>  // Include the standard I/O library for input and output.

int main()
{
    // Print "Hello, World!" followed by a newline using a single printf statement
    printf("Hello, World! \n");
    
    // Print "hello, " and "world" using separate printf statements
    printf("Hello, ");  // Print "hello, " without a newline
    printf("World!!");    // Print "world" without a newline
    
    // Print a newline to end the line
    printf("\n");
    
    // Return 0 to indicate successful execution (though not explicitly required in C99 and later)
    return 0;
}
