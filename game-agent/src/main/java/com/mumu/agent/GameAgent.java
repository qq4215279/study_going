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
     * agentmain
     * @param agentArgs 参数
     * @param inst inst
     * @return void
     * @date 2023/11/20 18:03
     */
    public static void agentmain(String agentArgs, Instrumentation inst) throws IOException, ClassNotFoundException {
        String[] s = agentArgs.split(" ");
        String classesPath = s[0];
        String classNames = s[1];
        System.out.println("classesPath: " + classesPath);
        System.out.println("classNames: " + classNames);

        String[] split = classNames.split(";");
        for (String className : split) {
            String[] nameArr = className.split("\\.");
            String shortName = nameArr[nameArr.length - 1];

            Class<?> classes = Class.forName(className);
            Logger log = LoggerFactory.getLogger(classes);

            FileInputStream fis = null;
            byte[] classBytesArr = new byte[0];
            try {
                File file = new File(classesPath + "\\" + shortName + ".class");
                fis = new FileInputStream(file);
                classBytesArr = new byte[fis.available()];
                fis.read(classBytesArr);
            } catch (IOException e) {
                e.printStackTrace();
                log.error("loadAgent#Fail#classFileNotFind#className#{}", className);
            } finally {
                fis.close();
            }

            boolean success = true;
            ClassDefinition cla = new ClassDefinition(classes, classBytesArr);

            try {
                inst.redefineClasses(new ClassDefinition[]{cla});
            } catch (Exception e) {
                success = false;
                e.printStackTrace();
                log.error("loadAgent#Fail#className#{}", className);
                log.error("loadAgent#Fail#{}", e);
            } finally {
                if (success) {
                    log.info("loadAgent#Success#className#{}", className);
                }
            }

        }

    }
}
