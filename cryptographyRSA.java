import java.security.InvalidKeyException;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.NoSuchAlgorithmException;
import java.util.Scanner;

import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

public class cryptographyRSA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        KeyPairGenerator keyPairGenerator=null;
        try {
            keyPairGenerator = KeyPairGenerator.getInstance("RSA");
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
        }

        keyPairGenerator.initialize(1024);
        KeyPair keyPair = keyPairGenerator.generateKeyPair();

        Cipher cipher=null;
        try {
            cipher = Cipher.getInstance("RSA/ECB/PKCS1Padding");
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
        } catch (NoSuchPaddingException e) {
            e.printStackTrace();
        }

        try {
            cipher.init(Cipher.ENCRYPT_MODE, keyPair.getPublic());
        } catch (InvalidKeyException e) {
            e.printStackTrace();
        }

        String s = sc.nextLine();
        byte[] m = s.getBytes();
        cipher.update(m);

        byte[] cipherText=null;
        try {
            cipherText = cipher.doFinal();
        } catch (IllegalBlockSizeException e) {
            e.printStackTrace();
        } catch (BadPaddingException e) {
            e.printStackTrace();
        }
        /* try {
            System.out.println(new String(cipherText, "UTF8"));
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        } */
        System.out.println(new String(cipherText));



        sc.close();
    }
}