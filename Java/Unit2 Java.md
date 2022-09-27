# Wrapper class
The wrapper class provide the mechanism to wrap a primitive value into a wrapper class object.  
Wrapper class a way to use premitive datatype(int, bool, etc.) as object.  
Auto boxing and unboxing feature convert premetive into object and object into premitive automatically. The automatic conversion of premitive into an object is known as Auto-boxing and vice versa unboxing.  
> "Wrapper class will convert premitive data type into object. The object is needed to support synchronization in multi-threading"

Example: 

1. 
```java
class wrapper{
  public static void main(String[] args) {

    // creates objects of wrapper class
    Integer aObj = Integer.valueOf(23);
    Double bObj = Double.valueOf(5.55);

    // converts into primitive types
    int a = aObj.intValue();
    double b = bObj.doubleValue();

    System.out.println("The value of a: " + a);
    System.out.println("The value of b: " + b);
  }
}
```  
2. 
```java
//Java program to convert primitive into objects 
//Autoboxing example of int to Integer
public class WrapperExample1{
public static void main(String args[]){
//Converting int into Integer
int a=20;
Integer i=Integer.valueOf(a);//converting int into Integer explicitly 
Integer j=a;//autoboxing, now compiler will write Integer.valueOf(a) internally

System.out.println(a+" "+i+" "+j);
}}
```