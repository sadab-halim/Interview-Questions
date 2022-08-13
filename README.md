## [OOPS Notes](#oops-notes)
## [Operating System Notes](#operating-system-notes)
## [Database Management System Notes](#database-management-system-notes)
## [Computer Networks Notes](#computer-networks-notes)
## [Linux Notes](#linux-notes)

## OOPS Notes
## Operating System Notes
An **Operating System** is a piece of software that manages all the resources of a computer system, both hardware and software, and provides an environment in which the user can execute their programs in a convenient and efficient manner.

An Operating System: <br/>
- manages the computer hardware
- facilitates execution of application programs
- acts as an intermediary between the user and the computer hardware
- designed to be convenient and efficient

## Process vs Program
| Process | Program |
| ------- | ------- |
| Process is an instance of an executing program. | Program contains a set of instructions designed to complete a specific task |
| Process is a active entity as it is created during execution and loaded into the main memory. | Program is a passive entity as it resides in the secondary memory. |
| Process exists for a limited span of time as it gets terminated after the completion of task. | Program exists at a single place and continues to exist until it is deleted. |
| Process has a high resource requirement, it needs resources like CPU, memory address, I/O during its lifetime. | Program does not have any resource requirement, it only requires memory space for storing the instructions. |
| Process has its own control block called Process Control Block. | Program does not have any control block. |

## States of a Process
States of a Process are as follows:
- **New (Create):** In this step, the process is about to be created but not yet created, it is the program which is present in secondary memory that will be picked up by OS to create the process.

- **Ready:** New -> Ready to run. After the creation of a process, the process enters the ready state i.e. the process is loaded into the main memory. <br/>
The process here is ready to run and is waiting to get the CPU time for its execution. <br/>
Processes that are ready for execution by the CPU are maintained in a queue for ready processes.

- **Run:** The process is chosen by CPU for execution and the instructions within the process are executed by any one of the available CPU cores.

- **Blocked or Wait:** Whenever the process requests access to I/O or needs input from the user or needs access to a critical region it enters the blocked or wait state. <br/>
The process continues to wait in the main memory and does not require CPU. Once the I/O operation is completed the process goes to the ready state.

- **Terminated or Completed:** Process is killed as well as PCB is deleted.

## Process Control Block (PCB)
- When the process is created by the operating system it creates a data structure to store the information of that process. This is known as **Process Control Block**.
- PCBs are stored in specifically reserved memory for the operating system known as **kernel space**.

## Role of PCB
It's the job of the OS to assign a CPU to a process as the process doesn't need a CPU all the time.

## Structure of Process Control Block (PCB)

1. **Process ID:** <br/>
    When a new process is created by the user, the OS assigns a unique ID i.e. a process ID to that process. This ID helps the process to be distinguished from other processed existing in the system.

2. **Process State:** <br/>
    A process from it's creation to completion goes through different states. *Discussed above*

3. **Process Priority:** <br/>
    Process priority is a numeric value that represents the priority of each process. The lesser the value, the greater the priority of that process.

4. **Process Accounting Information:** <br/>
    This attribute gives the information of the resources used by that process in its lifetime. For example, CPU time connection time, etc.

5. **Program Counter:** <br/>
    The program counter is a pointer that points to the next instruction in the program to be executed. This attribute of PCB contains the address of the next instruction to be executed in the process.

6. **CPU Registers:** <br/>
    A CPU register is a quickly accessible small-sized location available to the CPU. These registers are also stored in the virtual memory (RAM).

7. **PCB Pointer:** <br/>
    This field contains the address of the next PCB, which is in ready state. <br/>
    This helps the OS to hierarchically maintain an easy control flow between parent processes and child processes.

8. **List of open files:** <br/>
    It contains information on all the files that are used by that process. This field is important as it helps in OS to close all the opened files at the termination state of the process.

9. **Process I/O Information:** <br/>
    In this field, the list of all the input/output devices which are required by that process during its execution is mentioned.
    
## How PCBs are stored?
- PCBs are stored in the form of LinkedList in memory.
- Operating System used Process Table to find the PCB present in memory.

## Process Table
Process Table is a table that contains *Process ID* and the reference to the corresponding PCB in memory.

## How does a process look like in memory?
- **Text:** <br/>
    This section of memory contains the executable instructions of a program. It is also sharable so that the so that another process can use this whenever it is required.

- **Data:** <br/>
    Data Section segment of memory contains the global and static variables that are initialized by the programmer prior to the execution of a program. This segment is not read-only, as the value of the variables can be changed at the runtime.

- **Heap:** <br/>
    To allocate memory for variables whose size cannot be statically determined by the compiler before program execution, requested by the programmer, there is a requirement of dynamic allocation of memory which is done in heap segment. It can be only determined at run-time. It is managed via system calls to malloc, calloc, free, delete etc.

- **Stack:** <br/>
    A process generally also includes the process stack, which contains temporary data i.e. function parameters, return addresses, and local variables.

    This section is committed to store all the data needed by a function call in a program.

    A stack pointer register keeps the tracks of the top of the stack i.e., how much of the stack area using by the current process, and it is modified each time a value is “pushed” onto the stack. If the stack pointer meets the heap pointer the available free memory is depleted.    

## Process vs Thread
| Process | Thread |
| ------- | ------ |
| Process means any program is in execution | Thread means a segment of a process |
| The process takes more time to terminate | The thread takes less time to terminate |
| It takes more time for creation | It takes less time for creation |
| It also takes more time for context switching | It takes less time for context switching |
| The process is less efficient in terms of communication | Thread is more efficient in terms of communication |
| The process is isolated | Threads share memory |
| If one process is blocked then it will not affect the execution of other processes | If a user-level thread is blocked, then all other user-level threads are blocked. |

## Process Scheduling
The process scheduling is the activity of the process manager that handles the removal of the running process from the CPU and the selection of another process on the basis of a particular strategy.

## Types of Process Scheduling Queus
1. **Job Queue** <br/>
    This queue keeps all the processes in the system.

2. **Ready Queue** <br/>
    This queue keeps a set of all processes residing in main memory, ready and waiting to execute. A new process is always put in this queue.

3. **Device Queue** <br/>
    The processes which are blocked due to unavailability of an I/O device constitute this queue.
    
## Scheduler
- Schedulers are special system software which handle process scheduling in various ways. 
- Their main task is to select the jobs to be submitted into the system and to decide which process to run.

| Long Term Scheduler | Short Term Scheduler | Mid Term Scheduler |
| ------------------- | -------------------- | ------------------ |
| It is a job scheduler | It is a CPU scheduler | It is a process swapping scheduler. |
| Speed is lesser than short term scheduler | Speed is fastest among other two | Speed is in between both short and long term scheduler. |
| It controls the degree of multiprogramming | It provides lesser control over degree of multiprogramming | It reduces the degree of multiprogramming. |
| It is almost absent or minimal in time sharing system | It is also minimal in time sharing system | It is a part of Time sharing systems. |
| It selects processes from pool and loads them into memory for execution | It selects those processes which are ready to execute | It can re-introduce the process into memory and execution can be continued. |

## Dispatcher
- A dispatcher is a special program which comes into play after the scheduler. 
- When the scheduler completes its job of selecting a process, it is the dispatcher which takes that process to the desired state/queue. 
- The dispatcher is the module that gives a process control over the CPU after it has been selected by the short-term scheduler. 

## Scheduler and Dispatcher
| Scheduler | Dispatcher |
| --------- | ---------- |
| Scheduler is something which selects a process among various processes | Dispatcher is a module that gives control of CPU to the process selected by short term scheduler |
| There are 3 types of scheduler i.e. Long-term, Short-term, Medium-term | There are no different types in dispatcher.It is just a code segment. |
| Scheduler works independently. It works immediately when needed | Working of dispatcher is dependent on scheduler.Means dispatcher have to wait until scheduler selects a process. |
| Scheduler works on various algorithm such as FCFS, SJF, RR etc. | Dispatcher has no specific algorithm for its implementation	|
| Time taken by scheduler is usually negligible.Hence we neglect it. | The time taken by dispatcher is called dispatch latency. |
| Scheduler performs three task. Job scheduling (Long-term scheduler), CPU scheduling (Short-term scheduler) and swapping (Medium-term scheduler). | Dispatcher allocates  the CPU to the process selected by the short-time scheduler. |

## Objectives of Scheduling Algorithms:
- Fare allocation of CPU
- Increased throughput
- Improved CPU Utilization
- Minimum Turnaround time
- Minimum response time
- Minimum waiting time

