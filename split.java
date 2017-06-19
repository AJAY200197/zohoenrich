import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.nextLine();
		int l = a.length();
		int i=0,c=0;
		for( i =0;i<l;i++){
		    if(a.charAt(i) == '@'){
		        c++;
		    }
		}int t = c/2;
		int o=0,v=0;
		String[] b = a.split(" ");
		for(i=0;i<c;i++)
		{
		String[] di = b[i].split("@");
		int ei = Integer.parseInt(di[0]);
		int fi = Integer.parseInt(di[1]);
		o = o+ei;
		v= v+fi;
	   }
	   float avg;
	   avg = (float)o/(float)v;
	   System.out.printf("%.2f ",avg);
	   System.out.print("kmph");
    }
}
