# Questions

## What is Java, and why is it platform-independent?
- Java is a high-level, object-oriented programming language. 
- It's platform-independent due to its bytecode, which can run on any system with a Java Virtual Machine (JVM).

## Explain JDK, JRE, and JVM.
- JDK (Java Development Kit): Includes tools for developing and compiling Java code.
- JRE (Java Runtime Environment): Provides libraries and resources to run Java applications.
- JVM (Java Virtual Machine): Interprets and executes Java bytecode on the host system.

## What are the main features of Java?
- Platform independence
- object-oriented
- simple and secure 
- robust
- architecture-neutral
- portable
- high performance
- multithreaded and dynamic.

## What are the primitive data types in Java?
byte, short, int, long, float, double, boolean, and char.

## What is the difference between '==' and 'equals()'?
== compares object references (memory addresses), while equals() compares object content (values).

## Explain access modifiers in Java.
- **public**: Accessible everywhere.
- **private**: Accessible only within the class.
- **protected**: Accessible within the package and subclasses in other packages.
- **default**: Accessible within the package.

## What is the difference between a class and an object?
A class is a blueprint or template for creating objects, while an object is an instance of a class.

## Explain constructors in Java.
Constructors are special methods used to initialize objects when they are created. They have the same name as the class and don't have a return type.

## What is the difference between static and non-static variables/methods?
Static members belong to the class itself, while non-static members belong to objects (instances) of the class.

## Explain the final keyword.
final makes variables unchangeable, methods non-overridable, and classes non-inheritable.

## What is garbage collection in Java? How does it work?
- Garbage collection automatically reclaims memory occupied by objects that are no longer referenced.
- The JVM tracks object references and determines which objects are eligible for garbage collection.

## Explain the concept of OOPs (Object-Oriented Programming)
- OOPs is a programming paradigm based on the concept of objects, which contain data and code to manipulate that data. 
- It promotes modularity, reusability, and maintainability.

## What are the pillars of OOPs? (Abstraction, Encapsulation, Inheritance, Polymorphism)
- **Abstraction**: Hiding implementation details and exposing only essential features.
- **Encapsulation**: Bundling data and methods that operate on the data within a single unit (class).
- **Inheritance**: Creating new classes (subclasses) from existing classes (superclasses) to - reuse and extend functionality.
- **Polymorphism**: The ability of objects of different classes to respond to the same method call in different ways.

## Explain the difference between method overloading and method overriding.
- **Method overloading**: Defining multiple methods with the same name but different parameters in the same class.
- **Method overriding**: Redefining a method inherited from a superclass in a subclass with the same signature.

## What is an interface, and how is it different from an abstract class?
- Both define a contract without providing full implementation
- An interface can only have abstract methods and constants, while an abstract class can have both abstract and concrete methods
- A class can implement multiple interfaces but can extend only one abstract class.

## Explain the super and this keywords.
super refers to the superclass (parent class), while this refers to the current object.

## What is exception handling in Java?
Exception handling is a mechanism to handle runtime errors (exceptions) gracefully, preventing the program from crashing.

## Explain the difference between checked and unchecked exceptions.
Checked exceptions are checked at compile time and must be handled or declared using throws, while unchecked exceptions occur at runtime and are not required to be handled explicitly.

## What is the use of the finally block?
- The finally block is executed regardless of whether an exception is thrown or not. 
- It's typically used to release resources or perform cleanup tasks.

## What are collections in Java? Explain List, Set, and Map interfaces.
- Collections are frameworks for storing and manipulating groups of objects.
    - **List**: Ordered collection allowing duplicates. (e.g., ArrayList, LinkedList)
    - **Set**: Unordered collection not allowing duplicates. (e.g., HashSet, TreeSet)
    - **Map**: Collection of key-value pairs where each key is unique. (e.g., HashMap, TreeMap)

## Is Java Platform Independent, How?
- Yes, Java is considered a platform-independent programming language. 
- This means you can write Java code once and run it on different operating systems (Windows, macOS, Linux, etc.) without needing to modify the code itself.

## Explain JVM
- JVM, or Java Virtual Machine, is a core component that enables Java's platform independence. 
- It acts as a kind of translator and execution engine for Java programs.

