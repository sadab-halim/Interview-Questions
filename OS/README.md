## Operating System
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

## Process vs Thread ✅
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
    
## Scheduler ✅
- Schedulers are special system software which handle process scheduling in various ways. 
- Their main task is to select the jobs to be submitted into the system and to decide which process to run.

| Long Term Scheduler | Short Term Scheduler | Mid Term Scheduler |
| ------------------- | -------------------- | ------------------ |
| It is a job scheduler | It is a CPU scheduler | It is a process swapping scheduler. |
| Speed is lesser than short term scheduler | Speed is fastest among other two | Speed is in between both short and long term scheduler. |
| It controls the degree of multiprogramming | It provides lesser control over degree of multiprogramming | It reduces the degree of multiprogramming. |
| It is almost absent or minimal in time sharing system | It is also minimal in time sharing system | It is a part of Time sharing systems. |
| It selects processes from pool and loads them into memory for execution | It selects those processes which are ready to execute | It can re-introduce the process into memory and execution can be continued. |

## Dispatcher ✅
- A dispatcher is a special program which comes into play after the scheduler. 
- When the scheduler completes its job of selecting a process, it is the dispatcher which takes that process to the desired state/queue. 
- The dispatcher is the module that gives a process control over the CPU after it has been selected by the short-term scheduler. 

## Scheduler and Dispatcher ✅
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

## Preemtive Scheduling vs Non-Preemptive Scheduling ✅
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

## Types of Scheduling Algorithms ✅
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
- The processor should know in advance how much time process will take.

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

## Context Switching ✅
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

## Deadlock ✅
- Deadlock is a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process. 

- Consider an example when two trains are coming toward each other on the same track and there is only one track, none of the trains can move once they are in front of each other. 

- A similar situation occurs in operating systems when there are two or more processes that hold some resources and wait for resources held by other(s). 

- For example, in the below diagram, Process 1 is holding Resource 1 and waiting for resource 2 which is acquired by process 2, and process 2 is waiting for resource 1. 

## Necessary Conditions of Deadlock ✅
- **Mutual Exclusion:** Two or more resources are non-shareable (Only one process can use at a time) 
- **Hold and Wait:** A process is holding at least one resource and waiting for resources. 
- **No Preemption:** A resource cannot be taken from a process unless the process releases the resource. 
- **Circular Wait:** A set of processes are waiting for each other in circular form. 

## Effects of Deadlock ✅
- If the operating system has a deadlock prevention or detection system in place, this will have a negative impact on performance (slow the system down) because whenever a process or thread requests a resource, the system will have to check whether granting this request could cause a potential deadlock situation.

## Methods for Handling Deadlock ✅
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

## Logical vs Physical Address Space ✅ 
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


## Starvation
- It is generally a problem that usually occurs when a process has not been able to get the required resources it needs for progress with its execution for a long period of time. 
- In this condition, low priority processes get blocked and only high priority processes proceed towards completion because of which low priority processes suffer from lack of resources. 

## Aging
- It is a technique that is used to overcome the situation or problem of starvation. 
- It simply increases the priority of processes that wait in the system for resources for a long period of time. 
- It is considered the best technique to resolve the problem of starvation as it adds an aging factor to the priority of each and every request by various processes for resources. 
- It also ensures that low-level queue jobs or processes complete their execution





## Semaphore ✅
Semaphore is defined as an integer variable which is used to solve the problem of the critical section in process synchronization. In semaphore, we use two types of atomic operations, and that operations are wait and signal.

The definitions of wait and signal are as follows:
- **Wait:** - In wait operation, the argument ‘S’ value is decrement by 1 if the value of the ‘S’ variable is positive. If the value of the argument variable ‘S’ is zero or negative, no operation is performed.
- **Signal:** - In Signal atomic operation, the value of the argument variable ‘S’ is incremented.

## Types of Semaphores ✅
- **Counting Semaphores:** is defined as a semaphore that contains integer values, and these values have an unrestricted value domain. A counting semaphore is helpful to coordinate the resource access, which includes multiple instances.
- **Binary Semaphores:** are also called Mutex lock. There are two values of binary semaphores, which are 0 and 1. The value of binary semaphore is initialized to 1. We use binary semaphore to remove the problem of the critical section with numerous processes.

