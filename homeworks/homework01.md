## Homework 1

### C Exercises

[Here is a link to the ex01 directory in my repository](https://github.com/SungwooPark/ExercisesInC/tree/master/exercises/ex01)

### Think OS Chapter 1 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1) Give an example of a feature common in interpreted languages that is rare in compiled languages.
- Dynamic types: Unlike in a compiled language, you don't have to explicitly declare a variarble type in an interpreted language.

2) Name two advantages of static typing over dynamic typing.
- Static typing saves space because there is no need to save a variable names and type in a memory while running a program.
- Errors can be found more quickly during compilation for statically typed langauges, even in the parts of the program that have never run.

3) Give an example of a static semantic error.
- When you give an integer argument to a function that has a char parameter.

4) What are two reasons you might want to turn off code optimization?
- Optimization can make a bug appear or disappear so it can be useful to turn off optimization when you are developing new code.
- Optimization can replace many operations, making it hard to spot certain part of the code. Turning off optimization can help debugging process in this regard.

5) When you run `gcc` with `-S`, why might the results look different on different computers?
- Running `gcc` if `-S` flag generates an assembly language output for a specific architecture that the machine is using. Therefore, the results might look different on computers that use different architecture.

6) If you spell a variable name wrong, or if you spell a function name wrong, the error messages 
you get might look very different.  Why?
- Because the error message that you get is from UNIX linker, not the part of code where you misspelled the name.

7) What is a segmentation fault?
- When you try to read or write in an incorrect location of a memory.