## Explain JIT
- JIT stands for Just-In-Time compilation. 
- It's a performance optimization technique built into the JVM (Java Virtual Machine) that boosts the execution speed of Java applications at runtime.

## Difference between JVM, JRE and JDK
**JVM**: JVM also known as Java Virtual Machine is a part of JRE. JVM is a type of interpreter responsible for converting bytecode into machine-readable code. JVM itself is platform dependent but it interprets the bytecode which is the platform-independent reason why Java is platform-independent. 

**JRE**: JRE stands for Java Runtime Environment, it is an installation package that provides an environment to run the Java program or application on any machine.

**JDK**: JDK stands for Java Development Kit which provides the environment to develop and execute Java programs. JDK is a package that includes two things Development Tools to provide an environment to develop your Java programs and, JRE to execute Java programs or applications.

## public static void main (String[] args)
- **public**: the public is the access modifier responsible for mentioning who can access the element or the method and what is the limit.  It is responsible for making the main function globally available. It is made public so that JVM can invoke it from outside the class as it is not present in the current class.

- **static**: static is a keyword used so that we can use the element without initiating the class so to avoid the unnecessary allocation of the memory. 

- **void**: void is a keyword and is used to specify that a method doesn’t return anything. As the main function doesn’t return anything we use void.

- **main**: main represents that the function declared is the main function. It helps JVM to identify that the declared function is the main function.

- **String args[]**: It stores Java command-line arguments and is an array of type java.lang.String class.

## Explain Java stack and heap memory
Java memory management involves two main areas: stack and heap
- **Stack**:
    - **Purpose**: Stores method execution data and local variables.
    - **Allocation**: Fixed size, allocated at program start.
    - **Access**: Fast, LIFO (Last-In-First-Out) order, thread-specific.
    - **Lifetime**: Short-lived, freed when method execution completes.
    - **Content**: Primitive data types (int, float, etc.) and references to heap objects.
- **Heap**:
    - **Purpose**: Stores objects and their data.
    - **Allocation**: Dynamic, grows as needed at runtime.
    - **Access**: Slower than stack, global access for all threads.
    - **Lifetime**: Until explicitly garbage collected (cleaned by JVM).
    - **Content**: Objects and their instance variables.

## What is Java String Pool?
- A Java String Pool is a place in heap memory where all the strings defined in the program are stored. 
- A separate place in a stack is there where the variable storing the string is stored.
- Imagine the String Pool as a dictionary in Java. 
- When you create a word (String literal) using quotes, the program checks the dictionary first. 
- If the same word already exists, it shares that instead of creating a new one, saving memory and making things faster.

## What will happen if we declare don’t declare the main as static?
- We can declare the main method without using static and without getting any errors. 
- But, the main method will not be treated as the entry point to the application or the program.

## How many types of packages are there in Java?
There are two types of packages in Java:
- User-defined packages
- Build in packages

## Explain different data types in Java.
There are 2 types of data types in Java:
- Primitive Data Type
- Non-Primitive Data Type (Object Data Type): Strings, Arrays, Class, Object, Interface

## Why their is no concept of pointer in Java?
Java doesn't have the concept of pointers due to 3 main reasons:
- **Safety**: Pointers can be risky, so Java avoids them to make programs more secure.
- **Simplicity**: References are easier to use than pointers, making Java code cleaner and less error-prone.
- **Platform Independence**: References work on any system, keeping Java's "write once, run anywhere" promise.

## What is Wrapper Class in Java?
In Java, wrapper classes are like gift boxes for primitive data types (like int, double, etc.). They convert these basic data types into objects.

## Why do we need wrapper classes?
The wrapper class is an object class that encapsulates the primitive data types, and we need them for the following reasons:
- Wrapper classes are final and immutable
- Provides methods like valueOf(), parseInt(), etc.
- It provides the feature of autoboxing and unboxing.

<br/>

- **Autoboxing**: is the automatic conversion of a primitive value into an object of its corresponding wrapper class.
- **Unboxing**: is the automatic conversion of a wrapper class object into its corresponding primitive type.

