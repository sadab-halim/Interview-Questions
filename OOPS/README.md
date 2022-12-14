## What is Object Oriented Programming?
Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than functions and logic.
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





## Pillar of OOPS
- Polymorphism
- Encapsulation
- Inheritance
- Abstraction

## Polymorphism
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


### Runtime Poylmorphism
This type of polymorphism is achieved by Function Overriding.

It is also known as *Dynamic Method Dispatch* in Java.

**Function Overriding** occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden. 

### Why Do We Need Polymorphism?
Polymorphism allows us to reuse code by creating one function that's usable for multiple uses. We can also make operators polymorphic and use them to add not only numbers but also combine strings. This saves time and allows for a more streamlined program.





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
- It provides you the control over the data.
- It is a way to achieve data hiding
- The encapsulate class is easy to test. So, it is better for unit testing.
### How Do We Achieve Encapsulation?
The encapsulation can be achieved by the use of 3 keywords in java:

- **private:** The variables or methods that have been declared as private will not be accessible outside the class in which they have been declared. But, an outer class cannot be made private.

- **protected:** The variable or methods that have been declared as private will be accessible inside the class in which they have been defined and in the classes which extends this class. Also, an outer cannot be made protected.

- **public:** The variable or methods that have been declared as public will be accessible anywhere. Also, a class can be made public.





## Abstraction
An abstraction is a way of hiding the implementation details and showing only the functionality to the users. In other words, it ignores the irrelevant details and shows only the required one.



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

### Interface
Multiple inheritance where derived class will extend from multiple base classes.

## Limitations of OOPS
- The length of the programmes developed using OOP language is much larger than the procedural approach. Since the programme becomes larger in size, it requires more time to be executed that leads to slower execution of the programme.
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

### Access Modifiers
Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions. <br/>

There are 3 types of access modifiers available in C++:

- **Public:** All the class members declared under the public specifier will be available to everyone. 

The data members and member functions declared as public can be accessed by other classes and functions too. 

The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 

```java:
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

```java:
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