|Counting Semaphore | Binary Semaphore |
| ----------------- | ---------------- |
| In counting semaphore, there is no mutual exclusion. | In binary semaphore, there is mutual exclusion. |
| In the counting semaphore, any integer value can be possible. | It contains only two integer values that are 1 and 0. |
| In counting semaphore, there are more than one slots.	 | In the binary semaphore, there is only one slot. |
| The counting process offers a set of processes. | Binary semaphore contains mutual exclusion mechanism. |

### Difference between Semaphore and Mutex ✅
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

## Paging vs Segmentation ✅
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


## Virtual Memory ✅
- It is a memory management technique feature of OS that creates the illusion to users of a very large (main) memory. 
- It is simply space where a greater number of programs can be stored by themselves in the form of pages. 
- It enables us to increase the use of physical memory by using a disk and also allows us to have memory protection. 
- It can be managed in two common ways by OS i.e., paging and segmentation. It acts as temporary storage that can be used along with RAM for computer processes.  

## Why Virtual Memory
- It frees up RAM by swapping data that has not been used recently over to a storage device, such as a hard drive or solid-state drive (SSD). 
- It is important for improving system performance, multitasking and using large programs.

## Working of Virtual Memory ✅
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

## Demand Paging ✅
- Demand paging is a process that keeps pages of a process that are infrequently used in secondary memory, and pulls them only when required to satisfy the demand. <br/>
- It is also called lazy swapper because the swapping of pages is done only when the CPU requires it. 
- Example: Imagine that you are scrolling through an e-commerce platform and like some clothes. However, since you don't have space in your wardrobe, you save it in your wishlist and decide to buy them only when needed.

## Pure Demand Paging ✅
- There are cases when no pages are loaded into the memory initially, pages are only loaded when demanded by the process by generating page faults. 
- This is called Pure Demand Paging. In pure demand paging, even a single page is not loaded into memory initially. 
- Hence pure demand paging causes a page fault.

## Swap In and Swap Out
- When the primary memory (RAM) is insufficient to store data required by several applications, we use a method known as swap out to transfer certain programs from RAM to the hard drive.
- Similarly, when RAM becomes available, we swap in the applications from hard disk to RAM. We may manage many processes inside the same RAM by using swaps. 

## Page Fault
A Page Fault occurs when a program running in CPU tries to access a page that is in the address space of that program, but the requested page is currently not loaded into the main physical memory, the RAM of the system.

## Swap Space ✅
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

## Thrasing ✅
- It is generally a situation where the CPU performs less productive work and more swapping or paging work. 
- It spends more time swapping or paging activities rather than its execution. 
- By evaluating the level of CPU utilization, a system can detect thrashing. 
- It occurs when the process does not have enough pages due to which the page-fault rate is increased. 
- It inhibits much application-level processing that causes computer performance to degrade or collapse

## Causes of Thrasing ✅
- High degree of multiprogramming
- Less number of frames compared to the processes required.
- The process scheduling scheme which swaps in more processes when CPU utilization is low.

## How to Overcome Thrasing? ✅
- The thrashing effect can be prevented by allocating each process as many frames as it requires during run. 
- To find out the number of frames required by a process, we can use the locality model. A locality is a set of pages that are actively used together. 
- The locality model says that during execution, a process shifts from one locality to another, and these localities may overlap. We have to provide enough frames to a process to stop page faulting in the current locality.
- If the system is already in the thrashing state, the process scheduler can be instructed to suspend some of the processes.

## Frame Rate
- Frame rate is the frequency in which a consecutive series of frames or images can appear on a display panel
- It is also known as *burst rate* or *update rate*

## What is RAID structure in OS? What are the different levels of RAID configuration? ✅
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


## Multiprogramming
- It it is the coordination of execution of various programs simultaneously on a single processor (CPU). 
- The main objective of multiprogramming is to have at least some processes running at all times. 
- It simply improves the utilization of the CPU as it organizes many jobs where the CPU always has one to execute. 

## Multitasking and Multiprocessing ✅
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

## Zombie Process ✅
- Zombie process  referred to as a defunct process, is basically a process that is terminated or completed but the whole process control block is not cleaned up from the main memory because it still has an entry in the process table to report to its parent process. 
- It does not consume any of the resources and is dead, but it still exists. It also shows that resources are held by process and are not free

## Kernel ✅
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

## Spooling ✅
- Spooling is referred to as putting data of various I/O jobs in a buffer. 
- It is used for mediation between a computer application and a slow peripheral. 
- It is very useful and important because devices access or acquire data at different rates. 
- This operation also uses disk as a very large buffer and is capable of overlapping I/O operations for one task with processor operations for another task

