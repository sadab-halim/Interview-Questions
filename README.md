# C Interview Questions
## Why is C called a mid-level programming language?
C has characteristics of both assembly-level i.e. low-level and higher-level languages. So as a result, C is commonly called a middle-level language. U

## What is Token
The individual elements of a program are called Tokens.

## What is a preprocessor?
A preprocessor is a software program that processes a source file before sending it to be compiled. Inclusion of header files, macro expansions, conditional compilation, and line control are all possible with the preprocessor

## What is the difference between global int and static int?
The difference between this is in scope. A truly global variable has a global scope and is visible everywhere in your program

A static variable has a local scope but its variables are not allocated in the stack segment of the memory

## Pointer
A pointer is a variable that stores or points to another variable's address. The value of a variable is stored in a normal variable, whereas the address of a variable is stored in a pointer variable

## What is pointer to pointer?
A pointer can also be used to store the address of another pointer. A double pointer or pointer to pointer is such a pointer. The address of a variable is stored in the first pointer, whereas the address of the first pointer is stored in the second pointer

## Why i++ executes faster than i+1?

## Typecasting
Typecasting is the process to convert a variable from one datatype to another.  If we want to store the large type value to an int type, then we will convert the data type into another data type explicitly.

## When should we use the register storage specifier?
If a variable is used frequently, it should be declared with the register storage specifier, and the compiler may allocate a CPU register for its storage to speed up variable lookup

## Different types of control statements
- If-else statement.
    - normal if-else statement.
    - Else-if statement
    - nested if-else statement.
- Switch statement

## What is an r-value and l-value?
- The term "r-value" refers to a data value stored in memory at a given address. 
- An r-value is an expression that cannot have a value assigned to it, hence it can only exist on the right side of an assignment operator(=).
- The term "l-value" refers to a memory location that is used to identify an object. 
- The l-value can be found on either the left or right side of an assignment operator(=). 
- l-value is frequently used as an identifier

## Difference between malloc() and calloc()
- calloc() and malloc() are memory dynamic memory allocating functions. 
- The main difference is that malloc() only takes one argument, which is the number of bytes, but calloc() takes two arguments, which are the number of blocks and the size of each block.

## Difference between struct and union in C
- A struct is a group of complex data structures stored in a block of memory where each member on the block gets a separate memory location to make them accessible at once

- Whereas in the union, all the member variables are stored at the same location on the memory as a result to which while assigning a value to a member variable will change the value of all other members

## Memory Leak
When we assign a variable it takes space of our RAM (either heap or RAM)dependent on the size of data type, however, if a programmer uses a memory available on the heap and forgets to a delta it, at some point all the memory available on the ram will be occupied with no memory left this can lead to a memory leak

## What is Dynamic Memory Allocation

## How are dangling pointers different from memory leaks?

## Difference between macros and functions
| Macros | Functions |
| It is preprocessed rather than compiled | It is compiled not preprocessed. |
| It is compiled not preprocessed. | Function checks for compilation errors |
| Code length is increased. | Code length remains the same. | 
| Macros are faster in execution. | Functions are a bit slower in execution. |
| Macros are useful when a small piece of code is used multiple times in a program. | Functions are helpful when a large piece of code is repeated a number of times. |


# C++ Interview Questions

## Call by value and Call by reference
In call by value method, we pass a copy of the parameter is passed to the functions. For these copied values a new memory is assigned 

and changes made to these values do not reflect the variable in the main function.

In call by reference method, we pass the address of the variable and the address is used to access the actual argument used in the function call. So changes made in the parameter alter the passing argument

## Difference between Virtual Function and Pure Virtual Function

A virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword

```c++:
class base{
public:
    virtual void fun(){}
};
```

A pure virtual function is a function that has no implementation and is declared by assigning 0. It has no body.

```c++:
class base{
public:
    virtual void fun() = 0;
};
```

Here, = sign has got nothing to do with the assignment, and value 0 is not assigned to anything. It is used to simply tell the compiler that a function will be pure and it will not have anybody

## What is use od \0 character
‘\0’ (null character) is used to refer a null value. It is often used at the end of an array of character i,e string to indicate the termination of array.It holds a nothing,not even 0

## Why ‘for’ loop is called a entry control loop?
In case of for loop, the condition is satisfied first then the statements get executed.Due to entry time checking, for loop is called entry control loop.

## What is the difference between the expression “++a” and “a++”?
With ++a, the increment happens first on variable a, and the resulting value is used. This is called as Prefix increment.
With a++, the current value of the variable will be used in an operation. This is called as postfix increment.

## What are actual arguments?
Ans-When you create and use functions that need to perform an action on some given values, you need to pass these given values to that function. The values that are being passed into the called functions are referred to as actual arguments.


# OOPS

## What is Object Oriented Programming?
Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than functions and logic.

## Pillar of OOPS
- Polymorphism
- Encapsulation
- Inheritance
- Abstraction


### Object
- Any real world entity which can have some characteristics or which can perform some tasks is called as Object. 
- This object is also called an instance i.e. a copy of entity in programming language. 
- If we consider the example, a mobile manufacturing company can be an object. 
- Each object can be different based on their characteristics. 
- For example, here are two objects.
```
Mobile mob1 = new Mobile();
Mobile mob2 = new Mobile()
```

### Class
- A class in OOP is a plan which describes the object. We call it a blueprint of how the object should be represented. 
- Mainly a class would consist of a name, attributes, and operations. 
- Considering the example, the Mobile can be a class, which has some attributes like Profile Type, IMEI Number, Processor, and some more. It can have operations like Dial, Receive and SendMessage.

There are some OOPS principle that need to be satisfied while creating a class. This principle is called as **SOLID** where each letter has some specification.
- **SRP** (Single Responsibility Principle): A class should have one, and only one responsibility
- **OCP** (Open Closed Principle): We should be able to extend a classes behavior, without modifying it. (Inheritance)
- **LSP** (Liskov Substitution Principle): Derived classes must be substitutable for their base classes. (Polymorphism)
- **ISP** (Interface Segregation Principle): Make fine chopped interface instead of huge interface as client cannot be forced to implement an interface which they don't use.
- **DIP** (Dependency Inversion Principle): Depend on abstractions, not on concretions. (Abstraction)

### Abstraction ✅
- Abstraction allows us to expose limited data and functionality of objects publicly and hide the actual implementation. 
- It is the most important pillar in OOPS. In our example of Mobile class and objects like Nokia, Samsung, IPhone.
 
- Some features of mobiles, Dialing a number call some method internally which concatenate the numbers and displays it on screen but what is it doing we don’t know.
- Clicking on green button actual send signals to calling person's mobile but we are unaware of how it is doing.
This is called abstraction. 
- In classes, we can create methods that can be called and used by the users of the class but users will have no idea what these methods do internally. 

### Encapsulation ✅
- Encapsulation is defined as the process of enclosing one or more details from outside world through access right. 
- It says how much access should be given to particular details. 
- Both Abstraction & Encapsulation works hand in hand because Abstraction says what details to be made visible and Encapsulation provides the level of access right to that visible details.

- Talking about Bluetooth which we usually have it in our mobile. When we switch on a Bluetooth.
- I am able to connect to another mobile or bluetooth enabled devices but I'm not able to access the other mobile features like dialing a number, accessing inbox etc. 
- This is because, Bluetooth feature is given some level of abstraction.

- Another point is when mobile A is connected with mobile B via Bluetooth whereas mobile B is already connected to mobile C then A is not allowed to connect C via B. 
- This is because of accessibility restriction.

### Polymorphism ✅
The word “polymorphism” means having many forms.
Polymorphism can be defined as the ability of a message to be displayed in more than one form. 

A real-life example of polymorphism is a person who at the same time can have different characteristics. Like a man at the same time is a father, a husband and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism.

Polymorphism is mainly divided into two types:
- Compile-time Polymorphism
- Runtime Polymorphism

### Compile-Time Polymorphism
This type of polymorphism is achieved by function overloading or operator overloading.

**Function Overloading:** When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded. 

Functions can be overloaded by changing the number of arguments or/and changing the type of arguments

This is also known as *Method Overloading* in Java.

Advantages:
- Increases the readability of the program.

### Why Method Overloading is not possible by changing the return type of method?
In java, method overloading is not possible by changing the return type of the method because there may occur ambiguity.

### What Functions cannot be overloaded in C++?
1. Function declarations that differ only in the return type.
2. Member function declarations with the same name and the name parameter-type-list cannot be overloaded if any of them is a static member function declaration.

**Operator Overloading:** we can make use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands. 

So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them.

### Which Operators cannot be overloaded in C++?
Some of the operators cannot be overloaded. These operators are as follows:
- “.” Member access or dot operator
- “? : ” Ternary or conditional operator
- “::” Scope resolution operator
- “.*” Pointer to member operator
- “sizeof” The object size operator
- “typeid” Object type operator


### Runtime Polymorphism
This type of polymorphism is achieved by Function Overriding.

It is also known as *Dynamic Method Dispatch* in Java.

**Function Overriding** occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden. 

### Why Do We Need Polymorphism?
Polymorphism allows us to reuse code by creating one function that's usable for multiple uses. We can also make operators polymorphic and use them to add not only numbers but also combine strings. This saves time and allows for a more streamlined program.

### Inheritance ✅
- Inheritance is the ability to extend the functionality from base entity in new entity belonging to same group. 
- This will help us to reuse the functionality which is already defined before and extend into a new entity. 

- Basic Mobile functionality is to send a message, dial and receive a call. 
- So the brands of mobile is using this basic functionality by extending the mobile class functionality and adding their own new features to their respective brand.

### Modes of Inheritance
There are 3 modes of inheritance:

- **Public Mode:** If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

- **Protected Mode:** If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

- **Private Mode:** If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

| Base Class Member Access Specifier | Public | Protected | Private |
| ---------------------------------- | ------ | --------- | ------- |
| Public | Public | Protected | Private |
| Protected | Protected | Protected | Private |
| Private | Not Accessible (Hidden) | Not Accessible (Hidden) | Not Accessible (Hidden) |

There are mainly 4 types of Inheritance:
- Single Level Inheritance
- Multiple Inheritance
- Multilevel Inheritance
- Hierarchical Inheritance
- Hybrid Inheritance

#### Single Level Inheritance
In Single level inheritance, there is single base class & a single derived class i.e. - A base mobile features is extended by Samsung brand.

*Syntax*
```c++:
class subclass_name : access_mode base_class {
    //body of subclass
};

OR 

class A{
    .......
};

class B: public A{
    .......
};
```

### Multiple Inheritance
In multiple inhertitance a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

*Syntax:*
```java:
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  // body of subclass
};

OR

class B{ 
... .. ... 
};

class C{
... .. ...
};

class A: public B, public C{
... ... ...
};
```

#### Multilevel Inheritance
In Multilevel inheritance, there is more than one single level of derivation. i.e. - After base features are extended by Samsung brand. Now Samsung brand has manufactured its new model with new added features or advanced OS like Android OS, v13.

*Syntax:*
```java:
class C{ 
... .. ... 
};

class B:public C{
... .. ...
};

class A: public B{
... ... ...
};
```