## Difference b/w Sleep() and Wait()
| Sleep() | Wait() |
| ------- | ------ |
| The sleep() method belongs to the thread class. | Wait() method belongs to the object class. |
| Sleep does not release the lock that the current thread holds. | wait() release the lock which allows other threads to acquire it. |
| This method is a static method. | This method is not a static method. |
| Sleep() does not throw an InterruptedException. | InterruptedException is shown if the thread is interrupted while waiting. |
| Mainly used to delay a thread for some specific time duration. | Mainly used to pause a thread until notified by another thread. |
| Sleep() Has Two Overloaded Methods: sleep(long millis)millis: milliseconds and sleep(long millis, int nanos) nanos: Nanoseconds | Wait() Has Three Overloaded Methods: wait(), wait(long timeout) and wait(long timeout, int nanos) |

## Difference between String and StringBuffer
| String | StringBuffer |
| ------ | ------------ |
| Store of a sequence of characters. | Provides functionality to work with the strings. |
| It is immutable. | It is mutable (can be modified and other string operations could be performed on them.) |
| No thread operations in a string. | It is thread-safe (two threads can’t call the methods of StringBuffer simultaneously)  |

## Difference between StringBuffer and StringBuilder
| StringBuffer | StringBuilder |
| ------------ | ------------- |
| StringBuffer provides functionality to work with the strings. | StringBuilder is a class used to build a mutable string. |
| It is thread-safe (two threads can’t call the methods of StringBuffer simultaneously) | It is not thread-safe (two threads can call the methods concurrently) |
| Comparatively slow as it is synchronized. | Being non-synchronized, implementation is faster |

## How is the creation of a String using new() different from that of a literal?
String using new() is different from the literal as when we declare string it stores the elements inside the stack memory whereas when it is declared using new() it allocates a dynamic memory in the heap memory. The object gets created in the heap memory even if the same content object is present.

## On which memory arrays are created in Java?
Arrays in Java are created in heap memory. When an array is created with the help of a new keyword, memory is allocated in the heap to store the elements of the array. In Java, the heap memory is managed by the Java Virtual Machine(JVM)

## How to copy an array in Java?
In Java there are multiple ways to copy an Array based on the requirements:
- **clone()** method in Java: This method in Java is used to create a shallow copy of the given array which means that the new array will share the same memory as the original array.

- **arraycopy()** method: To create a deep copy of the array we can use this method which creates a new array with the same values as the original array.

- **copyOf()** method: This method is used to create a new array with a specific length and copies the contents of the original array to the new array.

- **copyOfRange()** method: This method is very similar to the copyOf() method in Java, but this method also allows us to specify the range of the elements to copy from the original array.

## Shallow Copy vs Deep Copy
- **Shallow copy**: Copies object references, but referenced objects themselves are not copied. Changes in one object can affect the other. (Think of it like editing the photocopied first page, which also edits the original document.)

- **Deep copy**: Creates entirely new objects with independent copies of data. Changes in one object won't affect the other.

## What is Jagged Array?
A jagged Array in Java is just a two-dimensional array in which each row of the array can have a different length.

## What are the different ways to create objects in Java?
Methods to create objects in Java are mentioned below:
- Using new keyword
- Using new instance
- Using clone() method
- Using deserialization

## Interface in Java
- An Interface in Java programming language is defined as an abstract type used to specify the behavior of a class
- An interface in Java is a blueprint of a behavior. 
 - A Java interface contains static constants and abstract methods.
- A Java interface contains static constants and abstract methods.

### Features:
- The interface can help to achieve total abstraction.
- Allows us to use multiple inheritances in Java.
- Any class can implement multiple interfaces even when one class can extend only one class.
- It is also used to achieve loose coupling

## What is Marker Interface?
An Interface is recognized as an empty interface (no field or methods) it is called a marker interface. Examples of marker interfaces are Serializable, Cloneable, and Remote interfaces

