## Homework 3

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

<<<<<<< HEAD
[Here is a link to the ex02.5 directory in my repository](https://github.com/SungwooPark/ExercisesInC/tree/master/exercises/ex02.5)

### Think OS Chapter 4 reading questions

**Files and file systems**

1) The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?
- 6 bits because 2^5 = 32 and 2^6 = 64

2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.  
Ignoring the details of the encoding scheme, how many different characters can be represented?
- 2^32 characters = about 4.3 billion.

3) What is the difference between "memory" and "storage" as defined in *Think OS*?
- Memory (RAM) is volatile, which means all its content are erased every power shuts down. Storage (HDD, SSD) is non-volatile.

4) What is the difference between a GiB and a GB?  What is the percentage difference in their sizes?
- GiB is binary unit and represent 2^30 bytes. GB is 10^9 bytes. Percent difference is about 7 percent.

5) How does the virtual memory system help isolate processes from each other?
- Virtual memory system abstracts the process of locating a physical address of a memory. Since a process does not have an access to other processes' virtual memory space, the processes are isolated from each other.

6) Why do you think the stack and the heap are usually located at opposite ends of the address space?
- Because stacks and heaps grow in size as a program is running. The stack and the head are located on the opposite ends so they can grow toward each other and share common empty space in the middle.

7) What Python data structure would you use to represent a sparse array?
- I would use a dictionary. A key can be an array location and the value can be an array element.

8) What is a context switch?
- Context switch is when an operating system interrupt an ongoing process, save its state, and start another process.