#### Hierachical Inheritance
In this type of inheritance, multiple derived class would be extended from base class, it's similar to single level inheritance but this time along with Samsung, iPhone is also taking part in inheritance.

*Syntax:*
```c++:
class A  {  
    // body of the class A.  
}    
class B : public A   {  
    // body of class B.  
}  
class C : public A  {  
    // body of class C.  
}   
class D : public A  {  
    // body of class D.  
}   
```

#### Hybrid Inheritance
Single, Multilevel, & hierarchal inheritance all together construct a hybrid inheritance.

### Interface
Multiple inheritance where derived class will extend from multiple base classes.

## Limitations of OOPS
- The length of the programmes developed using OOP language is much larger than the procedural approach. Since the programme becomes larger in size, it requires more time to be executed that leads to slowe execution of the programme.
- We can not apply OOP everywhere as it is not a universal language. It is applied only when it is required. It is not suitable for all types of problems.

### Difference between Class and Structure <br/>
| Class | Structure |
| ----- | --------- |
| Members of a class are private by default | Members of a class are private by default |
| Base classes/structures of a class are private by default | Base classes/structures of a structure are public by default |
| It is declared using the class keyword | It is declared using the struct keyword |
| It is reference type | It is a value type |
| It is used for Data abstraction and further inheritance | It is used for grouping of data |
| It can have NULL values | It cannot have NULL values |
| It may have all the types of constructors and destructors | It may have only parameterized constructor |

### Class vs Object
| Class | Object |
| ----- | ------ |
| Class is a blueprint or template from which objects are created | Object is an instance of a class |
| Class is a group of similar objects | Object is a real world entity such as pen, laptop, mobile, bed, keyboard, mouse, chair etc |
| Class is a logical entity | Object is a physical entity |
| Class is declared using class keyword e.g.
class Student{} | Object is created through new keyword mainly e.g.
Student s1=new Student(); |
| Class is declared once | Object is created many times as per requirement |
| Class doesn't allocated memory when it is created | Object allocates memory when it is created |
| There is only one way to define class in java using class keyword | There are many ways to create object in java such as new keyword, newInstance() method, clone() method, factory method and deserialization |

### Access Modifiers
Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions. <br/>

There are 3 types of access modifiers available in C++:

- **Public:** All the class members declared under the public specifier will be available to everyone. 

The data members and member functions declared as public can be accessed by other classes and functions too. 

The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 

```c++:
#include<bits/stdc++.h>
using namespace std;

class Circle {
    public:
        double radius;
        double compute_area() {
            return 3.14*radius*radius;
        }
};

int main(){
    Circle obj;
    obj.radius = 5.5;

    cout<<"Radius is: "<<obj.radius<<"\n";
    cout<<"Area is: "<<obj.compute_area();
    return 0;
}
```

- **Private:** The class members declared as private can be accessed only by the member functions inside the class. 

They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of the class. 

```c++:
#include<bits/stdc++.h>
using namespace std;

class Circle {
    private:
        double radius;
    public:
        double compute_area() {
            // member function can access private
            // data member radius
            radius = r;
            double area = 3.14*radius*radius;
            cout<<"Radius is: "<<radius<<endl;
            cout<<"Area is: "<<area;
        }
};

int main(){
    Circle obj;
    obj.compute_area(1.5);
    return 0;
}
```

- **Protected:** The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. 

The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 

**NOTE:** This access through inheritance can alter the access modifier of the elements of base class in derived class depending on the mode of Inheritance.

```c++:
#include<bits/stdc++.h>
using namespace std;

class Parent {
    protected:
        int id_protected;
};

class Child : public Parent {
    public:
        void setId(int id) {
            // child class is able to access the inheritance
            // protected data members of base class
            id_protected = id;
        }
        void displayId() {
            cout<<"id_protected is: "<<id_protected<<endl;
        }
};

int main(){
    Child obj1;
    obj1.setId(81);
    obj1.displayId();
    return 0;
}
```
### Data Member

### Member Function
- Inside Class Function --> Inline Keyword
- Outside Class Function --> Scope Resolution Operator (::)

### What is Constructor?
- Constructor is a special method that is invoked automatically at the time of object creation. 
- It is used to initialize the data members of new objects generally. 
- The constructor in C++ has the same name as the class or structure. 
- Constructor is invoked at the time of object creation. 
- It constructs the values i.e. provides data for the object which is why it is known as constructors.
- Constructor does not have a return value, hence they do not have a return type.

Constructors can be defined inside or outside the class declaration:-

The syntax for defining the constructor within the class: <br/>
`<class-name> (list-of-paramters) {// constructor defn}`

The syntax for defining the constructor outside the class: <br/>
`<class-name>: :<class-name> (list-of-paramters) {// constructor defn}`

### Example - 1
```c++:
// defining the constructor within the class
#include <bits/stdc++.h>
using namespace std;

class Student {
    int roll_no;
    char name[10];
    double fees;
 
public:
    Student(){
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }
 
    void display(){
        cout << endl << rno << "\t" << name << "\t" << fees;
    }
};
 
int main(){
    Student s; // constructor gets called automatically when
               // we create the object of the class
    S.display();
    return 0;
}
```
### Example - 2
```c++:
// defining the constructor outside the class
#include <bits/stdc++.h>
using namespace std;

class Student {
    int roll_no;
    char name[50];
    double fees;
 
public:
    Student();
    void display();
};
 
Student::Student()
{
    cout << "Enter the RollNo:";
    cin >> roll_no;
 
    cout << "Enter the Name:";
    cin >> name;
 
    cout << "Enter the Fee:";
    cin >> fees;
}
 
void Student::display(){
    cout << endl << roll_no << "\t" << name << "\t" << fees;
}
 
int main(){
    Student s;
    s.display();
    return 0;
}
```

### Characteristics of the constructor:
- The name of the constructor is the same as its class name.
- Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
- Constructors do not return values; hence they do not have a return type.
- A constructor gets called automatically when we create the object of the class.
- Constructors can be overloaded.
- Constructor can not be declared virtual.

### Types of Constructors:
- **Default Constructor:** is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.

**NOTE:** Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.

```c++:
#include<bits/stdc++.h>
using namespace std;

class Student{
    int roll_no;
    char name[50];
    double fees;
    
    public:
    Student(){
    //  Explicit Default constructor
        cout<<"Enter the RollNo:";
        cin>>rno;
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Fee:";   
        cin>>fees;
    }   
     
    void display(){
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fees;
    }
};
 
int main(){
    Student S;
    S.display();
    return 0;
}
```
- **Parameterized Constructor:** It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. 

To create a parameterized constructor, simply add parameters to it the way we would to any other function. 

When we define the constructor’s body, we the parameters to initialize the object. 

**NOTE:** when the parameterized constructor is defined and no default constructor is defined explicitly, the compiler will not implicitly call the default constructor and hence creating a simple object

When an object is declared in a parameterized constructor, the initial values have to be passed as arguments to the constructor function. The normal way of object declaration may not work. The constructors can be called explicitly or implicitly.

```
Example e = Example(0, 50); // Explicit call
Example e(0, 50);   // Implicit call
```

### Uses of Parameterized Constructor
- It is used to initialize the various data elements of different objects with different values when they are created.
- It is used to overload constructors.

```c++:
#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
        int x, y;
 
    public:
        // Parameterized Constructor
        Point(int x1, int y1){
            x = x1;
            y = y1;
        }
    
        int getX() { return x; }
        int getY() { return y; }
};
 
int main(){
    // Constructor called
    Point p1(10, 15);
    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    return 0;
}
```

- **Copy Constructor:** is a member function that initializes an object using another object of the same class. 
- The process of initializing members of an object through a copy constructor is known as copy initialization.

- Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.

A copy constructor has the following general function prototype: <br/>
`class-name (const class-name &old_obj);`

```java:
#include<bits/stdc++.h>
using namespace std;

class Point {
    private:
        int x, y;
 
    public:
        Point(int x1, int y1){
            x = x1;
            y = y1;
        }
    
        // Copy constructor
        Point(const Point& p1){
            x = p1.x;
            y = p1.y;
        }
    
        int getX() { return x; }
        int getY() { return y; }
};
 
int main(){
    Point p1(10, 15); // Normal constructor is called here
    Point p2 = p1; // Copy constructor is called here
 
    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX()
         << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX()
         << ", p2.y = " << p2.getY();
    return 0;
}
```

### When is the Copy Constructor called?
- When an object of the class is returned by value.
- When an object of the class is passed (to a function) by value as an argument.
- When an object is constructed based on another object of the same class.
- When the compiler generates a temporary object.

### Shallow Copy and Deep Copy
| Shallow Copy | Deep Copy |
| ------------ | --------- |
| Shallow Copy stores the references of objects to the original memory address | Deep copy stores copies of the object’s value |
| Shallow Copy reflects changes made to the new/copied object in the original object | Deep copy doesn’t reflect changes made to the new/copied object in the original object |
| Shallow Copy stores the copy of the original object and points the references to the objects | Deep copy stores the copy of the original object and recursively copies the objects as well |
| Shallow copy is faster | Deep copy is comparatively slowe |

### Copy Constructor vs Assignment Operator
| Copy Constructor | Assignment Operator |
| ---------------- | ------------------- |
| It is called when a new object is created from an existing object, as a copy of the existing object | This operator is called when an already initialized object is assigned a new value from another existing object |
| It creates a separate memory block for the new object | It does not create a separate memory block or new memory space |
| It is an overloaded constructor | It is a bitwise operator |
| C++ compiler implicitly provides a copy constructor, if no copy constructor is defined in the class | A bitwise copy gets created, if the Assignment operator is not overloaded |

## How constructor is different from a normal function?
- Constructor has same name as the class itself
- Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
- Constructors don’t have return type
- A constructor is automatically called when an object is created.
- It must be placed in public section of class.
- If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).

## Constructor Overloading
- We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading.

- Overloaded constructors essentially have the same name (exact name of the class) and differ by number and type of arguments.
- A constructor is called depending upon the number and type of arguments passed.
- While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. 

```c++:
#include<bits/stdc++.h>
using namespace std;

class Construct{ 
    public:
        float area;
        // Constructor with no parameters
        Construct(){
            area = 0;
        }
        
        // Constructor with two parameters
        Construct(int a, int b){
            area = a * b;
        }
        
        void disp(){
            cout<< area<< endl;
        }
};
 
int main(){
    // Constructor Overloading
    // with two different constructors
    // of class name
    construct o;
    construct o2( 10, 20);
     
    o.disp();
    o2.disp();
    return 1;
}
```

### Destructors 
- Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed.
- Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor.
- Destructor has the same name as their class name preceded by a tiled (~) symbol.
- It is not possible to define more than one destructor. 
- The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
- Destructor neither requires any argument nor returns any value.
- It is automatically called when object goes out of scope. 
- Destructor release memory space occupied by the objects created by constructor.
- In destructor, objects are destroyed in the reverse of an object creation.

Syntax for defining the destructor within the class: <br/>
`~ <class-name>(){}`

Syntax for defining the destructor outside the class: <br/>
`<class-name>: : ~ <class-name>(){}`

