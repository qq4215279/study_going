package com.mumu;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.lang.instrument.ClassDefinition;
import java.lang.instrument.Instrumentation;
import java.lang.instrument.UnmodifiableClassException;

/**
 * TestAgent
 * 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
 * @author liuzhen
 * @version 1.0.0 2023/11/14 17:24
 */
public class TestAgent {

    /*public static void premain(String agentArgs, Instrumentation inst) throws IOException, UnmodifiableClassException, ClassNotFoundException {
        System.out.println("我是两个个参数的 Java Agent premain");

        File file = new File("HelloWorld");
        FileInputStream fi = new FileInputStream(file);
        byte[] fb = new byte[fi.available()];
        fi.read(fb);
        ClassDefinition cla = new ClassDefinition(HelloWorld.class, fb);
        inst.redefineClasses(new ClassDefinition[]{cla});
        System.out.println("agent success");
    }*/

    public static void premain(String agentArgs) {
        System.out.println("我是一个参数的 Java Agent premain");
    }

   /* public static void agentmain(String agentArgs) {
        System.out.println("我是一个参数的 Java Agent agentmain");
    }*/

    /**
     * 1. 编译: javac -d out -encoding UTF-8  com\mumu\TestAgent.java
     *
     * 2. 打jar: jar cvfm TestAgent.jar MANIFEST.MF -C out .
     *
     *
     * @param agentArgs agentArgs
     * @param inst inst
     * @return void
     * @date 2023/11/14 18:03
     */
    public static void agentmain(String agentArgs, Instrumentation inst) throws UnmodifiableClassException, IOException, ClassNotFoundException {
        System.out.println("agentArgs: " + agentArgs);

        String[] s = agentArgs.split(" ");
        String pathName = s[0];
        File file = new File(pathName);
        FileInputStream fis = new FileInputStream(file);
        byte[] classBytesArr = new byte[fis.available()];
        fis.read(classBytesArr);

        String className = s[1];
        Class<?> aClass = Class.forName(className);
        ClassDefinition cla = new ClassDefinition(aClass, classBytesArr);

        // Logger log = LoggerFactory.getLogger(aClass);
        try {
            inst.redefineClasses(new ClassDefinition[]{cla});
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("agent fail!");
            // log.error("agent fail 11111 #{}", e);
        }  finally {
            fis.close();

            // log.info("info 我是两个参数的 Java Agent agentmain");
            // log.error("error 我是两个参数的 Java Agent agentmain");
            System.out.println("我是两个参数的 Java Agent agentmain");
        }
    }
}