## Preemtive Scheduling vs Non-Preemptive Scheduling
| Preemptive Scheduling | Non-Preemptive Scheduling |
| --------------------- | ------------------------- |
| In this resources(CPU Cycle) are allocated to a process for a limited time. | Once resources(CPU Cycle) are allocated to a process, the process holds it till it completes its burst time or switches to waiting state. |
| Process can be interrupted in between. | Process can not be interrupted until it terminates itself or its time is up. |
| If a process having high priority frequently arrives in the ready queue, a low priority process may starve. | If a process with a long burst time is running CPU, then later coming process with less CPU burst time may starve. |
| flexible | rigid |
| In preemptive scheduling, CPU utilization is high. | It is low in non preemptive scheduling. |
| Preemptive scheduling waiting time is less. | Non-preemptive scheduling waiting time is high. |
| Preemptive scheduling response time is less. | Non-preemptive scheduling response time is high. |
| Examples of preemptive scheduling are Round Robin and Shortest Remaining Time First. | Examples of non-preemptive scheduling are First Come First Serve and Shortest Job First. |

## Types of Scheduling Algorithms
- First Come First Serve (FCFS)
- Shortest Job First (SJF)
- Shortest Remaining Time First (SRTF)
- Round Robin (RR)
- Multilevel Queue Scheduling
- Multilevel Feedback Queue Scheduling
- Priority-based Scheduling

## First Come First Serve (FCFS)
- Jobs are executed on first come, first serve basis.
- It is a non-preemptive, pre-emptive scheduling algorithm.
- Easy to understand and implement.
- Its implementation is based on FIFO queue.
- Poor in performance as average wait time is high

## Shortest Job First (SJF)
- This is a non-preemptive, pre-emptive scheduling algorithm.
- Best approach to minimize waiting time.
- Easy to implement in Batch systems where required CPU time is known in advance.
- Impossible to implement in interactive systems where required CPU time is not known.
- The processer should know in advance how much time process will take.

## Shortest Remaining Time First (SRTF)
- The processor is allocated to the job closest to completion but it can be preempted by a newer ready job with shorter time to completion.
- Impossible to implement in interactive systems where required CPU time is not known.
- It is often used in batch environments where short jobs need to give preference.

## Round Robin (RR)
- Round Robin is the preemptive process scheduling algorithm.
- Each process is provided a fix time to execute, it is called a quantum.
- Once a process is executed for a given time period, it is preempted and other process executes for a given time period.
- Context switching is used to save states of preempted processes.

## Multilevel Queue Scheduling
- Processes in the ready queue can be divided into different classes where each class has its own scheduling needs. 
- For example, a common division is a foreground (interactive) process and a background (batch) process. 
- These two classes have different scheduling needs. For this kind of situation Multilevel Queue Scheduling is used. 

## Multilevel Feedback Queue Scheduling
- Multilevel Feedback Queue Scheduling (MLFQ) CPU Scheduling is like Multilevel Queue Scheduling but in this process can move between the queues. And thus, much more efficient than multilevel queue scheduling. 
- In a multilevel queue-scheduling algorithm, processes are permanently assigned to a queue on entry to the system, and processes are not allowed to move between queues. 
- As the processes are permanently assigned to the queue, this setup has the advantage of low scheduling overhead, 
But on the other hand disadvantage of being inflexible.

## Priority Based Scheduling
- Priority scheduling is a non-preemptive algorithm and one of the most common scheduling algorithms in batch systems.
- Each process is assigned a priority. Process with highest priority is to be executed first and so on.
- Processes with same priority are executed on first come first served basis.
- Priority can be decided based on memory requirements, time requirements or any other resource requirement.


## Context Switching
- Context Switching is basically a process of saving the context of one process and loading the context of another process.
- It is one of the cost-effective and time-saving measures executed by CPU because it allows multiple processes to share a single CPU.
- Therefore, it is considered an important part of a modern OS. 
- This technique is used by OS to switch a process from one state to another i.e., from running state to ready state. 
- It also allows a single CPU to handle and control various different processes or threads without even the need for additional resources.

## Spooling 
- Spooling simply stands for Simultaneous peripheral operations online.
- It is referred to as putting data of various I/O jobs in a buffer.
- Here, buffer means a special area in memory or hard disk that can be accessible to an I/O device.
- It is used for mediation between a computer application and a slow peripheral.
- It is very helpful and important beacuse devices access or acquire data at different rates.
- This operation also uses disk as a very large buffer and is capable of overlapping I/O operations for one task with processor operations for another task.

## Thread
- Thread is an execution unit that consists of its own program counter, a stack, and a set of registers where the program counter mainly keeps track of which instruction to execute next, a set of registers mainly hold its current working variables, and a stack mainly contains the history of execution
- Threads are also known as Lightweight processes. 
- Threads are a popular way to improve the performance of an application through parallelism. 
- Threads are mainly used to represent a software approach in order to improve the performance of an operating system just by reducing the overhead thread that is mainly equivalent to a classical process.

## Benefits of Multithreading in Operating System
- Responsiveness
- Resource Sharing
- Economy
- Scalability

## Examples of Multithreading
- Web Browsers
- Web Serves
- Computer Games
- Text Editors
- IDEs

## Types of Threads
1. **User Threads:** <br/>
    These are the threads that application programmers use in their programs.

2. **Kernel Threads:** <br/>
    Kernel threads are supported within the kernel of the OS itself. All modern OSs support kernel-level threads, allowing the kernel to perform multiple simultaneous tasks and/or to service multiple kernel system calls simultaneously.
    
## Process Synchronization

## Deadlock
Deadlock is a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process. 

Consider an example when two trains are coming toward each other on the same track and there is only one track, none of the trains can move once they are in front of each other. 

A similar situation occurs in operating systems when there are two or more processes that hold some resources and wait for resources held by other(s). 

For example, in the below diagram, Process 1 is holding Resource 1 and waiting for resource 2 which is acquired by process 2, and process 2 is waiting for resource 1. 

## Necessary Conditions of Deadlock
- **Mutual Exclusion:** Two or more resources are non-shareable (Only one process can use at a time) 
- **Hold and Wait:** A process is holding at least one resource and waiting for resources. 
- **No Preemption:** A resource cannot be taken from a process unless the process releases the resource. 
- **Circular Wait:** A set of processes are waiting for each other in circular form. 

## Effects of Deadlock
If the operating system has a deadlock prevention or detection system in place, this will have a negative impact on performance (slow the system down) because whenever a process or thread requests a resource, the system will have to check whether granting this request could cause a potential deadlock situation.

## Methods for Handling Deadlock
1. **Prevention or Avoidance:** Make sure atleast one condition should not meet
    - Mutual Exclusion
    - Hold & Wait
    - No PreEmption
    - Circular Wait

2. **Detection or Recovery** <br/>
    - Banker's Algo
    - Ostrich Algo
    - Resource PreEmption

3. **Ignorance**

## Logical vs Physical Address Space
| Logical Address | Physical Address |
| --------------- | ---------------- |
| Logical Address Space is set of all logical addresses generated by CPU in reference to a program | Physical Address is set of all physical addresses mapped to the corresponding logical addresses. |
| Generated by CPU | Location in a memory unit |
| User can view the logical address of a program | User can never view physical address of a program |
| Generated by CPU | Commuted by MMU |
| The user can use the logical address to access the physical address | The user can indirectly access physical address but not directly |
| Logical address can be change | Physical address will not change |
| Also called ad Virtual Address | Also called as Real Address |

## What is Swapping ?
Swapping is a mechanism in which a process can be swapped temporarily out of main memory (or move) to secondary storage (disk) and make that memory available to other processes. At some later time, the system swaps back the process from the secondary storage to main memory.

Swapping is also known as a technique for memory compaction.

## Paging
- Paging is a storage mechanism that allows OS to retrieve processes from the secondary storage into the main memory in the form of pages. 
- In the Paging method, the main memory is divided into small fixed-size blocks of physical memory, which is called frames. 
- The size of a frame should be kept the same as that of a page to have maximum utilization of the main memory and to avoid external fragmentation. - - Paging is used for faster access to data, and it is a logical concept.

## Segmentation
- Segmentation is a technique of memory management. 
- It is just like the Paging technique except the fact that in segmentation, the segments are of variable length but, in Paging, the pages are of fixed size. 
- In segmentation, the memory is split into variable-length parts. Each part is known as segments. 
- The information which is related to the segment is stored in a table which is called a segment table.

## Paging vs Segmentation



## Thrasing

## Starvation
- It is generally a problem that usually occurs when a process has not been able to get the required resources it needs for progress with its execution for a long period of time. 
- In this condition, low priority processes get blocked and only high priority processes proceed towards completion because of which low priority processes suffer from lack of resources. 

## Aging
- It is a technique that is used to overcome the situation or problem of starvation. 
- It simply increases the priority of processes that wait in the system for resources for a long period of time. 
- It is considered the best technique to resolve the problem of starvation as it adds an aging factor to the priority of each and every request by various processes for resources. 
- It also ensures that low-level queue jobs or processes complete their execution