### Properties of Destructor
- Destructor function is automatically invoked when the objects are destroyed.
- It cannot be declared static or const.
- The destructor does not have arguments.
- It has no return type not even void.
- An object of a class with a Destructor cannot become a member of the union.
- A destructor should be declared in the public section of the class.

### When is Destructor called?
A destructor function is called automatically when the object goes out of scope: 
- the function ends
- the program ends
- a block containing local variable ends
- a delete operator is called

### Private Destructors
Destructors with the access modifier as private are known as Private Destructors. Whenever we want to prevent the destruction of an object, we can make the destructor private.

### What is the use of Private Destructor?
Whenever we want to control the destruction of objects of a class, we make the destructor private. For dynamically created objects, it may happen that we pass a pointer to the object to a function and the function deletes the object. 

If the object is referred after the function call, the reference will become dangling.

### Pure Virtual Destructor
Pure virtual destructors are legal in standard C++ and one of the most important things to remember is that if a class contains a pure virtual destructor, it must provide a function body for the pure virtual destructor. 

It requires a function body because destructors (unlike other functions) are not actually ‘overridden’, rather they are always called in the reverse order of the class derivation. This means that a derived class destructor will be invoked first, then the base class destructor will be called. 

If the definition of the pure virtual destructor is not provided, then what function body will be called during object destruction? Therefore the compiler and linker enforce the existence of a function body for pure virtual destructors. 


### How are destructors different from a normal member function?
Destructors have same name as the class preceded by a tilde (~) 
Destructors don’t take any argument and don’t return anything

### Can there be more than one destructor in a class? 
No, there can only one destructor in a class with classname preceded by ~, no parameters and no return type.

### Why do we need to write a user-defined destructor?
If we do not write our own destructor in class, compiler creates a default destructor for us. The default destructor works fine unless we have dynamically allocated memory or pointer in class. 

When a class contains a pointer to memory allocated in class, we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leak.

### Can a destructor be virtual?
Yes, In fact, it is always a good idea to make destructors virtual in base class when we have a virtual function


### Class vs Object
| Class | Object |
| ----- | ------ |
| Class is a blueprint or template from which objects are created | Object is an instance of a class |
| Class is a group of similar objects | Object is a real world entity such as pen, laptop, mobile, bed, keyboard, mouse, chair etc |
| Class is a logical entity | Object is a physical entity |
| Class is declared using class keyword e.g.
class Student{} | Object is created through new keyword mainly e.g.
Student s1=new Student(); |
| Class is declared once | Object is created many times as per requirement |
| Class doesn't allocated memory when it is created | Object allocates memory when it is created |
| There is only one way to define class in java using class keyword | There are many ways to create object in java such as new keyword, newInstance() method, clone() method, factory method and deserialization |

### Important Keywords ✅
- **static keyword:** is mainly used for memory management. It can be used with variables, methods, blocks and nested classes. It is used to share the same variable or method of a given class. Basically, static is used for a constant variable or a method that is same for every instance of a class

- **Virtual keyword:** is used to modify a method, property, or event declaration and allow for it to be overridden in a derived class.For example, this method can be overridden by any class that inherits it.

- **Abstract keyword:** is used to declare the method or a class as abstract.

  **Abstract Class:** A class which contains the abstract keyword in its declaration is known as an abstract class.
  - Abstract classes may or may not contain abstract methods, i.e., methods without a body ( public void get(); )
  - But, if a class has at least one abstract method, then the class must be declared abstract.
  - If a class is declared abstract, it cannot be instantiated.
  - To use an abstract class, we have to inherit it from another class, provide implementations for the abstract methods in it.
  - If we want to inherit an abstract class, we have to provide implementations to all the abstract methods in it.

  **Abstract Methods:** If we want a class to contain a particular method but we want the actual implementation of that method to be determined by child classes, we can declare the method in the parent class as an abstract.
  - The abstract keyword is used to declare the method as abstract.
  - We have to place the abstract keyword before the method name in the method declaration.
  - An abstract method contains a method signature, but no method body.
  - Instead of curly braces, an abstract method will have a semicolon (;) at the end.

  Example: <br/>
  ```
  public abstract class Employee {
    private String name;
    private String address;
    private int number;

    public abstract double computePay();
    // Remainder of class definition
  }
  ```
- **Final keyword:** is used to restrict the user. The java final keyword can be used in many context. Final can be: variable, method or class

  **Java final variable:** If we make any variable as final, we cannot change the value of final variable(It will be constant).

  **Java final method:** If we make any method as final, we cannot override it.

  **Java final class:** If we make any class as final, we cannot extend it.
  
- **Explicit keyword:**
- **this keyword:**
- **new keyword:**
- **const keyword:**
- **super keyword:**

## Dangling Pointer ✅
- The pointers pointing to a deallocated memory block are known as Dangling Pointers. 
- This condition generates an error known as Dangling Pointer Problem. Dangling Pointer occurs when a pointer pointing to a variable goes out of scope or when an object/variable's memory gets deallocated.

## Diamond Problem ✅
- The diamond problem is a typical problem that is faced in multiple inheritance in Java. 
- It is essentially an ambiguity that is arisen when there are two classes say B and C that inherit / are derived from a single class A, and there is another class D, that is a class derived from multiple inheritance and inherits from B as well as C.

## Why Java is platform independent and JVM is platform dependent? ✅
- JVM is platform dependent because it takes java byte code and generates byte code for the current operating system. 
- So Java software is platform dependent but Java language is platform independent because different operating system have different JVMs.


### Virtual Function ✅
- A virtual function is a member function in the base class that we redefine in a derived class. It is declared using the virtual keyword.

- It is used to tell the compiler to perform dynamic linkage or late binding on the function.

- When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

Rules of Virtual Function:
- Virtual functions must be members of some class.
- Virtual functions cannot be static members.
- They are accessed through object pointers.
- They can be a friend of another class.
- A virtual function must be defined in the base class, even though it is not used.

- The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.

- We cannot have a virtual constructor, but we can have a virtual destructor

### Virtual Class
Virtual classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.

```
Syntax 1:
class B : virtual public A 
{
};

Syntax 2:
class C : public virtual A
{
};
```

### Derived Class
A derived class is a class created or derived from another existing class. The existing class from which the derived class is created through the process of inheritance is known as a base class or superclass.

The hierarchical relationship between derived class and base class is known as an “is a” relationship.

### Can Virtual Functions be set "Private" in C++?
A virtual function can be private as C++ has access control, but not visibility control.

### Can Virtual Functions be Inclined?
Whenever a virtual function is called using a base class reference or pointer it cannot be inlined because the call is resolved at runtime, but whenever called using the object (without reference or pointer) of that class, can be inlined because the compiler knows the exact class of the object at compile time.

### Pure Virtual Function
- A virtual function is not used for performing any task. It only serves as a placeholder.

- When the function has no definition, such function is known as "do-nothing" function.

- The "do-nothing" function is known as a pure virtual function. A pure virtual function is a function declared in the base class that has no definition relative to the base class.

- A class containing the pure virtual function cannot be used to declare the objects of its own, such classes are known as abstract base classes.

- The main objective of the base class is to provide the traits to the derived classes and to create the base pointer used for achieving the runtime polymorphism.

## Virtual Table ✅
Vtable : It is a table that contains the memory addresses of all virtual functions of a class in the order in which they are declared in a class. This table is used to resolve function calls in dynamic/late binding manner. Every class that has virtual function will get its own Vtable.

## Virtual Pointer ✅
VPTR : After creating Vtable address of that table gets stored inside a pointer i.e. VPTR (Virtual Pointer). When you create an object of a class which contains virtual function then a hidden pointer gets created automatically in that object by the compiler. That pointer points to a virtual table of that particular class.

**NOTE:** Vtable and VPTR gets created automatically by compiler to track the virtual function calls.

## Friend Function ✅
- A friend function in C++ is a function that is declared outside a class but is capable of accessing the private and protected members of the class. 

- There could be situations in programming wherein we want two classes to share their members. 

- These members may be data members, class functions or function templates. 

- In such cases, we make the desired function, a friend to both these classes which will allow accessing private and protected data of members of the class.
## Inheritance
The capability of a class to derive properties and characteristics from another class is called Inheritance.

Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own. These new features in the derived class will not affect the base class. 

The derived class is the specialized class for the base class:
- **Sub Class:** The class that inherits properties from another class is called Subclass or Derived Class. 
- **Super Class:** The class whose properties are inherited by a subclass is called Base Class or Superclass. 

### Why and when should we use Inheritance?
When duplication occurs in the code, it increases the chances of error and data redundancy. To avoid this type of situation, inheritance is used.

Using inheritance, we have to write the functions only one time instead of three times as we have inherited the rest of the the classes from the base class



### Modes of Inheritance
There are 3 modes of inheritance:

- **Public Mode:** If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

- **Protected Mode:** If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

- **Private Mode:** If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

| Base Class Member Access Specifier | Public | Protected | Private |
| ---------------------------------- | ------ | --------- | ------- |
| Public | Public | Protected | Private |
| Protected | Protected | Protected | Private |
| Private | Not Accessible (Hidden) | Not Accessible (Hidden) | Not Accessible (Hidden) |

### Types of Inheritance
- Single Inheritance
- Multilevel Inheritance
- Multiple Inheritance
- Hierarchical Inheritance
- Hybrid Inheritance

### Single Inheritance
In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

*Syntax*
```c++:
class subclass_name : access_mode base_class {
    //body of subclass
};

OR 

class A{
    .......
};

class B: public A{
    .......
};
```

### Multiple Inheritance
In multiple inhertitance a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

*Syntax:*
```java:
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  // body of subclass
};

OR

class B{ 
... .. ... 
};

class C{
... .. ...
};

class A: public B, public C{
... ... ...
};
```

### Multilevel Inheritance
In this type of inheritance, a derived class is created from another derived class.

*Syntax:*
```java:
class C{ 
... .. ... 
};

class B:public C{
... .. ...
};

class A: public B{
... ... ...
};
```

### Hierarchical Inheritance
In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

*Syntax:*
```c++:
class A  {  
    // body of the class A.  
}    
class B : public A   {  
    // body of class B.  
}  
class C : public A  {  
    // body of class C.  
}   
class D : public A  {  
    // body of class D.  
}   
```

### Hybrid (Virtual) Inheritance
Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 


## Encapsulation
Encapsulation is a process of wrapping code and data together into a single unit, for example, a capsule which is mixed of several medicines.

A real life example of encapsulation, in a company there are different sections like the accounts section, finance section, sales section etc. The finance section handles all the financial transactions and keep records of all the data related to finance. 

Similarly the sales section handles all the sales related activities and keep records of all the sales. Now there may arise a situation when for some reason an official from finance section needs all the data about sales in a particular month. In this case, he is not allowed to directly access the data of sales section. 

He will first have to contact some other officer in the sales section and then request him to give the particular data. This is what encapsulation is. Here the data of sales section and the employees that can manipulate them are wrapped under a single name “sales section”. 

We can not access any function from class directly. We need an object to access that function which is using the member the variable of that class.

The function which we are making inside the class ,it must use the all member variable then only it is called encapsulation.

