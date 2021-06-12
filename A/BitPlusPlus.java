import java.util.*;

public class BitPlusPlus {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x=0;
        String s[] = new String[n+1];
        for(int i=0;i<n;i++){
            s[i] = sc.next();
            if(s[i].equals("++X") || s[i].equals("X++"))
                x++;
            if(s[i].equals("--X") || s[i].equals("X--"))
                x--;
        }
        System.out.println(x);
    }
}