## Semaphore
Semaphore is defined as an integer variable which is used to solve the problem of the critical section in process synchronization. In semaphore, we use two types of atomic operations, and that operations are wait and signal.

The definitions of wait and signal are as follows:
- **Wait:** - In wait operation, the argument ‘S’ value is decrement by 1 if the value of the ‘S’ variable is positive. If the value of the argument variable ‘S’ is zero or negative, no operation is performed.
- **Signal:** - In Signal atomic operation, the value of the argument variable ‘S’ is incremented.

## Types of Semaphores
- **Counting Semaphores:** is defined as a semaphore that contains integer values, and these values have an unrestricted value domain. A counting semaphore is helpful to coordinate the resource access, which includes multiple instances.
- **Binary Semaphores:** are also called Mutex lock. There are two values of binary semaphores, which are 0 and 1. The value of binary semaphore is initialized to 1. We use binary semaphore to remove the problem of the critical section with numerous processes.

|Counting Semaphore | Binary Semaphore |
| ----------------- | ---------------- |
| In counting semaphore, there is no mutual exclusion. | In binary semaphore, there is mutual exclusion. |
| In the counting semaphore, any integer value can be possible. | It contains only two integer values that are 1 and 0. |
| In counting semaphore, there are more than one slots.	 | In the binary semaphore, there is only one slot. |
| The counting process offers a set of processes. | Binary semaphore contains mutual exclusion mechanism. |

### Difference between Semaphore and Mutex
| Semaphore | Mutex |
| --------- | ----- |
| It is an integer variable. | It is an object. |
| Semaphore is a signaling mechanism. | Mutex is a type of locking mechanism. |
| There are two types of semaphore, which are binary semaphore and counting semaphore. | There are no types of mutex. |
| In semaphore, wait() and signal() operations are performed to modify the value of semaphore. | In mutex, locked or unlocked operation is performed. |
| In semaphore, there may be multiple program threads. | In mutex, there may also be a multiple program thread but not simultaneously. |











## Memory Management
- CPU can directly access registers and main memory
- Protection of memory space is handled by hardware
- OS leads base and limit registers
- Mapping from logical to physical address is done by MMU

## Logical vs Physical Address Space

## Swapping

## Contigous Memory Location

## Fragmentation
Fragmentation is an unwanted problem in the operating system in which the processes are loaded and unloaded from memory, and free memory space is fragmented.

## Internal Fragmentation

## External Fragmentation


## Paging

## Segmentation

## Paging vs Segmentation
| Paging | Segmentation |
| ------ | ------------ |
| In paging, the program is divided into fixed or mounted size pages. | In segmentation, the program is divided into variable size sections. |
| For the paging operating system is accountable. | For segmentation compiler is accountable. |
| It is faster in comparison to segmentation. | Segmentation is slow. |
| Paging could result in internal fragmentation. | Segmentation could result in external fragmentation. |
| In paging, the logical address is split into a page number and page offset. | Here, the logical address is split into section number and section offset. |
| Paging is invisible to the user. | Segmentation is visible to the user. |
| In paging, a programmer cannot efficiently handle data structure. | It can efficiently handle data structures. |

## Why Paging increases the context-switch time?

## Page vs Frame

## What is a TLB miss and TLB hit?
- Given a virtual address, the processor examines the TLB if a page table entry is present TLB hit.
- The frame number is retrieved and the real address is formed. If a page table entry is not found in the TLB.
Goal of Memory Management
To keep multiple processes in memory to allow multiprogramming.


## Virtual Memory
- It is a memory management technique feature of OS that creates the illusion to users of a very large (main) memory. 
- It is simply space where a greater number of programs can be stored by themselves in the form of pages. 
- It enables us to increase the use of physical memory by using a disk and also allows us to have memory protection. 
- It can be managed in two common ways by OS i.e., paging and segmentation. It acts as temporary storage that can be used along with RAM for computer processes.  

## Why Virtual Memory
- It frees up RAM by swapping data that has not been used recently over to a storage device, such as a hard drive or solid-state drive (SSD). 
- It is important for improving system performance, multitasking and using large programs.

## Working of Virtual Memory
- Virtual memory uses both hardware and software to operate. 
- When an application is in use, data from that program is stored in a physical address using RAM. 
- A memory management unit (MMU) maps the address to RAM and automatically translates addresses. 
- The MMU can, for example, map a logical address space to a corresponding physical address.
- If, at any point, the RAM space is needed for something more urgent, data can be swapped out of RAM and into virtual memory. 
- The computer's memory manager is in charge of keeping track of the shifts between physical and virtual memory. 
- If that data is needed again, the computer's MMU will use a context switch to resume execution.
- While copying virtual memory into physical memory, the OS divides memory with a fixed number of addresses into either pagefiles or swap files. 
- Each page is stored on a disk, and when the page is needed, the OS copies it from the disk to main memory and translates the virtual addresses into real addresses.
- However, the process of swapping virtual memory to physical is rather slow. This means using virtual memory generally causes a noticeable reduction in performance. 
- Because of swapping, computers with more RAM are considered to have better performance.

## How Virtual Memory is implemented?
- Demand Paging

## Advantages of Virtual Memory
- Increases the degree of multiprogramming
- Data Sharing
- Avoids relocation
- Increases memory
- Increases effective use of CPU

## Disadvantages of Virtual Memory
- Makes the system slower
- Lesser Hard Disk Space
- Reduces System Stability

## Demand Paging
- Demand paging is a process that keeps pages of a process that are infrequently used in secondary memory, and pulls them only when required to satisfy the demand. <br/>
- It is also called lazy swapper because the swapping of pages is done only when the CPU requires it. 
- Example: Imagine that you are scrolling through an e-commerce platform and like some clothes. However, since you don't have space in your wardrobe, you save it in your wishlist and decide to buy them only when needed.

## Pure Demand Paging
- There are cases when no pages are loaded into the memory initially, pages are only loaded when demanded by the process by generating page faults. 
- This is called Pure Demand Paging. In pure demand paging, even a single page is not loaded into memory initially. 
- Hence pure demand paging causes a page fault.

## Swap In and Swap Out
- When the primary memory (RAM) is insufficient to store data required by several applications, we use a method known as swap out to transfer certain programs from RAM to the hard drive.
- Similarly, when RAM becomes available, we swap in the applications from hard disk to RAM. We may manage many processes inside the same RAM by using swaps. 

## Page Fault
A Page Fault occurs when a program running in CPU tries to access a page that is in the address space of that program, but the requested page is currently not loaded into the main physical memory, the RAM of the system.

## Swap Space
Section of hard disk used for implementing virtual memory is called swap space.

## Page Replacement Algorithm
- Page replacement occurs due to page faults. 
- The various page replacement algorithms like FIFO, Optimal page replacement, LRU, LIFO, and Random page replacement help the operating system to decide which page to replace.

Few Page Replacement Algorithms are as follows: <br/>
- FIFO
  - Belady's Anomaly
- Optimal Page Relacement
- LRU

## First In First Out (FIFO)
- FIFO algorithm is the simplest of all the page replacement algorithms. 
- In this, we maintain a queue of all the pages that are in the memory currently. 
- The oldest page in the memory is at the front-end of the queue and the most recent page is at the back or rear-end of the queue.
- Whenever a page fault occurs, the operating system looks at the front-end of the queue to know the page to be replaced by the newly requested page. It also adds this newly requested page at the rear-end and removes the oldest page from the front-end of the queue.

## Belady's Anomaly
Belady's Anomaly refers to the phenomena where increasing the number of frames in memory, increases the page faults as well.

**Advantages:** <br/>
- Simple to understand and implement
- Doest not cause more overhead

**Disadvantages:** <br/>
- Poor performance
- Doesnt't use the frequency of the last used time and just simply replaces the old page
- Suffer's from Belady's anomaly

## Optimal Page Replacement
- Optimal page replacement is the best page replacement algorithm as this algorithm results in the least number of page faults. 
- In this algorithm, the pages are replaced with the ones that will not be used for the longest duration of time in the future. 
- In simple terms, the pages that will be referred farthest in the future are replaced in this algorithm

## Least Recently Used (LRU)
- The least recently used page replacement algorithm keeps the track of usage of pages over a period of time. 
- This algorithm works on the basis of the principle of locality of a reference which states that a program has a tendency to access the same set of memory locations repetitively over a short period of time. 
- So pages that have been used heavily in the past are most likely to be used heavily in the future also.
- In this algorithm, when a page fault occurs, then the page that has not been used for the longest duration of time is replaced by the newly requested page.

## Can we replace ram with virtual memory
- If, at any point, the RAM space is needed for something more urgent, data can be swapped out of RAM and into virtual memory.