## Difference between Abstract and Interface
| Abstract | Intergave | 
| -------- | --------- |
| Both abstract and non-abstract methods may be found in an abstract class. | The interface contains only abstract methods. |
| Abstract Class supports Final methods. | The interface class does not support Final methods. |
| Multiple inheritance is not supported by the Abstract class. | Multiple inheritances is supported by Interface Class. |
| Abstract Keyword is used to declare Abstract class. | Interface Keyword is used to declare the interface class. |
| extend keyword is used to extend an Abstract Class. | implements Keyword is used to implement the interface. |
| Abstract Class has members like protected, private, etc. | All class members are public by default. |

## Can you have virtual functions in Java?
Yes, Java supports virtual functions. Functions are by default virtual and can be made non-virtual using the final keyword.

## What is an enumeration?
Enumeration is a user-defined data type. It is mainly used to assign names to integral constants, the names make a program easy to read and maintain. The main objective of the enum is to define user-defined data types.

## Collection and Collections
| Collection | Collections |
| ---------- | ----------- |
| The Collection is an Interface. | Collections is a class. |
| It provides the standard functionality of data structure. | It is to sort and synchronize the collection elements. |
| It provides the methods that can be used for the data structure. | It provides static methods that can be used for various operations. |

## Array and ArrayList
| Array | ArrayList |
| ----- | --------- |
| Single-dimensional or multidimensional  | Single-dimensional  |
| length keyword returns the size of the array.  | size() method is used to compute the size of ArrayList. |
| The array has Fixed-size. | ArrayList size is dynamic and can be increased or decreased in size when required. |
| It is faster as above we see it of fixed size | It is relatively slower because of its dynamic nature  |
| Primitive data types can be stored directly in unlikely objects. | Primitive data types are not directly added to unlikely arrays, they are added indirectly with help of autoboxing and unboxing |
| They can not be added here hence the type is in the unsafe. | They can be added here hence makingArrayList type-safe.  |
| The assignment operator only serves the purpose | Here a special method is used known as add() method   |

## ArrayList and LinkedList
| ArrayList | LinkedList |
| --------- | ---------- |
| ArrayList is Implemented as an expandable Array. | LinkedList is Implemented as a doubly-linked list. |
| In ArrayList, Elements are stored in contiguous memory locations  | LinkedList Elements are stored in non-contiguous memory locations as each element has a reference to the next and previous elements. |
| ArrayLists are faster for random access. | LinkedLists are faster for insertion and deletion operations |
| ArrayLists are more memory efficient. | LinkedList is less memory efficient |
| ArrayLists Use more memory due to maintaining the array size. | LinkedList Uses less memory as it only has references to elements |
| The search operation is faster in ArrayList. | The search operation is slower in LinkedList |

## HashMap and HashTable
| HashMap | HashTable |
| ------- | --------- |
| HashMap is not synchronized | HashTable is synchronized |
| One key can be a NULL value | NULL values not allowed |
| The iterator is used to traverse HashMap. | Both Iterator and Enumertar can be used |
| HashMap is faster. | HashTable is slower as compared to HashMap. |

## Comparable and Comparator
| Comporable | Comparator |
| ---------- | ---------- |
| The interface is present in java.lang package. | The Interface is present in java.util package. |
| Provides compareTo() method to sort elements. | Provides compare() method to sort elements. |
| It provides single sorting sequences. | It provides multiple sorting sequences. |
| The logic of sorting must be in the same class whose object you are going to sort. | The logic of sorting should be in a separate class to write different sorting based on different attributes of objects. |
| Method sorts the data according to fixed sorting order. | Method sorts the data according to the customized sorting order. |
| It affects the original class. | It doesn’t affect the original class. |
| Implemented frequently in the API by Calendar, Wrapper classes, Date, and String. | It is implemented to sort instances of third-party classes. |

## Set and Map
| Set | Map |
| --- | --- |
| The Set interface is implemented using java.util package. | The map is implemented using java.util package. |
| It can extend the collection interface. | It does not extend the collection interface. |
| It does not allow duplicate values. | It allows duplicate values. |
| The set can sort only one null value. | The map can sort multiple null values. |

## Exception Handling
- An Exception is an Event that interrupts the normal flow of the program and requires special processing. 
- During the execution of a program, errors and unplanned occurrences can be dealt with by using the Java Exception Handling mechanism.

