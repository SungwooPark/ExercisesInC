## Homework 5

### C Exercises

Modify the link below so it points to the `ex05` directory in your
student repository.

[Here is a link to the ex05 directory in my repository](https://github.com/SungwooPark/ExercisesInC/tree/master/exercises/ex05)

### Think OS Chapter 5 reading questions

**Bits and bytes**

1) Suppose you have the value 128 stored as an unsigned 8-bit number.  What happens if you convert 
it to a 16-bit number and accidentally apply sign extension?
- 1 will be added to 8 leading bits, making the whole value not 128 (11111111100000000 base 2 != 128 base 10)

2) Write a C expression that computes the two's complement of 12 using the XOR bitwise operator. 
Try it out and confirm that the result is interpreted as -12.
- (12^0xffffffff)

3) Can you guess why IEEE floating-point uses biased integers to represent the exponent rather than a
sign bit or two's complement?
- (Disclaimer: thought about it and couldn't figure it out and used interweb for research) Stack overflow seems to be saying that this design decision is to allow numbers to be compared lexicographically by interpreting a bitstring as an integer. Also, +0.0 is conveniently encodedd as all 0s.

4) Following the example in Section 5.3, write the 32-bit binary representation of -13 in single precision 
IEEE floating-point.  What would you get if you accidentally interpreted this value as an integer?
- 1 00000011 101(followed by 20 zeros). If you accidentally interpret this value as an integer, you will be reading a very large number.

5) Write a function that takes a string and converts from lower-case to upper-case by flipping the sixth bit.  
As a challenge, you can make a faster version by reading the string 32 or 64 bits at a time, rather than one
character at a time.  This optimization is made easier if the length of the string is a multiple of 4 or 8 bytes.

```
char *case_change(char* str){
    int len = strlen(str);
    char* new_str;
    for (int i=0;i<len;i++){
        new_str[i] = str[i]^32;
    }
    return new_str;
}
```