## Is performance of virtual memory and physical memory same?
The key difference between virtual memory and physical memory is that RAM is very much faster than virtual memory. So a system with 2 GB of physical RAM and 2 GB of virtual memory will not offer the same performance as a similar system with 4 GB of physical RAM.

## Thrasing
- In multiprogramming, there can be a scenario when the system spends most of its time shuttling pages between the main memory and the secondary memory due to frequent page faults. 
- This behavior is known as thrashing.
- A process is said to be thrashing if the CPU spends more time serving page faults than executing the pages. 
- This leads to low CPU utilization and the Operating System in return tries to increase the degree of multiprogramming.

## Causes of Thrasing
- High degree of multiprogramming
- Less number of frames compared to the processes required.
- The process scheduling scheme which swaps in more processes when CPU utilization is low.

## How to Overcome Thrasing?
- The thrashing effect can be prevented by allocating each process as many frames as it requires during run. 
- To find out the number of frames required by a process, we can use the locality model. A locality is a set of pages that are actively used together. 
- The locality model says that during execution, a process shifts from one locality to another, and these localities may overlap. We have to provide enough frames to a process to stop page faulting in the current locality.
- If the system is already in the thrashing state, the process scheduler can be instructed to suspend some of the processes.

## Frame Rate
- Frame rate is the frequency in which a consecutive series of frames or images can appear on a display panel
- It is also known as *burst rate* or *update rate*

## What is RAID structure in OS? What are the different levels of RAID configuration?
- RAID (Redundant Arrays of Independent Disks) is a method used to store data on Multiple hard disks therefore it is considered as data storage virtualization technology that combines multiple hard disks. 
- It simply balances data protection, system performance, storage space, etc. 
- It is used to improve the overall performance and reliability of data storage. 
- It also increases the storage capacity of the system and its main purpose is to achieve data redundancy to reduce data loss.

 ## Levels of RAID
- **RAID 0** - Non-redundant striping: This level is used to increase the performance of the server.
- **RAID 1** - Mirroring and duplexing: This level is also known as disk mirroring and is considered the simplest way to implement fault tolerance.
- **RAID 2** - Memory-style error-correcting codes: This level generally uses dedicated hamming code parity I.e., a liner form of error correction code.
- **RAID 3** - Bit-interleaved Parity: This level requires a dedicated parity drive to store parity information.
- **RAID 4** - Block-interleaved Parity: This level is similar to RAID 5 but the only difference is that this level confines all parity data to a single drive.
- **RAID 5** - Block-interleaved distributed Parity: This level provides far better performance than disk mirroring and fault tolerance.
- **RAID 6** - P+Q Redundancy: This level generally provides fault tolerance for two drive failures

## RTOS
- Real Time Operating System (RTOS) is an operating system that is used for real-time applications i.e., for those applications where data processing should be done in a fixed and small measure of time. 
- It performs much better on tasks that are needed to be executed within a short time. 
- It also takes care of execution, monitoring, and all-controlling processes. 
- It also occupies less memory and consumes fewer resources

## Thrasing
- It is generally a situation where the CPU performs less productive work and more swapping or paging work. 
- It spends more time swapping or paging activities rather than its execution. 
- By evaluating the level of CPU utilization, a system can detect thrashing. 
- It occurs when the process does not have enough pages due to which the page-fault rate is increased. 
- It inhibits much application-level processing that causes computer performance to degrade or collapse

## Multiprogramming
- It it is the coordination of execution of various programs simultaneously on a single processor (CPU). 
- The main objective of multiprogramming is to have at least some processes running at all times. 
- It simply improves the utilization of the CPU as it organizes many jobs where the CPU always has one to execute. 

## Multitasking and Multiprocessing
| Multitasking | Multiprocessing |
| -------------- | ----------------- |
| It is a system that allows more efficient use of computer hardware. This system works on more than one task at one time by rapidly switching between various tasks. These systems are also known as time-sharing systems.  |  It is a system that allows multiple or various processors in a computer to process two or more different portions of the same program simultaneously. It is used to complete more work in a shorter period of time. |
| In this, the number of CPUs is only one. | In this, the number of CPUs is more than one. |
| It is less efficient than multiprocessing. | It is more efficient than multitasking. |
| It requires more time to execute tasks as compared to multiprocessing. | It requires less time for job processing as compared to multitasking. |

## Socket
- Socket in OS is generally referred to as an endpoint for IPC (Interprocess Communication). 
- Here, the endpoint is referred to as a combination of an IP address and port number.  
- Sockets are used to make it easy for software developers to create network-enabled programs. 
- It also allows communication or exchange of information between two different processes on the same or different machines. 
- It is mostly used in client-server-based systems. 

## Zombie Process
- Zombie process  referred to as a defunct process, is basically a process that is terminated or completed but the whole process control block is not cleaned up from the main memory because it still has an entry in the process table to report to its parent process. 
- It does not consume any of the resources and is dead, but it still exists. It also shows that resources are held by process and are not free

## Kernel
- The kernel is basically a computer program usually considered as a central component or module of OS. 
- It is responsible for handling, managing, and controlling all operations of computer systems and hardware. 
- Whenever the system starts, the kernel is loaded first and remains in the main memory. 
- It also acts as an interface between user applications and hardware

## Functions of Kernel
- It is responsible for managing all computer resources such as CPU, memory, files, processes, etc.
- It facilitates or initiates the interaction between components of hardware and software.
- It manages RAM memory so that all running processes and programs can work effectively and efficiently.
- It also controls and manages all primary tasks of the OS as well as manages access and use of various peripherals connected to the computer.
- It schedules the work done by the CPU so that the work of each user is executed as efficiently as possible.

## Sections of Process
- Stack
- Heap
- Data
- Code or text

## Belday's Anomaly
- In the Operating System, process data is loaded in fixed-sized chunks and each chunk is referred to as a page. 
- The processor loads these pages in the fixed-sized chunks of memory called frames. 
- Belady’s Anomaly is a phenomenon in which if we increase the number of frames in memory, then the number of page faults also increases. 
- It is generally experienced when we use FIFO (First in First out) page replacement algorithm. 

## Spooling
- Spooling is referred to as putting data of various I/O jobs in a buffer. 
- It is used for mediation between a computer application and a slow peripheral. 
- It is very useful and important because devices access or acquire data at different rates. 
- This operation also uses disk as a very large buffer and is capable of overlapping I/O operations for one task with processor operations for another task


## Database Management System Notes
## Database
A database is a collection of related data which represents some aspect of the real world. A database system is designed to be built and populated with data for a certain task.

## Database Management System (DBMS) 
- DBMS is a software for storing and retrieving users' data while considering appropriate security measures. 
- It consists of a group of programs which manipulate the database. 
- The DBMS accepts the request for data from an application and instructs the operating system to provide the specific data. 
- In large systems, a DBMS helps users and other third-party software to store and retrieve data.
- Database management systems were developed to handle the following difficulties of typical File-processing systems supported by conventional operating systems.
1.	Data redundancy and inconsistency
2.	Difficulty in accessing data
3.	Data isolation – multiple files and formats
4.	Integrity problems
5.	Atomicity of updates
6.	Concurrent access by multiple users
7.	Security problems

## ER diagram:
- ER diagram or Entity Relationship diagram is a conceptual model that gives the graphical representation of the logical structure of the database.
- It shows all the constraints and relationships that exist among the different components.
- An ER diagram is mainly composed of following three components- Entity Sets, Attributes and Relationship Set.
- Roll_no is a primary key that can identify each entity uniquely.
- Thus, by using a student's roll number, a student can be identified uniquely.

## Entity Set:
An entity set is a set of the same type of entities.
- Strong Entity Set:
- A strong entity set is an entity set that contains sufficient attributes to uniquely identify all its entities.
- In other words, a primary key exists for a strong entity set.
- Primary key of a strong entity set is represented by underlining it.

## Weak Entity Set:
- A weak entity set is an entity set that does not contain sufficient attributes to uniquely identify its entities.
- In other words, a primary key does not exist for a weak entity set.
- However, it contains a partial key called a discriminator.
- Discriminator can identify a group of entities from the entity set.
- Discriminator is represented by underlining with a dashed line.

## Relationship:
A relationship is defined as an association among several entities.
- **Unary Relationship Set** - Unary relationship set is a relationship set where only one entity set participates in a relationship set.
- **Binary Relationship Set** - Binary relationship set is a relationship set where two entity sets participate in a relationship set.
- **Ternary Relationship Set** - Ternary relationship set is a relationship set where three entity sets participate in a relationship set.
- **N-ary Relationship Set** - N-ary relationship set is a relationship set where ‘n’ entity sets participate in a relationship set.