## Types of Exceptions in Java
There are **two types** of exceptions in Java:
- **Build-in Exceptions**: two categories checked and unchecked
    - ArrayIndexOutOfBoundExceptions
    - ClassNotFoundException
    - FileNotFoundException
    - IOException
    - NullPointerException
    - ArithmeticException
    - RuntimeException
- **User-Defined Exceptions**: are defined by the programmers themselves to handle some specific situations or errors which are not covered by built-in exceptions.

## Error and Exceptions
| Errors | Exceptions |
| ------ | ---------- |
| Recovering from Errors is not possible. | Recover from exceptions by either using a try-catch block or throwing exceptions back to the caller. |
| Errors are all unchecked types in Java. | It includes both checked as well as unchecked types that occur. |
| Errors are mostly caused by the environment in which the program is running. | The program is mostly responsible for causing exceptions. |
| Errors can occur at compile time as well as run time. Compile Time: Syntax Error, Run Time: Logical Error. | All exceptions occur at runtime but checked exceptions are known to the compiler while unchecked are not. |
| They are defined in java.lang.Error package. | They are defined in java.lang.Exception package |
| Examples: java.lang.StackOverflowError, java.lang.OutOfMemoryError | Examples: Checked Exceptions: SQLException, IOException Unchecked Exceptions: ArrayIndexOutOfBoundException, NullPointerException, ArithmeticException. |

## Runtime Exceptions
- Runtime Exceptions are exceptions that occur during the execution of a code, as opposed to compile-time exceptions that occur during compilation.
- Runtime exceptions are unchecked exceptions, as they aren’t accounted for by the JVM.

### Examples of Runtime Exceptions in Java include:
- **NullPointerException**: This occurs when an application attempts to use a null object reference.
- **ArrayIndexOutOfBoundsException**: This occurs when an application attempts to access an array index that is out of bounds.
- **ArithmeticException**: This occurs when an application attempts to divide by zero.
- **IllegalArgumentException**: This occurs when a method is passed on an illegal or inappropriate argument.

## Difference between Checked Exception and Unchecked Exception
### Checked Exception
Checked Exceptions are the exceptions that are checked during compile time of a program. In a program, if some code within a method throws a checked exception, then the method must either handle the exception or must specify the exception using the throws keyword.

Check Exception are of two types:
- **Fully checked exceptions**: all its child classes are also checked, like IOException, and InterruptedException.
- **Partially checked exceptions**: some of its child classes are unchecked, like an Exception.

### Unchecked Exception
- Unchecked are the exceptions that are not checked at compile time of a program. 
- Exceptions under **Error** and **RuntimeException** classes are unchecked exceptions, everything else under throwable is checked. 

## What will happen if you put System.exit(0) on the try or catch block? Will finally block execute?
- No, the finally block won't execute if you use System.exit(0) in the try or catch block.
- System.exit(0) terminates the program immediately.
- The finally block is meant to run any essential cleanup code after the try or catch block finishes executing
- Since System.exit(0) forces program termination, the finally block doesn't get a chance to run.

## What is the use of final keyword?
- Final helps you write stable, secure, and predictable code.
- **Final variables**: Locked after assignment, like a constant value (e.g., speed of light).
- **Final methods**: Locked for subclasses, preventing them from changing how the method works.
- **Final classes**: Locked from inheritance, meaning no subclasses can be created.

## What purpose do the keywords final, finally, and finalize fulfill?
- **final**: is a keyword is used with the variable, method, or class so that they can’t be overridden. 
- **finally**: is a block of code used with “try-catch” in exception handling. Code written in finally block runs despite the fact exception is thrown or not.
- **finalize**: is a method that is called just before deleting/destructing the objects which are eligible for Garbage collection to perform clean-up activity.

## Difference between this() and super()
| this() | super() |
| ------ | ------- |
| It represents the current instance of the class. | It represents the current instance of the parent class. |
| Calls the default constructor of the same class. | Calls the default constructor of the base class. |
| Access the methods of the same class. | Access the methods of the parent class. |
| Points current class instance. | Points the superclass instance. |

## Multithreaded program?
A multithreaded program is designed to run multiple processes at the same time which can improve the performance of a program and allows the program to utilize multiple processors and improves the overall throughput.

