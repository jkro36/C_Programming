/* fahrToCelsTable - converts Fahrenheit temperatures to Celsius and prints a table of values.
 
 Author: Abrahim J. Kromah
 
Date: April 14, 2024

 */

#include <stdio.h>  // Include the standard I/O library for input and output functions.

int main()
{
    int fahr, celsius;  // Declare variables for Fahrenheit and Celsius temperatures.
    int lower = 0;      // Set the lower limit of the temperature scale to 0.
    int upper = 300;    // Set the upper limit of the temperature scale to 300.
    int step = 20;      // Set the step size to increment Fahrenheit by 20.
    
    fahr = lower;       // Initialize Fahrenheit temperature to the lower limit.
    
    printf("\nFAHRENHEIT TO CELSIUS TABLE\n");      //print this string of text as header.
    printf("\n%s\t%s\n", "FAHRENHEIT", "CELSIUS"); //print the title of the conversion.
    
    // Loop to convert Fahrenheit to Celsius and print the table.
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;  // Convert Fahrenheit to Celsius.
        printf("%3d\t\t%3d\n", fahr, celsius);  // Print Fahrenheit and Celsius temperatures with formatting. "%3d" print the two integers value (in a 3 digits field to get the number righ justified) with a tab (\t) between them.
        fahr = fahr + step;  // Increment Fahrenheit temperature by the step size.
    }
    
    return 0;  // Return 0 to indicate successful execution.
}