## Cardinality Constraint:
Cardinality constraint defines the maximum number of relationship instances in which an entity can participate.
- **One-to-One Cardinality** - An entity in set A can be associated with at most one entity in set B. An entity in set B can be associated with at most one entity in set A.
- **One-to-Many Cardinality** - An entity in set A can be associated with any number (zero or more) of entities in set B. An entity in set B can be associated with at most one entity in set A.
- **Many-to-One Cardinality** - An entity in set A can be associated with at most one entity in set B. An entity in set B can be associated with any number of entities in set A.
- **Many-to-Many Cardinality** - An entity in set A can be associated with any number (zero or more) of entities in set B. An entity in set B can be associated with any number (zero or more) of entities in set A.

## Attributes:
Attributes are the descriptive properties which are owned by each entity of an Entity Set.

## Types of Attributes:
- **Simple Attributes** - Simple attributes are those attributes which cannot be divided further. Ex. Age
- **Composite Attributes** - Composite attributes are those attributes which are composed of many other simple attributes. Ex. Name, Address
- **Multi Valued Attributes** - Multi valued attributes are those attributes which can take more than one value for a given entity from an entity set. Ex. Mobile No, Email ID 
- **Derived Attributes** - Derived attributes are those attributes which can be derived from other attribute(s). Ex. Age can be derived from DOB.
- **Key Attributes** - Key attributes are those attributes which can identify an entity uniquely in an entity set. Ex. Roll No.

## Constraints:
Relational constraints are the restrictions imposed on the database contents and operations. They ensure the correctness of data in the database.
- **Domain Constraint** - Domain constraint defines the domain or set of values for an attribute. It specifies that the value taken by the attribute must be the atomic value from its domain.
- **Tuple Uniqueness Constraint** - Tuple Uniqueness constraint specifies that all the tuples must be necessarily unique in any relation.
- **Key Constraint** - All the values of the primary key must be unique. The value of the primary key must not be null.
- **Entity Integrity Constraint** - Entity integrity constraint specifies that no attribute of primary key must contain a null value in any relation.
- **Referential Integrity Constraint** - It specifies that all the values taken by the foreign key must either be available in the relation of the primary key or be null.

## Closure of an Attribute Set:
The set of all those attributes which can be functionally determined from an attribute set is called a closure of that attribute set.

## Keys
A key is a set of attributes that can identify each tuple uniquely in the given relation. 

## Types of Keys:
- **Super Key** - A superkey is a set of attributes that can identify each tuple uniquely in the given relation. A super key may consist of any number of attributes.
- **Candidate Key** - A set of minimal attribute(s) that can identify each tuple uniquely in the given relation is called a candidate key.
- **Primary Key** - A primary key is a candidate key that the database designer selects while designing the database. Primary Keys are unique and NOT NULL.
- **Alternate Key** - Candidate keys that are left unimplemented or unused after implementing the primary key are called as alternate keys.
- **Foreign Key** - An attribute ‘X’ is called as a foreign key to some other attribute ‘Y’ when its values are dependent on the values of attribute ‘Y’. The relation in which attribute ‘Y’ is present is called as the referenced relation. The relation in which attribute ‘X’ is present is called as the referencing relation.
- **Composite Key** - A primary key composed of multiple attributes and not just a single attribute is called a composite key.
- **Unique Key** - It is unique for all the records of the table. Once assigned, its value cannot be changed i.e. it is non-updatable. It may have a NULL value.

## Functional Dependency:
In any relation, a functional dependency α → β holds if- Two tuples having same value of attribute α also have same value for attribute β.

## Types of Functional Dependency:
- **Trivial Functional Dependencies**
   - A functional dependency X → Y is said to be trivial if and only if Y ⊆ X.
   - Thus, if RHS of a functional dependency is a subset of LHS, then it is called a trivial functional dependency.
   
- **Non-Trivial Functional Dependencies**
   - A functional dependency X → Y is said to be non-trivial if and only if Y ⊄ X.
   - Thus, if there exists at least one attribute in the RHS of a functional dependency that is not a part of LHS, then it is called a non-trivial functional dependency.

## Decomposition of a Relation:
The process of breaking up or dividing a single relation into two or more sub relations is called the decomposition of a relation.

## Properties of Decomposition:
- **Lossless Decomposition** - Lossless decomposition ensures
   - No information is lost from the original relation during decomposition. o When the sub relations are joined back, the same relation is obtained that was decomposed.
- **Dependency Preservation** - Dependency preservation ensures
   - None of the functional dependencies that hold on the original relation are lost. o The sub relations still hold or satisfy the functional dependencies of the original relation.

## Types of Decomposition:
- **Lossless Join Decomposition:**
   - Consider there is a relation R which is decomposed into sub relations R1, R2, …., Rn.
   - This decomposition is called lossless join decomposition when the join of the sub relations results in the same relation R that was decomposed.
   - For lossless join decomposition, we always have- R1 ⋈ R2 ⋈ R3 ……. ⋈ Rn = R where ⋈ is a natural join operator
- **Lossy Join Decomposition:**
   - Consider there is a relation R which is decomposed into sub relations R1, R2, …., Rn.
   - This decomposition is called lossy join decomposition when the join of the sub relations does not result in the same relation R that was decomposed.
   - For lossy join decomposition, we always have- R1 ⋈ R2 ⋈ R3 ……. ⋈ Rn ⊃ R where ⋈ is a natural join operator

## Normalization:
In DBMS, database normalization is a process of making the database consistent by-
- Reducing the redundancies
- Ensuring the integrity of data through lossless decomposition

## Types of Normal Forms:
- **First Normal Form (1NF)** - A given relation is called in First Normal Form (1NF) if each cell of the table contains only an atomic value i.e. if the attribute of every tuple is either single valued or a null value.
- **Second Normal Form (2NF)** - A given relation is called in Second Normal Form (2NF) if and only if
   - Relation already exists in 1NF.
   - No partial dependency exists in the relation.
A → B is called a partial dependency if and only if- A is a subset of some candidate key and B is a non-prime attribute.

- **Third Normal Form (3NF)** - A given relation is called in Third Normal Form (3NF) if and only if
   - Relation already exists in 2NF.
   - No transitive dependency exists for non-prime attributes.
A → B is called a transitive dependency if and only if- A is not a super key and B is a non-prime attribute.

- Boyce-Codd Normal Form - A given relation is called in BCNF if and only if
   - Relation already exists in 3NF.
   - For each non-trivial functional dependency ‘A → B’, A is a super key of the relation.
 
## Transaction:
Transaction is a single logical unit of work formed by a set of operations.

### Operations in Transaction:
- **Read Operation** - Read(A) instruction will read the value of ‘A’ from the database and will store it in the buffer in main memory.
- **Write Operation** – Write(A) will write the updated value of ‘A’ from the buffer to the database.

## Transaction States:
- **Active State** –
   - This is the first state in the life cycle of a transaction.
   - A transaction is called in an active state as long as its instructions are getting executed.
   - All the changes made by the transaction now are stored in the buffer in main memory.

- **Partially Committed State** –
   - After the last instruction of the transaction has been executed, it enters into a partially committed state.
   - After entering this state, the transaction is considered to be partially committed.
   - It is not considered fully committed because all the changes made by the transaction are still stored in the buffer in main memory.

- **Committed State** –
   - After all the changes made by the transaction have been successfully stored into the database, it enters into a committed state.
   - Now, the transaction is considered to be fully committed.

- **Failed State** –
   - When a transaction is getting executed in the active state or partially committed state and some failure occurs due to which it becomes impossible to continue the execution, it enters into a failed state.
 
- **Aborted State** –
   - After the transaction has failed and entered into a failed state, all the changes made by it have to be undone.
   - To undo the changes made by the transaction, it becomes necessary to roll back the transaction.
   - After the transaction has rolled back completely, it enters into an aborted state.

- **Terminated State** –
   - This is the last state in the life cycle of a transaction.
   - After entering the committed state or aborted state, the transaction finally enters into a terminated state where its life cycle finally comes to an end.

## ACID Properties:
To ensure the consistency of the database, certain properties are followed by all the transactions occurring in the system. These properties are called as ACID Properties of a transaction.

- **Atomicity** –
   - This property ensures that either the transaction occurs completely or it does not occur at all.
   - In other words, it ensures that no transaction occurs partially.
- **Consistency** –
   - This property ensures that integrity constraints are maintained.
   - In other words, it ensures that the database remains consistent before and after the transaction.
- **Isolation** –
   - This property ensures that multiple transactions can occur simultaneously without causing any inconsistency.
   - The resultant state of the system after executing all the transactions is the same as the state that would be achieved if the transactions were executed serially one after the other.
- **Durability** –
   - This property ensures that all the changes made by a transaction after its successful execution are written successfully to the disk.
   - It also ensures that these changes exist permanently and are never lost even if there occurs a failure of any kind.


