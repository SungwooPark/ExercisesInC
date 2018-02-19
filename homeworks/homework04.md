## Homework 4

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

[Here is a link to the ex03 directory in my repository](https://github.com/SungwooPark/ExercisesInC/tree/master/exercises/ex03)

### Think OS Chapter 4 reading questions

**Files and file systems**

1) What abstractions do file systems provide?  Give an example of something that is logically 
true about files systems but not true of their implementations.
- File systems provide abstractions that allow you to think of files as a mapping between its names and contents. Files systems gives you an illusion that you are accessing continus stream of data for a single file but in reality, those data might be recorded in discontinuous blocks of disks.

2) What information do you imagine is stored in an `OpenFileTableEntry`?
- I think OpenFileTableEntry contains an information about currently open file like its current file position and block address on the disk.

3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage?
- Operating systems deal with the relatively slow performance of persistent storage through block transfer, prefetching (fetching data on the disk before it is actually needed), buffering (storing some data on the memory and writing on the disk later as a bulk), and caching (keeping a copy of data).

4) Suppose your program writes a file and prints a message indicating that it is done writing.  
Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the 
file you wrote is not there.  What happened?
- The file you wrote was stored in a buffer and the buffer didn't get a chance to write it on the disk when a power cut crashed the computer.

5) Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT?
- File Allocation Table will have less wasted (unused) allocated space, because it uses linked list not a set amount of blocks. However, it will be less efficient to store large files than UNIX inode.

6) What is overhead?  What is fragmentation?
- Overhead is extra amount of data space that is needed (not actual content of the data) that is needed to represent the data in certain data structure. Fragmentation is unused or partially used blocks in the disk.

7) Why is the "everything is a file" principle a good idea?  Why might it be a bad idea?
- "Everything is a file" principle allows programmer to easily write programs on the operating system that interact with each other. Since there is unified media for inputs/outputs, which is a file, programmers can easily design a program that gets data from other program or outputs data to other programs. A potential downside for this approach might be that some kinds of data might not be suitable to be represented as a file. By forcing those type of data to be a file, you might lose optimization in space and performance.

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.  
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then 
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).  
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).