## What are the two ways in which Thread can be created?
- Threads are small, lightweight processes with separate paths of execution. 
- These threads use shared memory, but they act independently, thus if any one thread fails it does not affect the other threads. 
- There are two ways to create a thread:
    - By extending the Thread class
    - By implementing a Runnable interface

## Process and Thread
| Process | Thread |
| ------- | ------ |
| A process is a program in execution. | A thread is a single sequence of instructions within a process. |
| The process takes more time to terminate. | The thread takes less time to terminate. | 
| The process is less efficient in terms of communication. | Thread is more efficient in terms of communication. |
| The process is isolated. | Threads share memory. |
| The process does not share data with each other. | Threads share data with each other. | 

## Life Cycle of the Thread
A thread in Java at any point in time exists in any one of the following states. A thread lies only in one of the shown states at any instant: 
1. **New**: The thread has been created but has not yet started.
2. **Runnable**: The thread is running, executing its task, or is ready to run if there are no other higher-priority threads.
3. **Blocked**: The thread is temporarily suspended, waiting for a resource or an event.
4. **Waiting**: The thread is waiting for another thread to perform a task or for a specified amount of time to elapse.
5. **Terminated**: The thread has completed its task or been terminated by another thread.

## Explain suspend() method under the Thread class
- The suspend() method of the Thread class in Java temporarily suspends the execution of a thread. 
- When a thread is suspended it goes into a blocked state and it would not be scheduled by the operating system which means that it will not be able to execute its task until it is resumed. 

## Daemon Thread
- A daemon thread in Java is a low-priority thread that is used to perform background operations or tasks which are used to perform continuously, such as Garbage collection.

## What are the ways in which a thread can enter the waiting state?
- sleep () 
- Wait() 
- Join()
- Waiting for I/O operations
- Synchronization Issues

## What are the different types of Thread Priorities in Java? And what is the default priority of a thread assigned by JVM?
- MIN_PRIORITY
- MAX_PRIORITY
- NORM_PRIORITY (default)

## What is a memory leak, and how does it affect garbage collection?
In Java Memory leaks can be caused by a variety of factors, such as not closing resources properly, holding onto object references longer than necessary, or creating too many objects unnecessarily. 

## List and Set
| List | Set |
| ---- | --- |
| Ordered | Unordered |
| List allows duplicates. | Set does not allow duplicate values. |
| List is accessed by index. | Set is accessed by hashcode. |
| Multiple null elements can be stored. | Null element can store only once. |
| Examples are ArrayList, LinkedList, etc. | Examples are HashSet and TreeSet. LinkedHashSet etc. |

## List and Map
| List | Map |
| ---- | --- |
| List interface allows duplicate elements. | Map does not allow duplicate elements. |
| The list maintains insertion order. | Map does not maintains insertion order. |
| Multiple null elements can be stored. | The map allows a single null key at most and any number of null values. |
| The list provides get() method to get the element at a specified index. | The map does not provide a get method to get the elements at a specified index. | 
| List is Implemented by ArrayList, etc. | Map is Implemented by HashMap, TreeMap, LinkedHashMap |

## Queue and Stack
| Queue | Stack |
| ----- | ----- |
| Queue data structure is used to store elements, and is used to perform operations like enqueue, dequeue from back or end of the queue. | Stack data structure is used to store elements, and is used to perform operations like push, pop from top of the stack. |
| FIFO | LIFO |
| Insertion and deletion in queues take place from the opposite ends of the list. Deletion takes place from the front of the list and insertion takes place at the rear of the list. | Insertion and deletion in stacks take place only from one end of the list called the top. |
| Insert operation is called enqueue operation. | Insert operation is called Push operation. | 
| Queue is generally used to solve problems related to sequential processing. | Stack is generally used to solve problems related to recursion. |