## Schedules:
The order in which the operations of multiple transactions appear for execution is called as a schedule.
- **Serial Schedules** –
   - All the transactions execute serially one after the other.
   - When one transaction executes, no other transaction is allowed to execute.
   - Serial schedules are always- Consistent, Recoverable, Cascadeless and Strict. ●
- **Non-Serial Schedules** –
   - Multiple transactions execute concurrently.
   - Operations of all the transactions are inter leaved or mixed with each other.
   - Non-serial schedules are not always- Consistent, Recoverable, Cascadeless and Strict.

## Serializability
- Some non-serial schedules may lead to inconsistency of the database.
- Serializability is a concept that helps to identify which non-serial schedules are correct and will maintain the consistency of the database.

## Serializable Schedules –
- If a given non-serial schedule of ‘n’ transactions is equivalent to some serial schedule of ‘n’ transactions, then it is called as a serializable schedule.
- Serializable schedules are always- Consistent, Recoverable, Cascadeless and Strict.
 
## Types of Serializability –
- **Conflict Serializability** - If a given non-serial schedule can be converted into a serial schedule by swapping its non-conflicting operations, then it is called a conflict serializable schedule.
- **View Serializability** - If a given schedule is found to be viewed as equivalent to some serial schedule, then it is called a view serializable schedule.

## Non-Serializable Schedules –
- A non-serial schedule which is not serializable is called a non-serializable schedule. 
- A non-serializable schedule is not guaranteed to produce the same effect as produced by some serial schedule on any consistent database.
- Non-serializable schedules- may or may not be consistent, may or may not be recoverable.

## Irrecoverable Schedules –
If in a schedule <br/>
- A transaction performs a dirty read operation from an uncommitted transaction
- And commits before the transaction from which it has read the value then such a schedule is known as an Irrecoverable Schedule.

## Recoverable Schedules –
If in a schedule <br/>
- A transaction performs a dirty read operation from an uncommitted transaction
- And its commit operation is delayed till the uncommitted transaction either commits or roll backs
then such a schedule is known as a Recoverable Schedule.

## Types of Recoverable Schedules –
- **Cascading Schedule** - If in a schedule, failure of one transaction causes several other dependent transactions to rollback or abort, then such a schedule is called as a Cascading Schedule or Cascading Rollback or Cascading Abort.
- **Cascadeless Schedule** - If in a schedule, a transaction is not allowed to read a data item until the last transaction that has written it is committed or aborted, then such a schedule is called as a Cascadeless Schedule.
- **Strict Schedule** - If in a schedule, a transaction is neither allowed to read nor write a data item until the last transaction that has written it is committed or aborted, then such a schedule is called as a Strict Schedule.
 
## Joins

## File Structures:
- **Primary Index:** A primary index is an ordered file, records of fixed length with two fields. First field is the same as the primary key as a data file and the second field is a pointer to the data block, where the key is available. The average number of block accesses using index = log2 Bi + 1, where Bi = number of index blocks.
- **Clustering Index:** Clustering index is created on data file whose records are physically ordered on a non-key field (called Clustering field).
- **Secondary Index:** Secondary index provides secondary means of accessing a file for which primary access already exists.


## B Trees
At every level , we have Key and Data Pointer and data pointer points to either block or record.

## Properties of B-Trees:
- Root of B-tree can have children between 2 and P, where P is Order of tree.
- Order of tree – Maximum number of children a node can have.
- Internal node can have children between ⌈ P/2 ⌉ and P Internal node can have keys between ⌈ P/2 ⌉ – 1 and P-1 B+ Trees

In B+ trees, the structure of leaf and non-leaf are different, so their order is. Order of non-leaf will be higher as compared to leaf nodes. Searching time will be less in B+ trees, since it doesn’t have record pointers in non-leaf because of which depth will decrease.

## Computer Networks Notes
## Data Flow
### Simplex Mode 
- The communication is unidirectional, as on a one-way street. 
- Only one of the two devices on a link can transmit; the other can only receive.
- Keyboards and traditional monitors are examples of simplex devices.

### Half-Duplex Mode
- Each station can both transmit and receive, but not at the same time. 
- When one device is sending, the other can only receive, and vice versa.
- The half-duplex mode is like a one-lane road with traffic allowed in both directions. 
- Walkie-talkies is an example of half-duplex systems

### Full-Duplex Mode 
- Both stations can transmit and receive simultaneously.
- The full-duplex mode is like a two-way street with traffic flowing in both directions at the same time. 
- In full-duplex mode, signals going in one direction share the capacity of the link: with signals going in the other direction. 
- This sharing can occur in two ways: Either the link must contain two physically separate transmission paths, one for sending and the other for receiving; or the capacity of the channel is divided between the signals traveling in both directions.

## Peer-to-Peer Network
- This type of network model forms a small environment of up to 10 computers by linking them together with equal privilege and responsibilities for data processing without any dedicated server.

## Client Server Network
- This is a client-server based network model that enables clients to access the resources like audios, videos from the Server. 
- Clients are all the computers or end users that communicate with each other through a server. 
- The Server is the central computer or central controller that makes a response to the clients ‘request and secures, manages the computer network.

## Hybrid Network
This network model is the combined architecture of the network models defined above.

## Components of Computer Network
- **NIC**: Netowrk Interface Card (NIC) is a physical network interface defined as the hardware component that enables a computer to connect to a network. It is used in both wired and wireless connections.

- **Hub**: A computer hub is a basic type of wired network device by which multiple connected computers can communicate via broadcast communication.

- **Switch**: Switch is a computer hardware component that is used to connect multiple devices on a computer network. Its feature are more advanced than features.

- **Router**: Router is a networking device used to connect a LAN with an internet connection that forwards data packets between computer networks.

- **Modem**: A modem (MOdulator/DEModulator) is a hardware device used to transmit digital data over transmission media like a telephone line, a cable or satellite etc.

- **Cables and Connectors**: Cable is a transmission media used for transmitting digital singals. Optical-Fibre Cable, Co-axial cable, and Twisted Pair Cable are the three types of cable used for transmission of digital signals.

## Topologies
A Network Topology is the arrangement with which computer systems or network devices are connected to each other. 

## Types of Topologies
### Bus Topology
- The bus topology is designed in such a way that all the stations are connected through a single cable known as a backbone cable.
- Each node is connected to the backbone cable by drop cable or directly connected to the backbone cable.
- The bus topology is mainly used in 802.3 (ethernet) and 802.4 standard networks.
- When a node wants to send a message over the network, it puts a message over the network. All the stations available in the network will receive the message whether it has been addressed or not.
- The backbone cable is considered as a “single lane” through which the message is broadcast to all the stations.

### Star Topology
- Star Topology is an arrangement of the network in which every node is connected to the central hub, switch or a central computer.
- The central computer is known as a server, and the peripherical devices attached to the server are known as clients.
- Coaxial cable or RJ-45 cables are used to connect the computers.
- Hub or Switches are mainly used as connection devices in a physical star topology.

### Ring Topology
- Ring topology is like a bus topology but with connected ends
- The node that receives the message from the previous computer will retransmit to the next node.
- The data flows in one direction, i.e., unidirectional
- The data flows in a single loop continuously known as an endless loop.
- It has no terminated ends.
- The data in a ring topology flow in a clockwise direction
- The most common access method of the ring topology is token passing
   - Token passing: is a network access method in which token is passed from one node to another node
   - Token: is a frame that circulates around the network.

### Mesh Topology
- Mesh technology is an arrangement of the network in which computers are interconnected with each other through various redundant connection
- There are multiple paths from one computer to another computer
- It does not contain the switch, hub or any central computer which acts as a central part of communication
- The internet is an example of the mesh technology
- Mesh topology is mainly used for WAN implementations where communication failures are a critical concern.
- Mesh topology is mainly used for wireless networks.

Mesh Topology is divided into two categories:
- **Full Mesh Topology:** Each computer is connected to all the computers available in the network.
- **Partial Mesh Topology:** Not all but certain computers are connected to those computers with which they can communicate frequently.

### Tree Topology




### Hybrid Topology


## Types of Networks
### LAN (Local Area Network)
This network is a connection of two or more personal computers spanned in a small area such as building, office through a communication medium such as twisted pair cable, coaxial cable, etc.

### PAN (Personal Area Network)
This network is spanned for personal use of computing devices (mobile phones, laptops, media player, and play stations), arranged within a person, typically within a range of 10 meters such as Bluetooth, Wi-Fi, USB, etc., and covers an area of 30 feet.

### MAN (Metropolitan Area Network)
This network is inter-connection of different LANs, covers a larger geographic area, uses between banks, and colleges in a city and airline reservation through a telephone exchange line.

### WAN (Wide Area Network)
This network spans over a large geographical area through a telephonic line, fiber optic cable or satellite links used in the sectors of Business, Government, and Education. The Internet is a broad network in the world.

