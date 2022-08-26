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