## Singly Linked List and Doubly Linked List
| Singly Linked List | Doubly Linked List |
| ------------------ | ------------------ |
| Singly Linked List contain only two segments i.e, Data and Link. | Doubly Linked List contains three segments i.e, Data, and two pointers. |
| Traversal in a singly linked list is possible in only a forward direction. | Traversal in a doubly linked list is only possible in both directions forward as well as backward. |
| It uses less memory as every single node has only one pointer. | It requires more memory than a singly linked list as each node has two pointers. |
| Easy to use and insert nodes at the beginning of the list. | Slightly more complex to use and easy to insert at the end of the list. |
| The time complexity of insertion and deletion is O(n). | The time complexity of insertion and deletion is O(1). |

## HashMap and TreeMap
| HashMap | TreeMap |
| ------- | ------- |
| Hasmap uses a hashtable in order to store key-value pairs. | Treemap uses Red-black trees to store key-value pair. |
| Hashmap does not maintain any specific order for key-value pairs. | Treemap maintains a natural ordering based on the keys. |
| Order of iteration is not guaranteed in the hashmap. | Iteration is of sorted order based on keys. |
| Hashmaps are faster for retrieval compared to Treemap. | Retrieval in Treemap is slower as it uses tree traversal to find keys. |
| Hashmap is implemented by using an Array of linked list. | TreeMap is implemented using a Red-black Tree. |
| Hashmap uses the equals() method of the Object class to compare keys. | TreeMap uses compareTo() method to compare keys. |

## HashSet and TreeSet
| HashSet | TreeSet |
| ------- | ------- |
| HashSet is unordered. | TreeSet is based on natural ordering. |
| HashSet allows null elements. | TreeSet does not allow null elements. |
| HashSet is Implemented by the HashSet class. | TreeSet is Implemented by TreeSet class. |

## Explain the concepts of Lambda Expressions
Lambda expressions provide a concise way to represent anonymous functions. They are often used with functional interfaces and streams for functional programming style.

## What are streams in Java?
Streams are a sequence of elements that support various aggregate operations like filtering, mapping, and reducing. They provide a functional approach to processing data.

## What is JDBC, and how does it work?
JDBC is an API for connecting Java applications to databases. It works by loading a database driver, establishing a connection, sending SQL queries, processing results, and closing the connection.

## Explain the steps to connect to a database using JDBC.
1. Load the driver class.
2. Establish a connection using DriverManager.getConnection().
3. Create a statement object.
4. Execute queries using executeQuery() (for SELECT) or executeUpdate() (for INSERT, UPDATE, DELETE).
5. Process the result set (if applicable).
6. Close the connection, statement, and result set.

## What are the different types of JDBC drivers?
- Type 1 (JDBC-ODBC bridge)
- Type 2 (Native API partly Java)
- Type 3 (Network Protocol) and
- Type 4 (Pure Java).

## Explain PreparedStatement and its advantages.
PreparedStatement is a precompiled SQL statement, which is more efficient for repeated execution and helps prevent SQL injection attacks.

## What is a ResultSet?
A ResultSet is a table of data representing the result of a database query. It allows you to iterate over rows and retrieve values from columns.

## What is the Spring Framework, and what are its benefits?
- Spring is a comprehensive framework for developing enterprise Java applications. 
- It simplifies development, promotes good practices, and provides features like dependency injection, AOP, transaction management, and web MVC.

## Explain the core concepts of Spring: IoC (Inversion of Control) and DI (Dependency Injection).
- IoC is a principle where the control of object creation and dependency management is transferred to the framework. 
- DI is a technique to implement IoC, where dependencies are "injected" into objects.

## What are Spring Beans, and how are they managed?
- Spring Beans are the objects that form the backbone of your application. 
- They are managed by the Spring IoC container, which handles their instantiation,configuration, and dependencies.

## Explain Spring AOP (Aspect-Oriented Programming).
Spring AOP allows you to modularize cross-cutting concerns (e.g., logging, security) by defining aspects that can be applied to various parts of the code.

## What are Spring Boot and its advantages?
Spring Boot simplifies Spring application setup and configuration with auto-configuration, embedded servers, and production-ready features.

## What is Hibernate, and what are its benefits?
- Hibernate is an ORM framework that simplifies database access by mapping Java objects to database tables. 
- It provides features like automatic CRUD operations, caching, and transaction management.

## Explain the concept of ORM (Object-Relational Mapping).
ORM is a technique to bridge the gap between object-oriented programming and relational databases by mapping objects to database tables and vice versa.

