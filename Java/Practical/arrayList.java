import java.util.ArrayList;
import java.util.List;

public class arrayList {
    public static void main(String[] args) {
        List<Integer> al = new ArrayList<>();

        al.add(10);
        al.add(20);
        al.add(30);
        al.add(1);
        al.add(2);

        System.out.println(al);

        al.remove(1);
        al.remove(1);

        al.remove(Integer.valueOf(1));
        al.remove(Integer.valueOf(2));
        
        System.out.println(al);
    }    
}
