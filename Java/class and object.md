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