If we  don’t  make function inside the class which is using the member  variable of the class then we don’t call it encapsulation.  

Encapsulation also lead to data abstraction or hiding. As using encapsulation also hides the data.

Role of Access Specifiers in Encapsulation:
1. The data members should be labeled as private using the private access specifiers
2. The member function which manipulates the data members should be labeled as public using the public access specifier

Advantages:
- It provides we the control over the data.
- It is a way to achieve data hiding
- The encapsulate class is easy to test. So, it is better for unit testing.

### How Do We Achieve Encapsulation?
The encapsulation can be achieved by the use of 3 keywords in java:

- **private:** The variables or methods that have been declared as private will not be accessible outside the class in which they have been declared. But, an outer class cannot be made private.

- **protected:** The variable or methods that have been declared as private will be accessible inside the class in which they have been defined and in the classes which extends this class. Also, an outer cannot be made protected.

- **public:** The variable or methods that have been declared as public will be accessible anywhere. Also, a class can be made public.
## Abstraction
An abstraction is a way of hiding the implementation details and showing only the functionality to the users. In other words, it ignores the irrelevant details and shows only the required one.

**NOTE:** We cannot create an instance of Abstract Class, It reduces the duplication of code.

### Abstraction vs Encapsulation
| Abstraction | Encapsulation |
| ----------- | ------------- |
| Abstraction is the process or method of gaining the information. | Encapsulation is the process or method to contain the information. |
| In abstraction, problems are solved at the design or interface level. | in Encapsulation, problems are solved at the implementation level. |
| Abstraction is the method of hiding the unwanted information. | Encapsulation is a method to hide the data in a single entity or unit along with a method to protect information from outside. |
| We can implement abstraction using abstract class and interfaces. | Encapsulation can be implemented using by access modifier i.e. private, protected and public. |
| The objects that help to perform abstraction are encapsulated. | The objects that result in encapsulation need not be abstracted. |
| Abstraction provides access to specific part of data. | Encapsulation hides data and the user can not access same directly (data hiding. |
| Abstraction focus is on “what” should be done. | Encapsulation focus is on “How” it should be done. |

| Abstract Class | Interface |
| -------------- | --------- |
| Abstract class can have abstract and non-abstract methods. | Interface can have only abstract methods. |
| Abstract class doesn't support multiple inheritance. | Interface supports multiple inheritance. |
| Abstract class can provide the implementation of interface. | Interface can't provide the implementation of abstract class. |
| The abstract keyword is used to declare abstract class. | The interface keyword is used to declare interface. |
### How To Achieve Abstraction?
- In C++
    - Access Specifiers
    - Header Files

- In Java
    - Interfaces
    - Abstract Classes

Connecting a method call to the method body is known as **binding**.
There are two types of binding:
- Dynamic Binding
- Message Binding

### Dynamic Binding
When type of the object is determined at the runtime, it is known as dynamic binding.
### Message Binding
When type of the object is determined at the compiled time, it is known as dynamic binding.

## Miscellaneous
### C vs C++ vs Java ✅
| Metrics | C | C++ | Java |
| ------- | - | --- | ---- |
| Programming Paradigm | Procedural Language | Object Oriented Programming (OOP) | Pure Object Oriented |
| Origin | Based on assembly language | Based on C language | Based on C and C++ |
| Developer | Dennis Ritchie in 1972 | Bjarne Stoustup in 1979 | James Gosling in 1991 |
| Translator | Compiler only | Compiler only | Interpreted language (Compiler + Interpreter) |
| Platform Dependency | Platform Dependent | Platform Dependent | Platform Dependent |
| Code execution | Direct | Direct | Executed by JVM |
| Approach | Top-down approach | Bottom-up approach | Bottom-up approach |
| File generation | .exe files | .exe files | .class files |
| Pre-processor directives | Support header files (#include, #define) | Support (#header, #define) | Use Packages (import) |
| Keywords | Supports 32 keywords | Supports 63 keywords | 50 defined keywords |
| Datatypes (union, structure) | Supported | Supported | Not supported |
| Inheritance | No inheritance | Supported | Supported except Multiple Inheritance |
| Overloading | No overloading | Support function overloading (Polymorphism) | Operator overloading is not supported |
| Pointers | Supported | Supported | Not supported |
| Allocation | Use malloc, calloc | Use new, delete | Garbage collector |
| Exception Handling | Not supported | Supported | Supported |
| Templates | Not supported | Supported | Not supported |
| Destructors | No constructor neither destructor | Supported | Not supported |
| Multithreading/Interfaces | Not supported | Not supported | Supported |
| Database connectivity | Not supported | Not supported | Supported |
| Storage Classes | Supported (auto, extern) | Supported (auto, extern) | Not supported |

### Difference between Procedural Programming and OOPS
| Procedural Oriented Programming | Object-Oriented Programming |
| ------------------------ | ------------------------ |
| In procedural programming, the program is divided into small parts called functions. | In object-oriented programming, the program is divided into small parts called objects. |
| Procedural programming follows a top-down approach. | Object-oriented programming follows a bottom-up approach. |
| There is no access specifier in procedural programming. | Object-oriented programming has access specifiers like private, public, protected, etc. |
| Procedural programming does not have any proper way of hiding data so it is less secure. | Object-oriented programming provides data hiding so it is more secure. |
| In procedural programming, there is no concept of data hiding and inheritance. | In object-oriented programming, the concept of data hiding and inheritance is used. |
| Procedural programming is based on the unreal world. | Object-oriented programming is based on the real world. |
|  Examples: C, FORTRAN, Pascal, Basic, etc. | Examples: C++, Java, Python, C#, etc.
 |

## malloc and new ✅
| malloc | new |
| ------ | --- |
| is a function | is an operator |
| does not calls constructors | calls constructor |
| Returns void * | Returns exact data type |
| On failure, returns NULL | on failure, Throws bad_alloc exception |
| size is calculated manually | size is calculated by compiler |
### Why Java is not a purely Object Oriented Language?
Pure Object Oriented Language or Complete Object Oriented Language are Fully Object Oriented Language which supports or have features which treats everything inside program as objects. 

It doesn’t support primitive datatype(like int, char, float, bool, etc.). 

There are seven qualities to be satisfied for a programming language to be pure Object Oriented. 
They are:
1. Encapsulation/Data Hiding
2. Inheritance
3. Polymorphism
4. Abstraction
5. All predefined types are objects
6. All user defined types are objects
7. All operations performed on objects must be only through methods exposed at the objects

Java supports property 1, 2, 3, 4 and 6 but fails to support property 5 and 7 given above. 

Java language is not a Pure Object Oriented Language as it contain these properties:
- Primitive Data Types ex,  int, long, bool, float, char, etc as Objects
- static keyword
- wrapper classes

### Is an array a primitive type or an object in Java?
An array in Java is an object. In Java, we can create arrays by using new operator and we know that every object is created using new operator. Hence we can say that array is also an object.


### What is early and late binding?
Early (or static) binding refers to compile time binding and Late (or dynamic) binding refers to runtime binding (for example when we use reflection).

### What is the default access modifier in a class?
## How many instances can be created for an abstract class?
- Abstract Class is Half Define Class. 
- Abstract class not allowed to create an Instance (Object). 
- So, we can not create any instance then answe is 0. There are no objects for abstract class.
## Define Garbage Collection. How does it work?
- Garbage collection in Java is the process by which Java programs perform automatic memory management. 
- Java programs compile to bytecode that can be run on a Java Virtual Machine, or JVM for short. 
- When Java programs run on the JVM, objects are created on the heap, which is a portion of memory dedicated to the program. 
- Eventually, some objects will no longer be needed. The garbage collector finds these unused objects and deletes them to free up memory.

- Java garbage collection is an automatic process. Automatic garbage collection is the process of looking at heap memory, identifying which objects are in use and which are not, and deleting the unused objects. 

### What is meany by an exception?
- An exception is an event, which occurs during the execution of a program, that disrupts the normal flow of the program's instructions. 
- When an error occurs within a method, the method creates an object and hands it off to the runtime system.

### Difference between Errors and Exceptions
| Errors | Exceptions |
| ------ | ---------- |
| The error indicates trouble that primarily occurs due to the scarcity of system resources. | The exceptions are the issues that can appear at runtime and compile time |
| It is not possible to recover from an error | It is possible to recover from an exception |

### Exception Handling
- Exception handling is the process of responding to unwanted or unexpected events when a computer program runs. 
- Exception handling deals with these events to avoid the program or system crashing, and without this process, exceptions would disrupt the normal operation of a program.

### What are the three arguments of a ternary operator?
The ternary operator take three arguments: The first is a comparison argument. The second is the result upon a true comparison. The third is the result upon a false comparison.

### Describe the concept of Enum
Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.

### Is it possible for a class to inherit the constructor of its base class?
In inheritance, the derived class inherits all the members(fields, methods) of the base class, but derived class cannot inherit the constructor of the base class because constructors are not the members of the class.

### When should I use a struct instead of a class?


















# Java

## Why is Java a platform independent language?
## Why is Java not a pure object oriented language?
- Java supports primitive data types - byte, boolean, char, short, int, float, long, and double and hence it is not a pure object oriented language.

## Difference between Heap and Stack Memory in java. And how java utilizes this.
- Stack memory is the portion of memory that was assigned to every individual program. And it was fixed. 
- On the other hand, Heap memory is the portion that was not allocated to the java program but it will be available for use by the java program when it is required, mostly during the runtime of the program.

- Java Utilizes this memory as:
- When we write a java program then all the variables, methods, etc are stored in the stack memory.
- And when we create any object in the java program then that object was created in the heap memory. 
- And it was referenced from the stack memory.

## Why does Java not make use of pointers?
- Java focuses on code simplicity, and the usage of pointers can make it challenging. 
- Pointer utilization can also cause potential errors. 
- Moreover, security is also compromised if pointers are used because the users can directly access memory with the help of pointers.

- Thus, a certain level of abstraction is furnished by not including pointers in Java. 
- Moreover, the usage of pointers can make the procedure of garbage collection quite slow and erroneous. 
- Java makes use of references as these cannot be manipulated, unlike pointers.

## What do you understand by instance variable and local variable?

## JIT Compiler
- JIT stands for Just-In-Time and it is used for improving the performance during run time. 
- It does the task of compiling parts of byte code having similar functionality at the same time thereby reducing the amount of compilation time for the code to run.
- The compiler is nothing but a translator of source code to machine executable code.

## A single try block and multiple catch blocks can co-exist in a Java program. Explain.
- Yes, multiple catch blocks can exist but specific approaches should come prior to the general approach because only the first catch block satisfying the catch condition is executed.

## Difference between final, finally and finalize

## When can we use super keyword?
- The super keyword is used to access hidden fields and overridden methods or attributes of the parent class

## Can the static methods be overloaded?
- Yes! There can be two or more static methods in a class with the same name but differing input parameters.

## Why is the main method static in Java?
- The main method is always static because static members are those methods that belong to the classes, not to an individual object. 
- So if the main method will not be static then for every object, It is available. 
- And that is not acceptable by JVM. JVM calls the main method based on the class name itself. 
- Not by creating the object.
- Because there must be only 1 main method in the java program as the execution starts from the main method. 
- So for this reason the main method is static

## Can the static methods be overriden?
- No! Declaration of static methods having the same signature can be done in the subclass but run time polymorphism can not take place in such cases.
- Overriding or dynamic polymorphism occurs during the runtime, but the static methods are loaded and looked up at the compile time statically. 
- Hence, these methods cant be overridden

## Garbage Collection
- 























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
- The processor is allocated to the job closest to completion but it can be preempted by a newe ready job with shorter time to completion.
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

## Thread ✅
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

## What is Swapping ? ✅
Swapping is a mechanism in which a process can be swapped temporarily out of main memory (or move) to secondary storage (disk) and make that memory available to other processes. At some later time, the system swaps back the process from the secondary storage to main memory.

Swapping is also known as a technique for memory compaction.

## Paging ✅
- Paging is a storage mechanism that allows OS to retrieve processes from the secondary storage into the main memory in the form of pages. 
- In the Paging method, the main memory is divided into small fixed-size blocks of physical memory, which is called frames. 
- The size of a frame should be kept the same as that of a page to have maximum utilization of the main memory and to avoid external fragmentation. - - Paging is used for faster access to data, and it is a logical concept.

## Segmentation ✅
- Segmentation is a technique of memory management. 
- It is just like the Paging technique except the fact that in segmentation, the segments are of variable length but, in Paging, the pages are of fixed size. 
- In segmentation, the memory is split into variable-length parts. Each part is known as segments. 
- The information which is related to the segment is stored in a table which is called a segment table.

## Starvation ✅
- It is generally a problem that usually occurs when a process has not been able to get the required resources it needs for progress with its execution for a long period of time. 
- In this condition, low priority processes get blocked and only high priority processes proceed towards completion because of which low priority processes suffer from lack of resources. 

## Aging ✅`
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
- Makes the system slowe
- Lesser Hard Disk Space
- Reduces System Stability

## Demand Paging ✅
- Demand paging is a process that keeps pages of a process that are infrequently used in secondary memory, and pulls them only when required to satisfy the demand. <br/>
- It is also called lazy swapper because the swapping of pages is done only when the CPU requires it. 
- Example: Imagine that we are scrolling through an e-commerce platform and like some clothes. However, since we don't have space in we wardrobe, we save it in we wishlist and decide to buy them only when needed.

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
- It also occupies less memory and consumes fewe resources


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





## Database
A database is a collection of related data which represents some aspect of the real world. A database system is designed to be built and populated with data for a certain task.

## Database Management System (DBMS) 
- DBMS is a software for storing and retrieving users' data while considering appropriate security measures. 
- It consists of a group of programs which manipulate the database. 
- The DBMS accepts the request for data from an application and instructs the operating system to provide the specific data. 
- In large systems, a DBMS helps users and other third-party software to store and retrieve data.
- Database management systems wee developed to handle the following difficulties of typical File-processing systems supported by conventional operating systems.
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

## Keys ✅
A key is a set of attributes that can identify each tuple uniquely in the given relation. 

## Types of Keys:
- **Super Key**
   - A super key is a set of single and multiple key attributes which is used to identify records in a table. 
   - The super key is a superset of the candidate key.

- **Candidate Key**
   - A set of minimal attribute(s) that can identify each tuple uniquely in the given relation is called a candidate key.
   - The value of the candidate key field must be unique and always be not NULL for every tuple.
   - There can be more than one candidate key in a table or a relation.
   - Removing any field from the candidate key fails in identifying each record uniquely.

- **Primary Key**
   - A primary key is a set of fields in a database table that uniquely identifies each record in that table. The value of the primary key cannot be NULL.
   - A table is allowed to have only one primary key
   - The value of a primary key field should always be unique.

- **Alternate Key** 
   - Those keys which are not selected as the primary key from the candidate keys are called as the alternate keys. 
   - These keys are also known as the secondary keys.

- **Foreign Key**
   - A foreign key is an attribute in one table that acts as a primary key in another table. 
   - The foreign key is useful for establishing the relationship between two tables in a database.

- **Composite Key**
   - A composite key is a key which is a combination of two or more fields (attributes) that uniquely identify each record in the table.

- **Unique Key**
   - It is unique for all the records of the table. Once assigned, its value cannot be changed i.e. it is non-updatable. 
   - It may have a NULL value.

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
- **Lossless Decomposition** ensures
   - No information is lost from the original relation during decomposition. o When the sub relations are joined back, the same relation is obtained that was decomposed.
- **Dependency Preservation** ensures
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

## Normalization ✅
- Normalization is a technique of organizing the data in the database.
- It is a systematic approach which is used to remove or reduce data redundancy in the tables and remove the insert, update and delete anomalies.
- It mainly divides the larger table into smaller tables and links them using a relationship to increase the clarity of data.

## Anomalies:
- **Insertion Anomaly:** 
   - Suppose a new faculty joins the University, and the Database Administrator inserts the faculty data into the table. 
   - But he is not able to insert because Sid is a primary key, and can’t be NULL. 
   - So this type of anomaly is known as an insertion anomaly.

- **Delete Anomaly:**
   - When the Database Administrator wants to delete the student details of Sid=2 from the table.
   - Then it will delete the faculty and course information too which cannot be recovered further.

- **Update Anomaly:**
   - When the Database Administrator wants to change the salary of faculty F1 from 30000 to 40000 in above table University
   - Then the database will update salary in more than one row due to data redundancy. 
   - So, this is an update anomaly in a table.

## Types of Normal Forms ✅
- **First Normal Form (1NF):** A given relation is called in First Normal Form (1NF) if each cell of the table contains only an atomic value i.e. if the attribute of every tuple is either single valued or a null value.
- **Second Normal Form (2NF):** A given relation is called in Second Normal Form (2NF) if and only if
   - Relation already exists in 1NF.
   - No partial dependency exists in the relation.
A → B is called a partial dependency if and only if A is a subset of some candidate key and B is a non-prime attribute.

- **Third Normal Form (3NF):** A given relation is called in Third Normal Form (3NF) if and only if
   - Relation already exists in 2NF.
   - No transitive dependency exists for non-prime attributes.
A → B is called a transitive dependency if and only if A is not a super key and B is a non-prime attribute.

- **Boyce-Codd Normal Form:** A given relation is called in BCNF if and only if
   - Relation already exists in 3NF.
   - For each non-trivial functional dependency ‘A → B’, A is a super key of the relation.
- **Fourth Normal Form:** A relation is in 4NF if it satisfies the following conditions:
   - A relation is in BCNF
   - and, there is no multivalued dependency exists in the relation.
 
## Denormalization ✅
Denormalization is a technique used to merge data from multiple tables into a single table that can be queried quickly.

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

## Transactions
- A transaction is a collection of logically related operations which reads and possibly updates the various data items in the database. 
- Usually, a transaction is initiated by a user program written in SQL
## ACID Properties ✅
To ensure the consistency of the database, certain properties are followed by all the transactions occurring in the system. These properties are called as ACID Properties of a transaction.

- **Atomicity** 
   - This property ensures that either the transaction occurs completely or it does not occur at all.
   - Basically, it ensures that no transaction occurs partially.

- **Consistency** –
   - This property ensures that integrity constraints are maintained.
   - In other words, it ensures that the database remains consistent before and after the transaction.

- **Isolation** –
   - This property states that a data of transaction T1 which is in execution, then transaction T2 cannot access the result of transaction T1 until the operations of a transaction T1 is completed. 
   - Or, we can say that a user cannot perform the same operation in multiple transactions at the same time. The execution of all transaction should be isolated from other transaction.

- **Durability** –
   - This property ensures that all the changes made by a transaction after its successful execution are written successfully to the disk.
   - It also ensures that these changes exist permanently and are never lost even if there occurs a failure of any kind.

## Schedules:
The order in which the operations of multiple transactions appear for execution is called as a schedule.
- **Serial Schedules** –
   - All the transactions execute serially one after the other.
   - When one transaction executes, no other transaction is allowed to execute.
   - Serial schedules are always- Consistent, Recoverable, Cascadeless and Strict.

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
 
## Joins ✅
Joins are the combination of related tuples from the two different relations or tables into a single type. 

## Types of Joins ✅
- **Inner Join:**
    - It takes all the records from both tables until and unless the conditions match. 
    - It means this join will return only those common rows in both tables.

- **Left Join:**
    - The left join returns all the records from (left table) table one, whether the record in table 2 matches or not, according to the join condition. 
    - The record, which matches their result set is the same as the inner join result, and all uncommon records from another table will result in null.

- **Right Join:**
    - In Right Outer, join for both tables will return all the records from table 2, whether the record in table 1 matches or not to the join condition. - The record which matches their result set is the same as the inner join result, and all nonmatching records from another table will result in null.

- **Full Join:**
    - Full Join returns the output, which matches rows and unmatched rows between the two tables. Full Join is the same as Cross Join.

- **Self Join:** 
    - is used to join a table to itself as if the table wee two tables, temporarily remaining at least one table in the SQL statement.

- **Cross Join:** 
    - returns the cartesian product of the sets of records from the two or more joined tables.

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





## Network
- Computer Network is a group of computers connected with each other through wires, optical fibres or optical links so that various devices can interact with each other through a network.
- The aim of the computer network is the sharing of resources among various devices.

## Components of Computer Networks
- **NIC**: Netowrk Interface Card (NIC) is a physical network interface defined as the hardware component that enables a computer to connect to a network. It is used in both wired and wireless connections.

- **Hub**: A computer hub is a basic type of wired network device by which multiple connected computers can communicate via broadcast communication.

- **Switch**: Switch is a computer hardware component that is used to connect multiple devices on a computer network. Its feature are more advanced than features.

- **Router**: Router is a networking device used to connect a LAN with an internet connection that forwards data packets between computer networks.

- **Modem**: A modem (MOdulator/DEModulator) is a hardware device used to transmit digital data over transmission media like a telephone line, a cable or satellite etc.

- **Cables and Connectors**: Cable is a transmission media used for transmitting digital singals. Optical-Fibre Cable, Co-axial cable, and Twisted Pair Cable are the three types of cable used for transmission of digital signals.

## Types of Computer Network
- Peer-to-Peer Architecture
- Client/Server Network

## Peer-to-Peer Network
- This type of network model forms a small environment of up to 10 computers by linking them together with equal privilege and responsibilities for data processing without any dedicated server.

## Client Server Network
- This is a client-server based network model that enables clients to access the resources like audios, videos from the Server. 
- Clients are all the computers or end users that communicate with each other through a server. 
- The Server is the central computer or central controller that makes a response to the clients ‘request and secures, manages the computer network.

## Types of Computer Networks ✅
- PAN (Personal Area Network)
- LAN (Local Area Network)
- MAN (Metropolitan Area Network)
- WAN (Wide Area Network)

## PAN (Personal Area Network)
This network is spanned for personal use of computing devices (mobile phones, laptops, media player, and play stations), arranged within a person, typically within a range of 10 meters such as Bluetooth, Wi-Fi, USB, etc., and covers an area of 30 feet.

## LAN (Local Area Network)
This network is a connection of two or more personal computers spanned in a small area such as building, office through a communication medium such as twisted pair cable, coaxial cable, etc.

### MAN (Metropolitan Area Network)
This network is inter-connection of different LANs, covers a larger geographic area, uses between banks, and colleges in a city and airline reservation through a telephone exchange line.

### WAN (Wide Area Network)
This network spans over a large geographical area through a telephonic line, fiber optic cable or satellite links used in the sectors of Business, Government, and Education. The Internet is a broad network in the world.

## Internetworking
An interconnection between public, private, commercial, industrial, or government computer networks can be defined as internetworking.

## Types of Internetwork
- **Extranet:** 
   - An extranet is a communication network based on the internet protocol such as Transmission Control protocol and internet protocol. 
   - It is used for information sharing. The access to the extranet is restricted to only those users who have login credentials. 
   - An extranet is the lowest level of internetworking. 
   - It can be categorized as MAN, WAN or other computer networks. An extranet cannot have a single LAN, atleast it must have one connection to the external network.

- **Intranet:**
   - An intranet is a private network based on the internet protocol such as Transmission Control protocol and internet protocol. 
   - An intranet belongs to an organization which is only accessible by the organization's employee or members

## Topologies ✅
A Network Topology is the arrangement with which computer systems or network devices are connected to each other. 

## Types of Topologies ✅
### Bus Topology
- The bus topology is designed in such a way that all the stations are connected through a single cable known as a backbone cable.
- Each node is connected to the backbone cable by drop cable or directly connected to the backbone cable.
- The bus topology is mainly used in 802.3 (ethernet) and 802.4 standard networks.
- When a node wants to send a message over the network, it puts a message over the network. All the stations available in the network will receive the message whether it has been addressed or not.
- The backbone cable is considered as a “single lane” through which the message is broadcast to all the stations.

### Star Topology
- Star Topology is an arrangement of the network in which every node is connected to the central hub, switch or a central computer.
- The central computer is known as a server, and the peripherial devices attached to the server are known as clients.
- Coaxial cable or RJ-45 cables are used to connect the computers.
- Hub or Switches are mainly used as connection devices in a star topology.

### Ring Topology
- Ring topology is like a bus topology but with connected ends
- The node that receives the message from the previous computer will retransmit to the next node.
- The data flows in one direction, i.e., unidirectional
- The data flows in a single loop continuously known as an endless loop.
- It has no terminated ends.
- The data in a ring topology flow in a clockwise direction
- The most common access method of the ring topology is token passing
   - **Token passing:** is a network access method in which token is passed from one node to another node
   - **Token:** is a frame that circulates around the network.

### Mesh Topology
- Mesh technology is an arrangement of the network in which computers are interconnected with each other through various redundant connection
- There are multiple paths from one computer to another computer
- It does not contain the switch, hub or any central computer which acts as a central part of communication.
- The internet is an example of the mesh technology
- Mesh topology is mainly used for WAN implementations where communication failures are a critical concern.
- Mesh topology is mainly used for wireless networks.

Mesh Topology is divided into two categories:
- **Full Mesh Topology:** Each computer is connected to all the computers available in the network.
- **Partial Mesh Topology:** Not all but certain computers are connected to those computers with which they can communicate frequently.

### Tree Topology
- Tree topology combines the characteristics of bus topology and star topology.
- A tree topology is a type of structure in which all the computers are connected with each other in hierarchical fashion.
- The top-most node in tree topology is known as a root node, and all other nodes are the descendants of the root node.
- There is only one path exists between two nodes for the data transmission. Thus, it forms a parent-child hierarchy.

### Hybrid Topology
- The combination of various different topologies is known as Hybrid topology.
- A Hybrid topology is a connection between different links and nodes to transfer the data.
- When two or more different topologies are combined together is termed as Hybrid topology and if similar topologies are connected with each other will not result in Hybrid topology. 
- For example, if there exist a ring topology in one branch of SBI bank and bus topology in another branch of SBI bank, connecting these two topologies will result in Hybrid topology.

## Transmission Modes
The way in which data is transmitted from one device to another device is known as transmission mode.

- Simplex Mode
- Half-Duplex Mode
- Full-Duplex Mode

## Simplex Mode 
- The communication is unidirectional, as on a one-way street. 
- Only one of the two devices on a link can transmit; the other can only receive.
- Keyboards and traditional monitors are examples of simplex devices.

## Half-Duplex Mode
- Each station can both transmit and receive, but not at the same time. 
- When one device is sending, the other can only receive, and vice versa.
- The half-duplex mode is like a one-lane road with traffic allowed in both directions. 
- Walkie-talkies is an example of half-duplex systems

## Full-Duplex Mode 
- Both stations can transmit and receive simultaneously.
- The full-duplex mode is like a two-way street with traffic flowing in both directions at the same time. 
- In full-duplex mode, signals going in one direction share the capacity of the link: with signals going in the other direction. 
- This sharing can occur in two ways: Either the link must contain two physically separate transmission paths, one for sending and the other for receiving; or the capacity of the channel is divided between the signals traveling in both directions.

## OSI Model ✅
- OSI stands for Open System Interconnection is a reference model that describes how information from a software application in one computer moves through a physical medium to the software application in another computer.
- It consists of seven layers, and each layer performs a particular network function.
- OSI model divides the whole task into seven smaller and manageable tasks. Each layer is assigned a particular task.
- Each layer is self-contained, so that task assigned to each layer can be performed independently.
## OSI Layers ✅
- Physical Layer {Responsibility of the Network}
- Data Link Layer {Responsibility of the Network}
- Network Layer {Responsibility of the Network}
- Transport Layer {Responsibility of the Host}
- Session Layer {Responsibility of the Host}
- Presentation Layer {Responsibility of the Host}
- Application Layer {Responsibility of the Host}

## Summary of Layers ✅
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

**Network Layer** contains ICMP, IGMP, IP, ARP, RARP <br/>
**Transport Layer** contains TCP and UDP <br/>
**Application Layer** SMTP, FTP, TELNET, DNS, SNMP etc.

## Difference between OSI and TCP/IP
|OSI | TCP/IP |
| -- |-------|
| 7 layered architecture | 4 layered architecture |
| Fixed boundaries and functionality for each layer | Flexible architecture with no strict boundaries between layers |
| Low Reliability	| High Reliability |

## Transmission Impairment
- When the received signal is not identical to the transmitted one due to the transmission impairment. 
- The quality of the signals will get destroyed due to transmission impairment.
## Causes of Transmission Impairment
- **Attenuation:** Attenuation means the loss of energy, i.e., the strength of the signal decreases with increasing the distance which causes the loss of energy.
- **Distortion:** Distortion occurs when there is a change in the shape of the signal. 
- **Noise:** When data is travelled over a transmission medium, some unwanted signal is added to it which creates the noise.

## IP Address
- An IP address is a unique address that identifies a device on the internet or a local network. 
- IP stands for "Internet Protocol," which is the set of rules governing the format of data sent via the internet or local network.
## IPv4 Address
- An IP address is a 32-bit dynamic address of a node in the network. 
- An IPv4 address has 4 octets of 8-bit each with each number with a value up to 255.
- IPv4 classes are differentiated based on the number of hosts it supports on the network. 
- There are five types of IPv4 classes and are based on the first octet of IP addresses which are classified as Class A, B, C, D, or E

## IPv4 vs IPv6 ✅
| IPv4 | IPv6 |
| ---- | ---- |
| IPv4 has an address length of 32-bit represented in decimal format. | IPv6 has a 128-bit address length represented in hexadecimal format. |
| It supports Manual and DHCP configuration. | It supports auto-configuration and renumbering configuration. |
| IPv4 is being used as less secure protocol, as its security section is dependent on the application | IPv6 has its inbuilt security feature named as IPSEC (Internet Protocol Security) which provide additional security feature along with the security provided or implemented at application level. |
| IPv4 does not provide Encryption and Authentication facilities. | IPv6 provides both Encryption and Authentication facilities. |
| 	In IPv4, the Request header is not fixed and it may be between of 20-60 bytes in size. | In IPv6, the Request header is of fixed size, i.e., 40 bytes. |

## HTTP and HTTPS protocol ✅
- HTTP is the HyperText Transfer Protocol which defines the set of rules and standards on how the information can be transmitted on the World Wide Web (WWW).  
- It helps the web browsers and web servers for communication. 
- It is a ‘stateless protocol’ where each command is independent with respect to the previous command. HTTP is an application layer protocol built upon the TCP. It uses port 80 by default.

- HTTPS is the HyperText Transfer Protocol Secure or Secure HTTP. It is an advanced and secured version of HTTP. On top of HTTP, SSL/TLS protocol is used to provide security. 
- It enables secure transactions by encrypting the communication and also helps identify network servers securely. It uses port 443 by default

## xyz ✅
- Restart Internet Connection
- Disable our firewall and antivirus
- Clear our browser cache
- Flush our DNS cache
- Change the DNS servers
## SMTP Protocol
- SMTP is the Simple Mail Transfer Protocol. 
- SMTP sets the rule for communication between servers. 
- This set of rules helps the software to transmit emails over the internet. - It supports both End-to-End and Store-and-Forward methods. 
- It is in always-listening mode on port 25

## DNS ✅
- DNS is the Domain Name System. 
- It is considered as the devices/services directory of the Internet. 
- It is a decentralized and hierarchical naming system for devices/services connected to the Internet. 
- It translates the domain names to their corresponding IPs.

## Router vs Gateway ✅
- Router is a networking device used for connecting two or more network segments. 
- It directs the traffic in the network. 
- It transfers information and data like web pages, emails, images, videos, etc. from source to destination in the form of packets. 
- It operates at the network layer. 
- The gateways are also used to route and regulate the network traffic but, they can also send data between two dissimilar networks while a router can only send data to similar networks

## Router vs Bridge ✅
| Router | Bridge |
| ------ | ------ |
| Operates in network layer | Operates in data link layer |
| Data is stored and sent in the form of packets | Data is not stored and sent in the form of packets |
| Router is mainly used by LAN as well as MAN for connection | Bridge connects two different LANs |
| Routers works on more than single broadcast domain | Bridge works on single broadcast domain |
| Routers focuses on protocol address | Bridge focuses on MAC address |

## Difference between TCP and UDP ✅
| TCP | UDP |
|-----|-----|
| TCP is a connection-oriented protocol. Connection-orientation means that the communicating devices should establish a connection before transmitting data and should close the connection after transmitting the data. | UDP is the Datagram-oriented protocol. This is because there is no overhead for opening a connection, maintaining a connection, and terminating a connection. UDP is efficient for broadcast and multicast types of network transmission. |
| TCP is reliable as it guarantees the delivery of data to the destination router. | The delivery of data to the destination cannot be guaranteed in UDP. |
| TCP provides extensive error-checking mechanisms. It is because it provides flow control and acknowledgment of data. | UDP has only the basic error checking mechanism using checksums. |
| TCP is comparatively slowe than UDP. | UDP is faster, simpler, and more efficient than TCP. |
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

## Subnet ✅
- A subnet is a network inside a network achieved by the process called subnetting which helps divide a network into subnets. 
- It is used for getting a higher routing efficiency and enhances the security of the network. 
- It reduces the time to extract the host address from the routing table.

## MAC Address vs IP Address
| MAC Address | IP Address |
| ----------- | ---------- |
| MAC Address stands for Media Access Control Address. | IP Address stands for Internet Protocol Address. |
| A device attached with MAC Address can retrieve by ARP protocol. | A device attached with IP Address can retrieve by RARP protocol. |
| MAC Address is used to ensure the physical address of a computer. | IP Address is the logical address of the computer. |
| MAC Address operates in the data link layer. | IP Address operates in the network layer. |
| No classes are used for MAC addressing. | IPv4 uses A, B, C, D, and E classes for IP addressing. |
| MAC addresses can be used for broadcasting. | The IP address can be used for broadcasting or multicasting. |
| MAC address is hardware oriented. | IP address is software oriented. |

## Hub vs Switch ✅
| Hub | Switch |
| --- | ------ |
| Operates on Physical Layer of OSI Model | Operates on Data Link Layer of OSI Model |
| Hub is a broadcast type transmission. | While switch is a Unicast, multicast and broadcast type transmission. |
| Hub is a half duplex transmission mode. | While switch is a full duplex transmission mode. |
| Hub cannot be used as a repeater. | While switch can be used as a repeater. |
| Hacking of systems attached to hub is complex. | Hacking of systems attached to switch is little easy. |

## Switch vs Router ✅
| Switch | Router |
| ------ | ------ |
| The main objective of switch is to connect various devices simultaneously. | The main objective of router is to connect various networks simultaneously. |
| It works in data link layer. | It works in Network Layer |
| Switch is used by only LAN | Router is used by LAN as well as MAN. |
| Sswitch data is sent in the form of frame. | Through the router, data is sent in the form of packets. |
| Switch is not compatible with NAT. Router is compatible with NAT |



## Unicasting vs Multicasting vs Broadcasting ✅
- **Unicasting:** If the message is sent to a single node from the source then it is known as unicasting. This is commonly used in networks to establish a new connection

- **Multicasting:** If the message is sent to a subset of nodes from the source then it is known as multicasting. Used to send the same data to multiple receivers

**Broadcasting:** If the message is sent to all the nodes in a network from a source then it is known as broadcasting. DHCP and ARP in the local network use broadcasting.

## google.com ✅
- The browser checks the cache first if the content is fresh and present in cache display the same.
- If not, the browser checks if the IP of the URL is present in the cache (browser and OS) if not then request the OS to do a DNS lookup using UDP to get the corresponding IP address of the URL from the DNS server to establish a new TCP connection.
- A new TCP connection is set between the browser and the server using three-way handshaking.
- An HTTP request is sent to the server using the TCP connection.
- The web servers running on the Servers handle the incoming HTTP request and send the HTTP response.
- The browser process the HTTP response sent by the server and may close the TCP connection or reuse the same for future requests.
- If the response data is cacheable then browsers cache the same.
Browser decodes the response and renders the content

## Domain Name System (DNS) ✅
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








## Linux Commands
- ls: it lists files and directories
- grep: this finds text in a file. The grep command searches through many files at a time to find a piece of text we are looking for.
- sudo:
- pwd: print working directory
- mv: move
- cp: command copies a file. The cp command issues a copy of the file 
- rm: remove files in a directory or the directory itself.
- mkdir: command makes a directory.
- chmod: command changes the mode of a file system object. Files can have read, write, and execute permissions.
- chown: command is used to change the ownership of a file/folder or even multiple files/folders for a specified user/group.
- cat: catcommand allows we to create single or multiple files, view contents of files, concatenate files (combining files), and redirect output in terminal or files.
- echo: command is used to display a text or a string to the standard output or a file.
- wc: command is used to find out the number of new lines, word count, byte, and characters count in a file specified by the file arguments.
- man: command is used to view the online reference manual pages for commands/programs.
- history: command is used to show previously used commands or obtain information about the commands executed by a user.
- locate: command is used to find a file and runs in the background, unlike the find command.
- diff: command compares two files line by line to find differences. The output will be the lines that are different.
- useradd: command creates a new user. The username is added after the useradd command
- exit: command exits the current shell.
- kill: command is used to end a process, usually an unresponsive one. The kill command also includes the process ID or the program name









## SQL Notes

SQL
DDL:
DDL is short name of Data Definition Language, which deals with database schemas and descriptions, of how the data should reside in the database.
●	CREATE - to create a database and its objects like (table, index, views, store procedure, function, and triggers)
●	ALTER - alters the structure of the existing database
●	DROP - delete objects from the database
●	TRUNCATE - remove all records from a table, including all spaces allocated for the records are removed
●	RENAME - rename an object

DML:
DML is short name of Data Manipulation Language which deals with data manipulation and includes most common SQL statements such SELECT, INSERT, UPDATE, DELETE, etc., and it is used to store, modify, retrieve, delete and update data in a database.
●	SELECT - retrieve data from a database
●	INSERT - insert data into a table
●	UPDATE - updates existing data within a table
●	DELETE - Delete all records from a database table
●	MERGE - UPSERT operation (insert or update)
 

DCL:
DCL is short name of Data Control Language which includes commands such as GRANT and mostly concerned with rights, permissions and other controls of the database system.
●	GRANT - allow users access privileges to the database
●	REVOKE - withdraw users access privileges given by using the GRANT command

TCL:
TCL is short name of Transaction Control Language which deals with a transaction within a database.
●	COMMIT - commits a Transaction
●	ROLLBACK - rollback a transaction in case of any error occurs
●	SAVEPOINT - to roll back the transaction making points within groups
SQL:

SQL is a standard language for storing, manipulating and retrieving data in databases.


SELECT:
The SELECT statement is used to select data from a database.
Syntax -
●	SELECT column1, column2, ...
FROM table_name;
●	Here, column1, column2, ... are the field names of the table you want to select data from. If you want to select all the fields available in the table, use the following syntax: ● SELECT * FROM table_name;
Ex –
●	SELECT CustomerName, City FROM Customers;


SELECT DISTINCT:
The SELECT DISTINCT statement is used to return only distinct (different) values.
Syntax –
 
●	SELECT DISTINCT column1, column2, ...
FROM table_name;
Ex –
●	SELECT DISTINCT Country FROM Customers;


WHERE:
The WHERE clause is used to filter records.
Syntax –
●	SELECT column1, column2, ...
FROM table_name
WHERE condition;
Ex –
●	SELECT * FROM Customers WHERE Country='Mexico';
Operator	Description
=	Equal
>	Greater than
<	Less than
>=	Greater than or equal
<=	Less than or equal
<>	Not equal. Note: In some versions of SQL this operator may be written as !=


AND, OR and NOT:
The WHERE clause can be combined with AND, OR, and NOT operators.
The AND and OR operators are used to filter records based on more than one condition:
●	The AND operator displays a record if all the conditions separated by AND are TRUE.
●	The OR operator displays a record if any of the conditions separated by OR is TRUE. The NOT operator displays a record if the condition(s) is NOT TRUE.
 
Syntax –
●	SELECT column1, column2, ...
FROM table_name
WHERE condition1 AND condition2 AND condition3 ...;
●	SELECT column1, column2, ...
FROM table_name
WHERE condition1 OR condition2 OR condition3 ...;
●	SELECT column1, column2, ...
FROM table_name
WHERE NOT condition;
Ex –
●	SELECT * FROM Customers
WHERE Country='Germany' AND City='Berlin';
●	SELECT * FROM Customers
WHERE Country='Germany' AND (City='Berlin' OR City='München');


ORDER BY:
The ORDER BY keyword is used to sort the result-set in ascending or descending order.
The ORDER BY keyword sorts the records in ascending order by default. To sort the records in descending order, use the DESC keyword.
Syntax –
●	SELECT column1, column2, ...
FROM table_name
ORDER BY column1, column2, ... ASC|DESC;
Ex –
●	SELECT * FROM Customers ORDER BY Country;
●	SELECT * FROM Customers
ORDER BY Country ASC, CustomerName DESC;


INSERT INTO:
The INSERT INTO statement is used to insert new records in a table.
 
Syntax –
●	INSERT INTO table_name (column1, column2, column3, ...) VALUES (value1, value2, value3, ...);
●	INSERT INTO table_name
VALUES (value1, value2, value3, ...);
*In the second syntax, make sure the order of the values is in the same order as the columns in the table.
Ex –
●	INSERT INTO Customers (CustomerName, ContactName, Address, City, PostalCode, Country)
VALUES ('Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway');


NULL Value:
It is not possible to test for NULL values with comparison operators, such as =, <, or
<>. We will have to use the IS NULL and IS NOT NULL operators instead.

Syntax –
●	SELECT column_names
FROM table_name
WHERE column_name IS NULL;
●	SELECT column_names
FROM table_name
WHERE column_name IS NOT NULL;
Ex –
●	SELECT CustomerName, ContactName, Address FROM Customers
WHERE Address IS NULL;


UPDATE:
The UPDATE statement is used to modify the existing records in a table.
Syntax –

●	UPDATE table_name
 
SET column1 = value1, column2 = value2, ... WHERE condition;
Ex –
●	UPDATE Customers
SET ContactName = 'Alfred Schmidt', City= 'Frankfurt' WHERE CustomerID = 1;
DELETE:
The DELETE statement is used to delete existing records in a table.
Syntax –
●	DELETE FROM table_name WHERE condition;
●	DELETE FROM table_name;
In 2ndsyntax, all rows are deleted. The table structure, attributes, and indexes will be intact
Ex –

●	DELETE FROM Customers WHERE CustomerName='Alfreds Futterkiste';


SELECT TOP:
The SELECT TOP clause is used to specify the number of records to return.
Syntax –

●	SELECT TOP number|percent column_name(s)
FROM table_name
WHERE condition;
●	SELECT column_name(s) FROM table_name WHERE condition LIMIT number;
●	SELECT column_name(s)
FROM table_name
ORDER BY column_name(s)
FETCH FIRST number ROWS ONLY;
●	SELECT column_name(s)
FROM table_name
WHERE ROWNUM <= number;
 
*In case the interviewer asks other than the TOP, rest are also correct. (Diff. DB Systems)
Ex –

●	SELECT TOP 3 * FROM Customers;
●	SELECT * FROM Customers LIMIT 3;
●	SELECT * FROM Customers FETCH FIRST 3 ROWS ONLY;
Aggregate Functions:
MIN():
The MIN() function returns the smallest value of the selected column.
Syntax –

●	SELECT MIN(column_name) FROM table_name WHERE condition;
Ex –
●	SELECT MIN(Price) AS SmallestPrice FROM Products;
MAX():
The MAX() function returns the largest value of the selected column.
Syntax –

●	SELECT MAX(column_name) FROM table_name
WHERE condition;
Ex –
●	SELECT MAX(Price) AS LargestPrice FROM Products;
COUNT():
The COUNT() function returns the number of rows that matches a specified criterion.
Syntax –

●	SELECT COUNT(column_name)
 
FROM table_name
WHERE condition;
Ex –
●	SELECT COUNT(ProductID) FROM Products;
AVG():
The AVG() function returns the average value of a numeric column.
Syntax –
●	SELECT AVG(column_name) FROM table_name WHERE condition;
Ex –
●	SELECT AVG(Price) FROM Products;
SUM():
The SUM() function returns the total sum of a numeric column.
Syntax –
●	SELECT SUM(column_name) FROM table_name
WHERE condition;
Ex –
●	SELECT SUM(Quantity) FROM OrderDetails;


LIKE Operator:
The LIKE operator is used in a WHERE clause to search for a specified pattern in a column. There are two wildcards often used in conjunction with the LIKE operator:
●	The percent sign (%) represents zero, one, or multiple characters
●	The underscore sign (_) represents one, single character
Syntax –
 
●	SELECT column1, column2, ...
FROM table_name
WHERE columnN LIKE pattern;
LIKE Operator	Description
WHERE CustomerName LIKE 'a%'	Finds any values that start with "a"
WHERE CustomerName LIKE '%a'	Finds any values that end with "a"
WHERE CustomerName LIKE '%or%'	Finds any values that have "or" in any position


WHERE CustomerName LIKE '_r%'	Finds any values that have "r" in the second position
WHERE CustomerName LIKE 'a_%'	Finds any values that start with "a" and are at least 2 characters in length
WHERE CustomerName LIKE 'a %'	Finds any values that start with "a" and are at least 3 characters in length
WHERE ContactName LIKE 'a%o'	Finds any values that start with "a" and ends with "o"


IN:
The IN operator allows you to specify multiple values in a WHERE clause. The IN operator is a shorthand for multiple OR conditions.
Syntax –
●	SELECT column_name(s)
FROM table_name
WHERE column_name IN (value1, value2, ...);
●	SELECT column_name(s)
FROM table_name
WHERE column_name IN (SELECT STATEMENT);
Ex –
●	SELECT * FROM Customers
WHERE Country IN ('Germany', 'France', 'UK');
●	SELECT * FROM Customers
 
WHERE Country IN (SELECT Country FROM Suppliers);


BETWEEN:
The BETWEEN operator selects values within a given range. The values can be numbers, text, or dates.
The BETWEEN operator is inclusive: begin and end values are included.
Syntax –
●	SELECT column_name(s)
FROM table_name
WHERE column_name BETWEEN value1 AND value2;
Ex –
●	SELECT * FROM Products
WHERE Price BETWEEN 10 AND 20;


Joins:
A JOIN clause is used to combine rows from two or more tables, based on a related column between them.
INNER JOIN:
The INNER JOIN keyword selects records that have matching values in both tables.
Syntax –

●	SELECT column_name(s)
FROM table1
INNER JOIN table2
ON table1.column_name = table2.column_name;
Ex –
●	SELECT Orders.OrderID, Customers.CustomerName FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID;


LEFT (OUTER) JOIN:
 
The LEFT JOIN keyword returns all records from the left table (table1), and the matching records from the right table (table2). The result is 0 records from the right side, if there is no match.
Syntax –
●	SELECT column_name(s)
FROM table1
LEFT JOIN table2
ON table1.column_name = table2.column_name;
Ex –
●	SELECT Customers.CustomerName, Orders.OrderID FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID ORDER BY Customers.CustomerName;
RIGHT (OUTER) JOIN:
The RIGHT JOIN keyword returns all records from the right table (table2), and the matching records from the left table (table1). The result is 0 records from the left side, if there is no match.
Syntax –
●	SELECT column_name(s)
FROM table1
RIGHT JOIN table2
ON table1.column_name = table2.column_name;
Ex –
●	SELECT Orders.OrderID, Employees.LastName, Employees.FirstName FROM Orders
RIGHT JOIN Employees ON Orders.EmployeeID = Employees.EmployeeID ORDER BY Orders.OrderID;


FULL (OUTER) JOIN:
The FULL OUTER JOIN keyword returns all records when there is a match in left (table1) or right (table2) table records.
Syntax:
●	SELECT column_name(s)
 
FROM table1
FULL OUTER JOIN table2
ON table1.column_name = table2.column_name
WHERE condition;
Ex –
●	SELECT Customers.CustomerName, Orders.OrderID FROM Customers
FULL OUTER JOIN Orders ON Customers.CustomerID=Orders.CustomerID ORDER BY Customers.CustomerName;


UNION:
The UNION operator is used to combine the result-set of two or more SELECT statements.
●	Every SELECT statement within UNION must have the same number of columns
●	The columns must also have similar data types
●	The columns in every SELECT statement must also be in the same order
The UNION operator selects only distinct values by default. To allow duplicate values, use UNION ALL
Syntax –
●	SELECT column_name(s) FROM table1
UNION
SELECT column_name(s) FROM table2;
●	SELECT column_name(s) FROM table1
UNION ALL
SELECT column_name(s) FROM table2;
Ex –
●	SELECT City FROM Customers UNION
SELECT City FROM Suppliers ORDER BY City;


GROUP BY:
The GROUP BY statement groups rows that have the same values into summary rows, like "find the number of customers in each country".
 
The GROUP BY statement is often used with aggregate functions
(COUNT(), MAX(), MIN(), SUM(), AVG()) to group the result-set by one or more columns. Syntax –
●	SELECT column_name(s) FROM table_name WHERE condition
GROUP BY column_name(s)
ORDER BY column_name(s);
Ex –
●	SELECT COUNT(CustomerID), Country FROM Customers
GROUP BY Country
ORDER BY COUNT(CustomerID) DESC;
HAVING:
The HAVING clause was added to SQL because the WHERE keyword cannot be used with aggregate functions.
*WHERE is given priority over HAVING.
Syntax –
●	SELECT column_name(s) FROM table_name WHERE condition
GROUP BY column_name(s)
HAVING condition
ORDER BY column_name(s);
Ex –
●	SELECT COUNT(CustomerID), Country FROM Customers
GROUP BY Country
HAVING COUNT(CustomerID) > 5;


CREATE DATABASE:
The CREATE DATABASE statement is used to create a new SQL database.
 
Syntax –

●	CREATE DATABASE databasename;


DROP DATABASE:
The DROP DATABASE statement is used to drop an existing SQL database.
Syntax –

●	DROP DATABASE databasename;


CREATE TABLE:
The CREATE TABLE statement is used to create a new table in a database.
Syntax –
●	CREATE TABLE table_name ( column1 datatype, column2 datatype, column3 datatype,
....
);
DROP TABLE:
The DROP TABLE statement is used to drop an existing table in a database.
Syntax –

●	DROP TABLE table_name;


TRUNCATE TABLE:
The TRUNCATE TABLE statement is used to delete the data inside a table, but not the table itself.
Syntax –

●	TRUNCATE TABLE table_name;


ALTER TABLE:
 
The ALTER TABLE statement is used to add, delete, or modify columns in an existing table.
The ALTER TABLE statement is also used to add and drop various constraints on an existing table.
Syntax –
●	ALTER TABLE table_name
ADD column_name datatype;
●	ALTER TABLE table_name
DROP COLUMN column_name;
●	ALTER TABLE table_name
MODIFY COLUMN column_name datatype;
Ex –
●	ALTER TABLE Customers ADD Email varchar(255);
●	ALTER TABLE Customers
DROP COLUMN Email;
●	ALTER TABLE Persons
ALTER COLUMN DateOfBirth year;



## Query Used For Creating A Database And A Table
CREATE DATABASE *database_name* <br/>
CREATE DATABASE IF NOT EXISTS *database_name* <br/>
USE *table_name* <br/>

CREATE TABLE *table_name* <br/>

## Query Used To Create A Table With Same Structure of Another Table
CREATE TABLE department_copy <br/>
AS (SELECT * TOP FROM department WHERE 1 = 2);

## Query Used To Create A Table With Same Structure With Data of Another Table
CREATE TABLE Emp <br/>
SELECT * FROM Employee

## Find The 2nd | 3rd | Nth Highest Salary
a. Using SubQuery
SELECT MAX(Salary) FROM Employee
WHERE Salary < (SELECT MAX(Salary) FROM Employee
WHERE Salary < (SELECT MAX(Salary) FROM Employee));

b. Using Limit
SELECT Salary FROM Employee
ORDER BY Salary DESC LIMIT N-1, 1;

c. Using Distinct
SELECT Salary FROM Employee E1 <br/>
WHERE (N-1) = ( <br/>
 SELECT COUNT(DISTINCT(e2.Salary)) FROM Employee e2 <br/>
 WHERE e2.Salary > e1.Salary); <br/>

## Find All Employees Who Hold Managerial Position
SELECT * FROM Employees <br/>
WHERE (Employee_ID IN(SELECT Manager_ID FROM Employees)); <br/>

## Find The Names Of The Employees Which Begins With A
SELECT Name FROM Employee <br/>
WHERE NAME LIKE 'A%'

## To Find Names Starting From Multiple Characters
SELECT Name FROM Employee <br/>
WHERE Name LIKE 'A%' OR Name LIKE 'N%' <br/>

## Display Current Date
SELECT CURRENT_DATE();

## Fetch Alternate Records from TABLE
*to fetch even number of records* <br/>
SELECT * FROM Employee WHERE id%2 == 0 <br/>

*to fetch odd number of records* <br/>
SELECT * FROM Employee WHERE id%2 = 1 <br/>

## Fetch The Common Records From Two Tables
SELECT * FROM Employee <br/>
INNER JOIN Emp ON Employee.ID = Emp.ID;

## Find Duplicate Rows in Table
SELECT column, COUNT(column) <br/>
FROM table_name <br/>
GROUP BY column <br/>
HAVING COUNT(column) > 1; <br/>

## Remove The Duplicate Rows in a Table
DELETE E1 FROM Employee E1 <br/>
INNER JOIN Employee E2 <br/>
WHERE E1.id < E2.id AND E1.Name = E2.Name; <br/>

## Find Nth Record From Table 
SELECT * FROM table_name LIMIT N-1, 1;

## Find First 5 Records From a Table
SELECT TOP 5 FROM *table_name*

OR 

(SELECT * FROM Employee <br/>
ORDER BY ID DESC LIMIT 5) <br/>
ORDER BY ID ASC; <br/>

## Find First Record From a Table
SELECT * FROM Employee LIMiT 1; <br/>

## Find Last Record From a Table
SELECT * FROM Employee ORDER BY ID desc LIMIT 1; <br/>

## Find Distinct Record Without Using DISTINCT Keyword
SELECT dept_id FROM Employee <br/>
GROUP BY dept_id; <br/>

## Find Max Salary for Each Department
SELECT dept_id, MAX(salary) <br/> 
FROM Employee <br/>
GROUP BY dept_id; <br/>

## Find The Department Wise Count of Employees Sorted By Department's Count In Ascending Order
SELECT dept_id, COUNT(dept_id) <br/>
FROM Employee <br/>
GROUP BY dept_id <br/>
ORDER BY COUNT(dept_id); <br/>

## How To Change Data Type Of A Column
ALTER TABLE table_name MODIFY column_name new_datat_type <br/>
*Example:* <br/>
ALTER TABLE Employee MODIFY manager_id BIGINT; <br/>