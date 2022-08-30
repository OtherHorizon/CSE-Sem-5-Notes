import java.util.*; 
@SuppressWarnings ("unchecked")
class HashTable1 { 
    public static void main(String[] arg) 
    { 
        Hashtable<Integer, String> h = new Hashtable<Integer, String>(); 
  
        Hashtable<Integer, String> h1 = new Hashtable<Integer, String>(); 
  
        h.put(3, "C"); 
        h.put(2, "B"); 
        h.put(1, "A"); 


       
        h1 = (Hashtable<Integer, String>)h.clone(); 
  
        System.out.println("values in clone: " + h1); 
  
	    h.remove(2);
  
        System.out.println("after clearing: " + h); 
        Enumeration<Integer> e = h.keys();
        while (e.hasMoreElements()) {
        System.out.println(e.nextElement());
}
    } 
} 