## OSI Layers
- Physical Layer
- Data Link Layer
- Network Layer
- Transport Layer
- Session Layer
- Presentation Layer
- Application Layer

## Summary of Layers
- **Physical Layer:** It provides a physical medium through which bits are transmitted
- **Data Link Layer:** It is used for error free transfer of data frames
- **Network Layer:** It is responsible for moving the packets from source to destination
- **Transport Layer:** It provides reliable message delivery from process to process
- **Session Layer:** It is used to establish, manage and terminate the sessions
- **Presentation Layer:** It is responsible for translation, compressions encryption
- **Application Layer:** This layer provide the services to the users

## TCP/IP Model 
- **Physical Layer:** 
- **Data Link Layer:**
- **Network Layer:**
- **Transport Layer:**
- **Application Layer:**

## Difference between OSI and TCP/IP
|OSI | TCP/IP |
| -- |-------|
| 7 layered architecture | 4 layered architecture |
| Fixed boundaries and functionality for each layer | Flexible architecture with no strict boundaries between layers |
| Low Reliability	| High Reliability |

## IPv4 Address
- An IP address is a 32-bit dynamic address of a node in the network. 
- An IPv4 address has 4 octets of 8-bit each with each number with a value up to 255.
- IPv4 classes are differentiated based on the number of hosts it supports on the network. 
- There are five types of IPv4 classes and are based on the first octet of IP addresses which are classified as Class A, B, C, D, or E

## HTTP and HTTPS protocol
- HTTP is the HyperText Transfer Protocol which defines the set of rules and standards on how the information can be transmitted on the World Wide Web (WWW).  
- It helps the web browsers and web servers for communication. 
- It is a ‘stateless protocol’ where each command is independent with respect to the previous command. HTTP is an application layer protocol built upon the TCP. It uses port 80 by default.

- HTTPS is the HyperText Transfer Protocol Secure or Secure HTTP. It is an advanced and secured version of HTTP. On top of HTTP, SSL/TLS protocol is used to provide security. 
- It enables secure transactions by encrypting the communication and also helps identify network servers securely. It uses port 443 by default

## SMTP Protocol
- SMTP is the Simple Mail Transfer Protocol. 
- SMTP sets the rule for communication between servers. 
- This set of rules helps the software to transmit emails over the internet. - It supports both End-to-End and Store-and-Forward methods. 
- It is in always-listening mode on port 25

## DNS
- DNS is the Domain Name System. 
- It is considered as the devices/services directory of the Internet. 
- It is a decentralized and hierarchical naming system for devices/services connected to the Internet. 
- It translates the domain names to their corresponding IPs.

## Router vs Gateway
- Router is a networking device used for connecting two or more network segments. 
- It directs the traffic in the network. 
- It transfers information and data like web pages, emails, images, videos, etc. from source to destination in the form of packets. 
- It operates at the network layer. 
- The gateways are also used to route and regulate the network traffic but, they can also send data between two dissimilar networks while a router can only send data to similar networks

## Difference between TCP and UDP
| TCP | UDP |
|-----|-----|
| TCP is a connection-oriented protocol. Connection-orientation means that the communicating devices should establish a connection before transmitting data and should close the connection after transmitting the data. | UDP is the Datagram-oriented protocol. This is because there is no overhead for opening a connection, maintaining a connection, and terminating a connection. UDP is efficient for broadcast and multicast types of network transmission. |
| TCP is reliable as it guarantees the delivery of data to the destination router. | The delivery of data to the destination cannot be guaranteed in UDP. |
| TCP provides extensive error-checking mechanisms. It is because it provides flow control and acknowledgment of data. | UDP has only the basic error checking mechanism using checksums. |
| TCP is comparatively slower than UDP. | UDP is faster, simpler, and more efficient than TCP. |
| TCP has a (20-60) bytes variable length header. | UDP has an 8 bytes fixed-length header. |
| TCP doesn’t support Broadcasting. | UDP supports Broadcasting.|
| TCP is used by HTTP, HTTPs, FTP, SMTP and Telnet. | UDP is used by DNS, DHCP, TFTP, SNMP, RIP, and VoIP. |

## ICMP Protocol
- ICMP is the Internet Control Message Protocol. 
- It is a network layer protocol used for error handling. 
- It is mainly used by network devices like routers for diagnosing the network connection issues and crucial for error reporting and testing if the data is reaching the preferred destination in time. 
- It uses port 7 by default

## DHCP Protocol
- DHCP stands for Dynamic Host Configuration Protocol
- It is an application layer protocol used to auto-configure devices on IP networks enabling them to use the TCP and UDP-based protocols. 
- The DHCP servers auto-assign the IPs and other network configurations to the devices individually which enables them to communicate over the IP network. 
- It helps to get the subnet mask, IP address and helps to resolve the DNS. It uses port 67 by default.

## ARP Protocol
- ARP is  Address Resolution Protocol. 
- It is a network-level protocol used to convert the logical address i.e. IP address to the device's physical address i.e. MAC address. 
- It can also be used to get the MAC address of devices when they are trying to communicate over the local network.

## FTP Protocol
FTP is the most widely used protocol for file transfer over the network. FTP uses TCP/IP for communication and it works on TCP port 21.

FTP works on a client/server model where a client requests file from server and server sends requested resource back to the client.

FTP uses out-of-band controlling i.e. FTP uses TCP port 20 for exchanging controlling information and the actual data is sent over TCP port 21.

The client requests the server for a file. When the server receives a request for a file, it opens a TCP connection for the client and transfers the file. After the transfer is complete, the server closes the connection.

## MAC Address
- MAC address is the Media Access Control address. 
- It is a 48-bit or 64-bit unique identifier of devices in the network. 
- It is also called the physical address embedded with Network Interface Card (NIC) used at the Data Link Layer. 
- NIC is a hardware component in the networking device using which a device can connect to the network

## Subnet
- A subnet is a network inside a network achieved by the process called subnetting which helps divide a network into subnets. 
- It is used for getting a higher routing efficiency and enhances the security of the network. 
- It reduces the time to extract the host address from the routing table.

## Hub vs Switch
| Operates at Physical Layer | Operates at Data Link Layer |
| -------------------------- | --------------------------- |
| Hald Duplex Transmission Mode | Full Duplex Transmission Mode |
| Less efficient as there is no way to avoid collisions when more than one nodes sends the packets at the same time | More efficient as the collisions can be avoided or reduced as compared to Hub |

## Firewall
- A firewall is a network security device; it is a protective layer for the server that monitors and filters all the incoming and outgoing network traffic. It uses a set of rules to determine whether to allow or block a specific network traffic. 
- Firewalls can prevent unauthorized use before reaching the servers. Firewalls can be hardware or software-based.

## Types of Firewalls:
- **Packet Filters (Stateless Firewall)** − In the packet filters, if a packet matches then the packet filters set of rules and filters will drop or accept it.

- **Stateful firewall filters** − It is also known as a network firewall; this filter maintains a record of all the connections passing through. It can determine if a packet is either the start of a new connection or a part of an existing connection or is an invalid packet.

- **Application firewall** − A web application firewall is used for HTTP applications. There are sets of rules that are applied to monitor or block data packets from HTTP network traffic. 

## Unicasting vs Multicasting vs Broadcasting
- **Unicasting:** If the message is sent to a single node from the source then it is known as unicasting. This is commonly used in networks to establish a new connection

- **Multicasting:** If the message is sent to a subset of nodes from the source then it is known as multicasting. Used to send the same data to multiple receivers

**Broadcasting:** If the message is sent to all the nodes in a network from a source then it is known as broadcasting. DHCP and ARP in the local network use broadcasting.

## google.com
- The browser checks the cache first if the content is fresh and present in cache display the same.
- If not, the browser checks if the IP of the URL is present in the cache (browser and OS) if not then request the OS to do a DNS lookup using UDP to get the corresponding IP address of the URL from the DNS server to establish a new TCP connection.
- A new TCP connection is set between the browser and the server using three-way handshaking.
- An HTTP request is sent to the server using the TCP connection.
- The web servers running on the Servers handle the incoming HTTP request and send the HTTP response.
- The browser process the HTTP response sent by the server and may close the TCP connection or reuse the same for future requests.
- If the response data is cacheable then browsers cache the same.
Browser decodes the response and renders the content

## Domain Name System (DNS)
Domain Name System (DNS)
The Domain Name System (DNS) works on Client-Server Model. It used UDP protocol for transport layer communication. DNS uses hierarchical domain-based naming scheme.

The DNS server is configured with Fully Qualified Domain Names (FQDN) and email addresses mapped with their respective Internet protocol addresses.

A DNS server is requested with FQDN and it responds back with the IP address mapped with it. DNS uses UDP port 53
 
