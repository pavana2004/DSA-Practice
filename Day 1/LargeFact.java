import java.math.BigInteger;

public class LargeFact {

    public static void main(String fact[]) {
        int n = 50;
        BigInteger f = BigInteger.ONE;
        for (int i = 2; i <= n; i++) {
            f = f.multiply(BigInteger.valueOf(i));
        }
        System.out.println(f);
    }
}