import java.security.NoSuchAlgorithmException;
import java.util.Scanner;

import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;

public class cryptographyAES {

    public static class Aes256Class {

        private SecretKey secretKey;

        public Aes256Class() {
            try {
                KeyGenerator keyGenerator = KeyGenerator.getInstance("AES");
                keyGenerator.init(128); //128 or 192 or 256
                secretKey = keyGenerator.generateKey();


                /* String secretkeytxt=Base64.getEncoder().encodeToString(secretKey.getEncoded());
                System.out.println(secretkeytxt);

                byte[] secretkeybytes=Base64.getDecoder().decode(secretkeytxt);
                SecretKey secretkeytxtdecoded=new SecretKeySpec(secretkeybytes, 0, secretkeybytes.length, "AES");
                if(secretkeytxtdecoded==secretKey)
                    System.out.println("EQUAL");
                else
                    System.out.println("DIFFERENT"); */


            } catch (NoSuchAlgorithmException e) {
                e.printStackTrace();
            }
        }

        public byte[] makeAes(byte[] rawMessage, int cipherMode) {
            try {
                Cipher cipher = Cipher.getInstance("AES");
                cipher.init(cipherMode, this.secretKey);
                byte[] output = cipher.doFinal(rawMessage);
                return output;

            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Aes256Class aes256 = new Aes256Class();

        String s = sc.nextLine();
        String targetString = s;

        byte[] encryptedString = aes256.makeAes(targetString.getBytes(), Cipher.ENCRYPT_MODE);
       
        System.out.println("Encoded string: " + new String(encryptedString));
        
        byte[] decryptedString = aes256.makeAes(encryptedString, Cipher.DECRYPT_MODE);
        
        System.out.println("Decoded string: " + new String(decryptedString));
       
            
        sc.close();
    }
}