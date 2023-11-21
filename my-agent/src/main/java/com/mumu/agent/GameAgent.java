package com.mumu.agent;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.lang.instrument.ClassDefinition;
import java.lang.instrument.Instrumentation;

/**
 * GameAgent
 * 游戏代理
 * @author liuzhen
 * @version 1.0.0 2023/11/20 14:53
 */
public class GameAgent {

    /**
     * premain
     * @param agentArgs agentArgs
     * @return void
     * @date 2023/11/20 18:02
     */
    public static void premain(String agentArgs) {
        System.out.println("我是一个参数的 Java Agent premain");
    }

    /**
     * agentmain
     * @param agentArgs agentArgs
     * @param inst inst
     * @return void
     * @date 2023/11/20 18:03
     */
    public static void agentmain(String agentArgs, Instrumentation inst) throws IOException, ClassNotFoundException {
        String[] s = agentArgs.split(" ");
        String classesPath = s[0];
        String className = s[1];
        System.out.println("classesPath: " + classesPath);
        System.out.println("className: " + className);

        File file = new File(classesPath);
        FileInputStream fis = new FileInputStream(file);
        byte[] classBytesArr = new byte[fis.available()];
        fis.read(classBytesArr);

        boolean success = true;

        Class<?> aClass = Class.forName(className);
        ClassDefinition cla = new ClassDefinition(aClass, classBytesArr);

        Logger log = LoggerFactory.getLogger(aClass);
        try {
            inst.redefineClasses(new ClassDefinition[]{cla});
        } catch (Exception e) {
            success = false;
            e.printStackTrace();
            log.error("agent fail #{}", e);
        }  finally {
            fis.close();
        }

        System.out.println("agent isSuccess:" + success);
    }
}