```java:
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
- Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
- Constructor does not have a return value, hence they do not have a return type.
- Constructors can be overloaded.
- Constructor can not be declared virtual.

Constructors can be defined inside or outside the class declaration:-

The syntax for defining the constructor within the class: <br/>
`<class-name> (list-of-paramters) {// constructor defn}`

The syntax for defining the constructor outside the class: <br/>
`<class-name>: :<class-name> (list-of-paramters) {// constructor defn}`

### Example - 1
```java:
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
```java:
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


### Types of Constructors:
- **Default Constructor:** is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.

**NOTE:** Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.

```java:
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

To create a parameterized constructor, simply add parameters to it the way you would to any other function. 

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

```java:
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
| Shallow copy is faster | Deep copy is comparatively slower |

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

```java:
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
- It cannot be declared static or const.
- The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
- Destructor neither requires any argument nor returns any value.
- It is automatically called when object goes out of scope. 
- Destructor release memory space occupied by the objects created by constructor.
- A destructor should be declared in the public section of the class.
- In destructor, objects are destroyed in the reverse of an object creation.

Syntax for defining the destructor within the class: <br/>
`~ <class-name>(){}`

Syntax for defining the destructor outside the class: <br/>
`<class-name>: : ~ <class-name>(){}`

### When is Destructor called?
A destructor is called automatically when the object goes out of scope: 
- the function ends
- the program ends
- a block containing local variable ends
- a delete operator is called

### Private Destructors
Destructors with the access modifier as private are known as Private Destructors. Whenever we want to prevent the destruction of an object, we can make the destructor private.

### What is the use of Private Destructor?
Whenever we want to control the destruction of objects of a class, we make the destructor private. For dynamically created objects, it may happen that you pass a pointer to the object to a function and the function deletes the object. 

If the object is referred after the function call, the reference will become dangling.

### Virtual Destructor
A virtual destructor is used to free up the memory space allocated by the derived class object or instance while deleting instances of the derived class using a base class pointer object.

### Pure Virtual Destructor
Pure virtual destructors are legal in standard C++ and one of the most important things to remember is that if a class contains a pure virtual destructor, it must provide a function body for the pure virtual destructor. 

It requires a function body because destructors (unlike other functions) are not actually ‘overridden’, rather they are always called in the reverse order of the class derivation. This means that a derived class destructor will be invoked first, then the base class destructor will be called. 

If the definition of the pure virtual destructor is not provided, then what function body will be called during object destruction? Therefore the compiler and linker enforce the existence of a function body for pure virtual destructors. 

### Why do we need to write a user-defined destructor?
If we do not write our own destructor in class, compiler creates a default destructor for us. The default destructor works fine unless we have dynamically allocated memory or pointer in class. 

When a class contains a pointer to memory allocated in class, we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leak.

### Can a destructor be virtual?
Yes, In fact, it is always a good idea to make destructors virtual in base class when we have a virtual function

### Important Keywords
- **static keyword:** is mainly used for memory management. It can be used with variables, methods, blocks and nested classes. It is used to share the same variable or method of a given class. Basically, static is used for a constant variable or a method that is same for every instance of a class

- **Virtual keyword:** is used to modify a method, property, or event declaration and allow for it to be overridden in a derived class.For example, this method can be overridden by any class that inherits it.

- **Abstract keyword:** is used to declare the method or a class as abstract.

  **Abstract Class:** A class which contains the abstract keyword in its declaration is known as an abstract class.
  - Abstract classes may or may not contain abstract methods, i.e., methods without a body ( public void get(); )
  - But, if a class has at least one abstract method, then the class must be declared abstract.
  - If a class is declared abstract, it cannot be instantiated.
  - To use an abstract class, you have to inherit it from another class, provide implementations for the abstract methods in it.
  - If we want to inherit an abstract class, you have to provide implementations to all the abstract methods in it.

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
   - this is a keyword that refers to the current instance of the class. 
   - There can be 3 main usage of this keyword in C++. 
   - It can be used to pass current object as a parameter to another method. 
   - It can be used to refer current class instance variable. 
   - It can be used to declare indexers.

- **new keyword:** signifies a request for the memory allocation on the heap. If the sufficient memory is available, it initializes the memory and returns its address to the pointer variable. The new operator should only be used if the data object should remain in memory until delete is called

- **const keyword:** The const keyword specifies that a variable's value is constant and tells the compiler to prevent the programmer from modifying it.

- **Java super keyword:** The super keyword refers to superclass (parent) objects. It is used to call superclass methods, and to access the superclass constructor. The most common use of the super keyword is to eliminate the confusion between superclasses and subclasses that have methods with the same name.


### Virtual Function
- A virtual function is a member function in the base class that we redefine in a derived class. 
- It is declared using the virtual keyword.
- It is used to tell the compiler to perform dynamic linkage or late binding on the function.

- There is a necessity to use the single pointer to refer to all the objects of the different classes. So, we create the pointer to the base class that refers to all the derived objects. But, when base class pointer contains the address of the derived class object, always executes the base class function. This issue can only be resolved by using the 'virtual' function.

- When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

Rules of Virtual Function:
- Virtual functions must be members of some class.
- Virtual functions cannot be static members.
- They are accessed through object pointers.
- They can be a friend of another class.
- A virtual function must be defined in the base class, even though it is not used.

- The prototypes of a virtual function of the base class and all the derived classes are identical. 
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
- The "do-nothing" function is known as a pure virtual function. 
- A pure virtual function is a function declared in the base class that has no definition relative to the base class.




## Object Oriented Design Interview Questions
### Design a HashMap
### Design a LRU Cache
### Design a Call Center
### Design a Parking Lot
### Design an Online Chat

## Miscellaneous
### C vs C++ vs Java
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
Early (or static) binding refers to compile time binding and Late (or dynamic) binding refers to runtime binding (for example when you use reflection).

### What is the default access modifier in a class?
## How many instances can be created for an abstract class?
- Abstract Class is Half Define Class. 
- Abstract class not allowed to create an Instance (Object). 
- So, we can not create any instance then answer is 0. There are no objects for abstract class.
## Define Garbage Collection. How does it work?
- Garbage collection in Java is the process by which Java programs perform automatic memory management. 
- Java programs compile to bytecode that can be run on a Java Virtual Machine, or JVM for short. 
- When Java programs run on the JVM, objects are created on the heap, which is a portion of memory dedicated to the program. 
- Eventually, some objects will no longer be needed. The garbage collector finds these unused objects and deletes them to free up memory.

- Java garbage collection is an automatic process. Automatic garbage collection is the process of looking at heap memory, identifying which objects are in use and which are not, and deleting the unused objects. 

### Define Manipulators
### What do you mean by finally block?
### What is a final variable?
### What is meany by an exception?
### Is an error basically the same as an exception?
### What is Exception Handling
### What is the method 'finalize' used for?
### What are the three arguments of a ternary operator?
### Describe the concept of Enum
### Basic understanding of design patterns
### Is it possible for a class to inherit the constructor of its base class?
### When should I use a struct instead of a class?
### Cohesion vs Coupling