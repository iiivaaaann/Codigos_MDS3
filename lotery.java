import java.util.Random;
import java.util.Scanner;

public class Main {
    private static final int MAX_NUMBER = 1_234_000_100;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long seed=System.currentTimeMillis();
        System.out.println(System.currentTimeMillis());
        long num1=scanner.nextLong();
        long num2=scanner.nextLong();
        for (long i=1; i<60000;i++){
            long act=seed-i;
            Random random1 =new Random(act);
            if(random1.nextInt(MAX_NUMBER)==num1){
                if(random1.nextInt(MAX_NUMBER)==num2){
                    seed=act;
                }
            }
        }
        Random random1 =new Random(seed);
        System.out.println(random1.nextInt(MAX_NUMBER));
        System.out.println(random1.nextInt(MAX_NUMBER));
        System.out.println(random1.nextInt(MAX_NUMBER));
    }
}
