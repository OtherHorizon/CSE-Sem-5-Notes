# Content

- [Abstraction](#abstraction)
- [Encapsulation and Data Privacy](#encapsulation-and-data-privacy)
- [Features of OOPs](#features-of-oops)
- [Polymorphism](#polymorphism)
- [Throw and Throws](#throw-and-throws)
- [ArrayList](#arraylist)
- [Class and Object](#class)
- [Hashtable](#hash-table)
- [Hashmap](#hashmap)
- [TreeMap](#treemap) 

# Abstraction

An abstract class is one that is not used to create object. An abstract class is designed only to be act as a base class (To be inherited by another class). An `abstract` keyword is used for classes and method.

### Advantages of abstractions
- It reduce the complexity of viewing things
- Help to increase the security of a program as only essential details are produced to the user

# Encapsulation and Data Privacy

<img src="https://i.imgur.com/ICu1Csh.jpg" width="400px" height="300px"></img>

Encapsulation is defined as the wrapping up of data under a single unit. Data encapsulation and data hiding fall under the category of Object Oriented Programming. Technically, in encapsulation the variable or data of a class is hidden from any other classes and can be accessed only through any member function of its own class in which it is declared.

## _Data hiding has many uses_

- Security purpose and data protection from misuse and unauthorized access.
- Hiding the physical storage layout  

    >"Data hiding is usually used or executed on volatile and sensitive data"

<br>

## _Difference between the two_

1. Data encapsulation is a process while data hiding is both process and technique
1. The data in data encapsulation is either public or private while the data in data hiding is private or non accessible
1. Data encapsulation is on the data inside the capsule while data hiding is concerned with restriction in terms of access and use.

# Features of OOPS
* Reusability
* Single Inheritance: Derived class with one base class
* Multiple Inheritance: Derived class with multiple base classes
* Multi-Level Inheritance: Mechanism of deriving a class from another derived class
* Hierarchial Inheritance: One class may be inherited by more than one classes
* Hybrid Inheritance: Some we may need to apply two or more types of inheritance to design a program

# Polymorphism

The ability to take more than one form this is similar to a particular word having several different meaning depending on the context. Polymorphism is a term that describe a situation where 1 name may refer to different methods. In Java there are 2 types of polymorphism:-
    
- Overloading
- Overriding

<hr>

## Overloading

when two or more methods in the same class have the same name but different parameters/types, its called overloading.

```java
class MethodOverloadingEx {
 
static int add(int a, int b)
    {
      return a + b;
    }
 
static int add(int a, int b, int c)
    {
        return a + b + c;
    }
 
public static void main(String args[])
    {
        System.out.println("add() with 2 parameters");
        System.out.println(add(4, 6));
       
        System.out.println("add() with 3 parameters");
        System.out.println(add(4, 6, 7));
    }
    }
```

<br>

## Overriding
When the method signature(name and parameter) are same in the superclass and the child class, it's called overriding

```java
class Animal {
 
    void eat()
    {
        System.out.println("eat() method of base class");
        System.out.println("eating.");
    }
}
 
class Dog extends Animal {
 
    void eat()
    {
        System.out.println("eat() method of derived class");
        System.out.println("Dog is eating.");
    }
}
 
class MethodOverridingEx {
 
    public static void main(String args[])
    {
        Dog d1 = new Dog();
        Animal a1 = new Animal();
 
        d1.eat();
        a1.eat();
 
    }
}
```
<hr>

It helps to increase the readability of the program. It is used to grant the `specific implementation` of the method which is already provided

# Throw and Throws

The `throw` keyword in java is used to explicitly throw an exception from a method or any block of code. It is mainly used to throw custom exceptions.

<br>

The `throws` keyword is used to declare which exception can be thrown from a method.

### _Example:_

1. Throws
    ```java
    import java.io.*;
    class file1{
        public static void main(String[] args) throws IOException{
            FileWriter file = new FileWriter("c:\\Data1.txt");
            file.write("XXYY");
            file.close();
        }
    }
    ```
1. Throw
    ```java
    public class TestThrow1{
        //function to check if person is eligible to vote or not
        public static void validate(int age){
            if(age<18){
                //throw Arithmetic exception if not eligible to vote
                throw new ArithmeticException("Person is not eligible to vote");
            }
            else{
                System.out.println("Person is eligible to vote!!");
            }
        }

        //main method
        public static void main(String args[]){
            //calling the function
            validate(13);
            System.out.println("rest of the code...");
        }
    } 
    ```
# ArrayList
the arraylist is a resizable array which can be found in the java.util package. It provide us with dynamic array in java, it may be slower than standard array but can be helpful inprogram where lots of manipulation in the array is needed. this resizable array is implementation of list interface. For example
```java
import java.util.ArrayList;
public class Main {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("BMW");
        cars.add("Ford");
        cars.add("Mazda");
        System.out.println(cars);
    }
}
```

# Class

It is a comprehensive data type which represent the blueprint of object in.

|class|Data Members|Method|
|:--:|:--:|:--:|
|Person|ID|eat()|
||name|study()|
||age|sleep()|
||city|play()|

# Object

It is a basic unit and object are the basic runtime entity. Object take up the space in the memory when a program is executed. The object interact by sending messages by one another. Object are the actual execution of the class.

# Class and object

- Classes is a blueprint while object are actual execution int he real world.
- Classes is a definition while object is an instance of a class creation.



```java
class Employee{ 
    float salary=40000;
}

class Programmer extends Employee{ //class
    int bonus = 10000;
    public static void main(String args[]){
        Programmer p = new Programmer(); //Object
        System.out.println("Programmer salary is: "+p.salary);
        System.out.println("Bonus of Programmer is: " + p.bonus);
    }
}
```

# Hash Table
A hash table maps `key` to `value`. Any not null object can be used as a key or as a value. A hash table is an array of a list where each list is knows as a basket. Hash table is a data structure which stores data in an associative manner

# HashMap
Hash Map in java is a collection that implements map interface `HashMap(k,v)` stores the data in `key-value` pair. They are unique identification used to associate each value on a map. HashMap is an unordered collection, it doesn't quarantee any specific order of the element.

# TreeMap
TreeMap is a map that maintain its entries in ascending order, sorted according to key. TreeMap class is efficient for traversing the key in a sorted order. A treeMap provides an efficient means of storing key-value pair in sorted order and allwo rapid retrival. Unlike a hashMap, a treeMap gurantees that its element will be stored in ascending key order. 