A primary server loads all information from the disk file; the secondary server loads all information from the primary server. 
When the secondary downloads information from the primary, it is called zone transfer.

DNS is a protocol that can be used in different platforms. In the Internet, the domain name space (tree) is divided into three different sections: generic domains, country domains, and the inverse domain.

## Working of DNS:
- DNS is a client/server network communication protocol. DNS clients send requests to the server while DNS servers send responses to the requests.
- Client requests contains a name which is converted into an IP address known as a forward DNS lookups while requests containing an IP address which is converted into a name known as reverse DNS lookups.
- DNS implements a distributed database to store the name of all the hosts available on the Internet.
- If a client like a web browser sends a request containing a hostname, then a piece of software such as DNS resolver sends a request to the DNS server to obtain the IP address associated with a hostname, then it forwards the request to another DNS server.

## Simple Mail Transfer Protocol (STMP)
- The Simple Mail Transfer Protocol (SMTP) is used to transfer electronic mail from one user to another. 
- This task is done by means of email client software (User Agents) the user is using. 
- User Agents help the user to type and format the email and store it until Internet is available.
- When an email is submitted to send, the sending process is handled by Message Transfer Agent which is normally comes inbuilt in email client software.
- Message Transfer Agent uses SMTP to forward the email to another Message Transfer Agent (Server Side). 
- While SMTP is used by end user to only send the emails, the servers normally use SMTP to send as well as receive emails. 
- SMTP uses TCP port 25 and 587.

- Client software uses Internet Access Protocol (IMAP) or Post Office Protocol (POP) protocols to receive emails.

## Simple Network Management Protocol (SNMP)
- It is a framework used for managing devices on the internet.
- It provides a set of operations for monitoring and managing the internet
- It has two components Manager and Agent
- The manager is a host that controls and monitors a set of agents such as routers.
- The protocol designed at the application layer protocol in which a few monitor devices made by different manufacturers and installed on different physical networks.
- It is used in a heterogeneous network made of different LANs and WANs connected by routers or gateways.

### Management with SNMP has three basic ideas:
- A manager checks the agent by requesting the information that reflects the behaviour of the agent.
- A manager also forces the agent to perform a certain function by resetting values in the agent database.
- An agent also contributes to the management process by warning the manager regarding an unusual condition.
 
### Management Components:
Management is not achieved only through SNMP protocol. It is achieved through the use of the other two protocols SMI and MIB.
 
### Structure of Management Information (SMI)
- It is a concept used in network management. 
- Its main function is to define the type of data that can be stored in an object and to show how to encode the data for the transmission over a network.

### Management Information Base (MIB)
MIB is a second component for the network management. Each agent has its own MIB, which is a collection of all the objects that the manager can manage.

MIB is categorized into eight groups: system, interface, address translation, ip, icmp, tcp, udp and egp.

## File Transfer Protocol (FTP)
- FTP is the most widely used protocol for file transfer over the network. 
- FTP uses TCP/IP for communication and it works on TCP port 21.
- FTP works on a client/server model where a client requests file from server and server sends requested resource back to the client.
- FTP uses out-of-band controlling i.e. FTP uses TCP port 20 for exchanging controlling information and the actual data is sent over TCP port 21.
- The client requests the server for a file. 
- When the server receives a request for a file, it opens a TCP connection for the client and transfers the file. 
- After the transfer is complete, the server closes the connection.

## Hyper Text Transfer Protocol (HTTP)
- The Hyper Text Transfer Protocol (HTTP) is the foundation of World Wide Web. 
- Hypertext is well organized documentation system which uses hyperlinks to link the pages in the text documents.
- HTTP works on a client server model. When a user wants to access any HTTP page on the internet, the client machine at user end initiates a TCP connection to server on port 80. 
- When the server accepts the client request, the client is authorized to access web pages.
- HTTP uses the services of TCP on well-known port 80.
- To access the web pages, a client normally uses web browsers, who are responsible for initiating, maintaining, and closing TCP connections.
- HTTP is a *stateless* protocol which means the server maintains no information about earlier requests by clients.
 
### HTTP versions:
- HTTP 1.0 uses non-persistent HTTP. At most one object can be sent over a single TCP connection.
- HTTP 1.1 uses persistent HTTP. In this version, multiple objects can be sent over a single TCP connection.

### World Wide Web (WWW)
- The WWW today is a distributed client/server service, in which a client using a browser can access a service using a server. 
- However, the service provided is distributed over many locations called sites.
- The documents in the WWW can be grouped into three broad categories: static, dynamic, and active. 
- The category is based on the time at which the contents of the document are determined.

## Cryptography
- Cryptography refers to the science and art of transforming messages to make them secure and immune to attacks. 
- It is a method of storing and transmitting data in a particular form so that only those for whom it is intended can read and process it.
- Cryptography not only protects data from theft or alteration but can also be used for user authentication.

## Components of Cryptography:
- Plaintext and Ciphertext: The original message, before being transformed, is called **plaintext.** 
- After the message is transformed, it is called **ciphertext.** 
- An encryption algorithm transforms the plaintext into ciphertext; a decryption algorithm transforms the ciphertext back into plaintext. 
- The sender uses an encryption algorithm, and the receiver uses a decryption algorithm.

- **Cipher:** Cipher is used to refer encryption and decryption algorithms. It is also used to refer to different categories of algorithms in cryptography.

- **Key:** is number (or a set of numbers) that the cipher, as an algorithm, operates on. To encrypt a message, we need an encryption algorithm, an encryption key and plaintext. These create the ciphertext.

To decrypt a message, we need a decryption algorithm, a decryption key, and the ciphertext. These reveal the original plaintext.

### Types of Cryptography:
- **Symmetric Key Cryptography:** In symmetric-key cryptography, the same key is used by both parties. The sender uses this key and an encryption algorithm to encrypt data; the receiver uses the same key and the corresponding decryption algorithm to decrypt the data.
 
- **Asymmetric Key Cryptography:** In asymmetric or public-key cryptography, there are two keys: a private key and a public key. The private key is kept by the receiver. The public key is announced to the public.

In public-key encryption/decryption, the public key that is used for encryption is different from the private key that is used for decryption. The public key is available to the public, and the private key is available only to an individual.
 
## Digital Signature
- Digital Signatures: is a technique which is used to validate the authenticity and integrity of the message.
- It allows us to verify the author, date and time of signatures, authenticate the message contents. 
- It also includes authentication function for additional capabilities.
- The basic idea behind the Digital Signature is to sign a document. When we send a document electronically, we can also sign it. 
- We can sign a document in two ways: to sign a whole document and to sign a digest.

### Digital Signature is used to achieve the following three aspects:
- Integrity
- Authentication
- Non-Repudiation

## Firewalls
- A firewall is a network security device; it is a protective layer for the server that monitors and filters all the incoming and outgoing network traffic. 
- It uses a set of rules to determine whether to allow or block a specific network traffic. 
- Firewalls can prevent unauthorized use before reaching the servers. Firewalls can be hardware or software-based.

### Types of Firewalls:
- **Packet Filters (Stateless Firewall)** − In the packet filters, if a packet matches then the packet filters set of rules and filters will drop or accept it.

- **Stateful firewall filters** − It is also known as a network firewall; this filter maintains a record of all the connections passing through. It can determine if a packet is either the start of a new connection or a part of an existing connection or is an invalid packet.

- **Application firewall** − A web application firewall is used for HTTP applications. There are sets of rules that are applied to monitor or block data packets from HTTP network traffic. 


## Linux Notes
## Linux Commands
- ls: it lists files and directories
- grep: this finds text in a file. The grep command searches through many files at a time to find a piece of text you are looking for.
- sudo:
- pwd: print working directory
- mv: move
- cp: command copies a file. The cp command issues a copy of the file 
- rm: remove files in a directory or the directory itself.
- mkdir: command makes a directory.
- chmod: command changes the mode of a file system object. Files can have read, write, and execute permissions.
- chown: command is used to change the ownership of a file/folder or even multiple files/folders for a specified user/group.
- cat: catcommand allows you to create single or multiple files, view contents of files, concatenate files (combining files), and redirect output in terminal or files.
- echo: command is used to display a text or a string to the standard output or a file.
- wc: command is used to find out the number of new lines, word count, byte, and characters count in a file specified by the file arguments.
- man: command is used to view the online reference manual pages for commands/programs.
- history: command is used to show previously used commands or obtain information about the commands executed by a user.
- locate: command is used to find a file and runs in the background, unlike the find command.
- diff: command compares two files line by line to find differences. The output will be the lines that are different.
- useradd: command creates a new user. The username is added after the useradd command
- exit: command exits the current shell.
- kill: command is used to end a process, usually an unresponsive one. The kill command also includes the process ID or the program name