## What are Hibernate entities and how are they mapped to database tables?
- Hibernate entities are POJOs (Plain Old Java Objects) representing database tables. 
- They are mapped using annotations or XML configuration files.

## Explain Hibernate caching and its types.
- Hibernate caching stores copies of data in memory to improve performance. 
- It has two main types: first-level cache (session-level) and second-level cache (shared).

## Explain the SOLID principles of object-oriented design.
- **S (Single Responsibility Principle)**: A class should do one thing and do it well.
- **O (Open/Closed Principle)**: Open for extension, closed for modification. Add new features without changing existing code.
- **L (Liskov Substitution Principle)**: Objects of a derived class should be interchangeable with objects of the base class.
- **I (Interface Segregation Principle)**: Many client-specific interfaces are better than one general-purpose interface.
- **D (Dependency Inversion Principle)**: Depend on abstractions, not concretions.

## What is the difference between BeanFactory and ApplicationContext in Spring?
- BeanFactory is the basic IoC container, providing basic dependency injection. 
- ApplicationContext is a more advanced container, offering additional features like message source, event publication, and application-layer specific contexts (e.g., WebApplicationContext).

## Explain the different scopes of Spring Beans.
- **Singleton**: Single instance per Spring IoC container.
- **Prototype**: New instance created each time it is requested.
- **Request**: One instance per HTTP request.
- **Session**: One instance per HTTP session.
- **Global** session: One instance per global HTTP session 

## What is Spring MVC?
Spring MVC is a web framework built on the Servlet API, providing a Model-View-Controller architecture for developing web applications.

## Explain the DispatcherServlet in Spring MVC.
DispatcherServlet is the front controller in Spring MVC, handling all incoming requests and delegating them to appropriate controllers.

## What are Spring annotations? Give some examples.
Spring annotations are used to configure Spring beans and provide metadata to the Spring framework. Examples include @Component, @Autowired, @Controller, @Service, @Repository, @RequestMapping, etc.

## What is the difference between SOAP and REST web services?
SOAP (Simple Object Access Protocol) is a protocol for exchanging structured information in XML format. REST (Representational State Transfer) is an architectural style for designing networked applications that focuses on resources and uses HTTP methods (GET, POST, PUT, DELETE).

## Explain the concept of Continuous Integration (CI) and Continuous Deployment (CD).
- CI is the practice of merging code changes frequently into a shared repository and automatically building and testing the application. 
- CD extends CI by automating the deployment of the application to production environments.

## What are Docker and Kubernetes?
- Docker is a platform for containerizing applications, making them portable and easy to deploy.
- Kubernetes is a container orchestration platform that automates deployment, scaling, and management of containerized applications.

## What is the difference between unit testing and integration testing?
- Unit testing tests individual components or units of code in isolation. 
- Integration testing tests the interaction between multiple components or modules.

## Explain Spring Data JPA.
Spring Data JPA is part of the larger Spring Data project that makes it easy to implement JPA-based repositories. It simplifies data access layer implementation by reducing boilerplate code and providing common repository interfaces.

## Explain the difference between static and dynamic binding in Java.
Static binding (early binding) happens at compile time, while dynamic binding (late binding) happens at runtime.

## What is the difference between Stack and Heap memory in Java?
Stack memory is used for storing local variables and method call frames, while heap memory stores objects and their instance variables.

## Explain the concept of Classpath in Java.
Classpath is an environment variable that tells the Java Virtual Machine (JVM) where to look for classes and libraries.

## What is JIT (Just-in-Time) compilation?
JIT compilation improves the performance of Java programs by compiling bytecode into native machine code at runtime.

## Explain the concept of memory leaks in Java.
Memory leaks occur when objects are no longer needed but are still referenced, preventing garbage collection and leading to excessive memory usage.

## What are some best practices for writing clean and maintainable Java code?
Following coding conventions, using meaningful variable and method names, writing clear comments, adhering to SOLID principles, and using appropriate design patterns.

## What are some common mistakes to avoid in Java programming?
Not closing resources, ignoring exceptions, not following coding conventions, and overcomplicating code.

