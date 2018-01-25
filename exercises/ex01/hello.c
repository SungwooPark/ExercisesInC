#include <stdio.h>

int main() {
    int x = 5;
    int y = x + 1;
    printf("%d\n",y);
    return 0;
}

/* If I look at othe assembly language output after putting `int x=5` in the beginning of 
 * main function without optimization, I can easily spot a line in which value 5 is moved in
 * between registers. However, with -O2 optimization flag, this line isn't obvious at first glance
 * and it seems like there is some logic operation (xorl) going on.
 */

/* When optimization takes place while printing x, it seems like there are fewer operations moving 
 * values in between registers (movl). Other interesting thing to note is that there is some logic 
 * operation (xorl) going on with optimization */

/* The key differene between optimized and unoptimized assemply output is the presence of +1 
 * addition operation. In unoptimzed assembly output, value 5 is stored in a register and 1 is 
 * added to it. In optimized assembly output, this addition step is skipped as the register value 
 * starts with 6.*/

/* It seems like optimization works by combining some works and simplifying those so the assembly 
 * output is as short as possible. For example, when 1 is added to a variable, instead of having an 
 * assembly operation that does addition with 1 and the original variable value, assign a variable 
 * value incremented by 1 to a register. (movl + add1 operations vs. single movl operation) */
