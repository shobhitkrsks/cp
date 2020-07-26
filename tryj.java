import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;


public class tryj
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        Date date=new Date();

        SimpleDateFormat simpleDateFormat=new SimpleDateFormat("yyyyMMddHHmmss");
        System.out.println(simpleDateFormat.format(date));
        sc.close();
    }
} 
//01234
//012345