## Homework 6

### C Exercises

Modify the link below so it points to the `ex06` directory in your
student repository.

[Here is a link to the ex06 directory in my repository](https://github.com/SungwooPark/ExercisesInC/tree/master/exercises/ex06)

### Think OS Chapter 6 reading questions

**Memory management**

1) Which memory management functions would you expect to take constant time?
Which ones take time proportional to the size of the allocated chunk?
- `free` is a constant time operation. The runtime of `calloc` depends on the size of the allocated chunk.

2) For each of the following memory errors, give an example of something that might go wrong:

a) Reading from unallocated memory.
- The system might give you a segmentation fault, or in a worse case, the program interprets whatever value stored in that particular location incorrectly, causing an error.

b) Writing to unallocated memory.
- After writing to an unallocated memory, that value might be read inappropriately sometime after and cause an error.

c) Reading from a freed chunk.
- C memory management API will complain and not allow you to read the requested value.

d) Writing to a freed chunk.
- Just like reading from a freed chunk, C memory management API will complain and not allow you to write to a freed memory chunk.

e) Failing to free a chunk that is no longer needed.
- This will cause a memory leak and eventually the system might run out of physical memory, causing next `malloc` call to fail.

3) Run

```
    ps aux --sort rss
```

to see a list of processes sorted by RSS, which is "resident set size", the amount of physical
memory a process has.  Which processes are using the most memory?
- Google chrome and atom text editor are using most memory.

4) What's wrong with allocating a large number of small chunks?  What can you do to mitigate the problem?
- There are overheads to storing data in a memory chunk (boundary tags and free list pointers). Therefore, `malloc` is not very space efficient for many small chunk allocations. Storing those data in arrays might be potential solution to this problem.

If you want to know more about how malloc works, read
[Doug Lea's paper about dlmalloc](http://gee.cs.oswego.edu/dl/html/malloc.html)
