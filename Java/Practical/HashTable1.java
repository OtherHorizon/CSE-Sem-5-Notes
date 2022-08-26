
// 4.	Create a program to set view of Keys from Java Hashtable.
import java.util.*; 
@SuppressWarnings("unchecked")
class HashTable1 { 
    public static void main(String[] arg) 
    { 
        // creating a hash table 
        Hashtable<Integer, String> h = new Hashtable<Integer, String>(); 
  
        Hashtable<Integer, String> h1 = new Hashtable<Integer, String>(); 
  
        h.put(3, "C"); 
        h.put(2, "B"); 
        h.put(1, "A"); 


       
        // create a clone or shallow copy of hash table h 
        
        h1 = (Hashtable<Integer, String>)h.clone(); 
  
        // checking clone h1 
        System.out.println("values in clone: " + h1); 
  
        // clear hash table h 
        //h.clear(); 
	    h.remove(2);
  
        // checking hash table h 
        System.out.println("after clearing: " + h); 
        Enumeration<Integer> e = h.keys();
        while (e.hasMoreElements()) {
         System.out.println(e.nextElement());
}
    } 
} 