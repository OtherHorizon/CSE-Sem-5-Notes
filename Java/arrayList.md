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