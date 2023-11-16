package com.mumu;

import java.io.FileInputStream;
import java.io.IOException;
import java.lang.instrument.IllegalClassFormatException;
import java.security.ProtectionDomain;

/**
 * Transformer
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/14 16:49
 */
public class Transformer {
    public byte[] transform(ClassLoader loader, String className, Class<?> classBeingRedefined, ProtectionDomain protectionDomain, byte[] classfileBuffer) throws IllegalClassFormatException {
        if (className.equals("HelloWorld")) {
            try {
                return getByteFromFile();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return classfileBuffer;
    }

    private byte[] getByteFromFile() throws IOException {
        FileInputStream fi = new FileInputStream("HelloWorld");
        byte[] fileByte = new byte[fi.available()];
        fi.read(fileByte);
        return fileByte;

    }
}
