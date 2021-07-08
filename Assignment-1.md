# Assignment => Linux OS and Programming

## System Calls
1. Write a program to copy one file contents to other using open,read,write,close system calls (like cp command, which takes source, destination files as cmd line args). 

2. Write a program to count no.of lines, words, characters in given file (like wc command)

## Signals
1. Write a program to send specific signal to a target process (with given id, like kill command)

## Processes
1. Design a mini shell(5 - 10 commands) of your own as follows
   * take command name as input from user (string format)
   * launch the command in the child process using execl/execlp
   * parent will wait for completion of child and print exit status

2. Write a program to compile & link any c/c++ program within child process by launching gcc using execl/execlp.

3. Write a program to build multifile program using fork & exec as follows
   * There are multiple source files holding some functions
   * Create multiple child processes to compile each source file (execl/execlp)
   * On successful completion, launch another child process for linking
   * On successful linking, launch another child process for executing

## Threads
1. Write a program to compute parallel sum of large array using threads. 
   * For e.g. if there are 1000 elements in array, you may create 10 threads where each thread will compute some of 100 elements each, on completion of threads main thread will consolidate final total

2. Write a program to find min/max element from large array(1000 data points) using parallel computations (multthreading)

3. Write a program to print current time periodically (Hint:- alarm, time, ctime)


## Semaphore and Mutex

1. Implement producer consumer problem using Stack operations using semaphores

2. Implement producer consumer problem using circular buffer operations using semaphores
 
3. Repeat above problem by replacing semaphores with mutex wherever possible

## Pipes, Shared Memory & Message Queues
1. Implement a simple client-server scenario using message queues
   * Client process send a string over message queue
   * Server process toggles the string and send back to client.

2. Implement a simple client-server scenario using message queues
   * Client process send requested command over message queue
   * Server process receives requested command over message queue and executes in a child process using execl/execlp

3. Write a program to implement simple chat application between two processes using
   named pipes (FIFOs)

4. Implement producer consumer problem between two processes using shared memory and named semaphores (POSIX APIs)


## File Systems
1. Write a program to retrieve file attributes using message queue as follows
   * Client process sends requested file name to server over message queue
   * Server process retrieves file attributes using lstat and send back to client
   * Client will display the file attributes


