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