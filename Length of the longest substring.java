/*
aman kumar jha
*/
import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

class GFG {
    public int lengthsubstring(String s)
    {
        int n = s.length(), ans = 0;
        Map<Character, Integer> map = new HashMap<>();
        for (int j = 0, i = 0; j < n; j++) {
            if (map.containsKey(s.charAt(j))) {
                i = Math.max(map.get(s.charAt(j)), i);
            }
            ans = Math.max(ans, j - i + 1);
            map.put(s.charAt(j), j + 1);
        }
        return ans;
    }
	public static void main (String[] args)
	{
	    GFG obj=new GFG();
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0)
		{
		    t--;
		    String s=sc.next();
		    System.out.println(obj.lengthsubstring(s));
		}
	}
}
