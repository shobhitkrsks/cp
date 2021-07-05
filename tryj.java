import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;




public class tryj
{
    public static class student
    {
        String name;
        int roll,marks;
        public student()
        {
            System.out.println("Default constructor");
        }
        public student(String n,int r,int m)
        {
            roll=r;
            name=n;
            marks=m;
        }
    };

    public static class academic extends student
    {
        int percent;
        public academic(int p,String n,int m, int r)
        {
            percent=p;
            System.out.println("Parametrize constructor");
        }
        void show()
        {
            System.out.println("name"+name+"marks"+marks+"roll"+roll+"percentage"+percent);
        }
    };
    

    public static void main(String[] args) 
    {
        
        // academic A2=new academic(50,"Ajay",78,101);
        // A2.show();
        // academic A1=new academic();

        String s1="2";
        String s2="1";
        int res=s1.compareTo(s2);
        System.out.println(res);

    }
} 
//01234
//012345