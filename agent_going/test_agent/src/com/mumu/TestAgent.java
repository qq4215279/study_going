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

    /**
     * 1. 编译: javac -d out -encoding UTF-8  com\mumu\TestAgent.java
     * 2. 打jar: jar cfe TestAgent.jar com.mumu.TestAgent -C out .
     * 3. 运行: java -jar TestAgent.jar
     * 3. 运行: java -javaagent:TestAgent.jar -jar TestAgent.jar
     * java -jar F:\Code\MumuSpace\agent_going\test_agent\src\TestAgent.jar
     *
     * @param agentArgs agentArgs
     * @param inst inst
     * @return void
     * @date 2023/11/14 18:03
     */
    public static void premain(String agentArgs, Instrumentation inst) throws IOException, UnmodifiableClassException, ClassNotFoundException {
        File file;
        file = new File("HelloWorld");
        FileInputStream fi = new FileInputStream(file);
        byte[] fb = new byte[fi.available()];
        fi.read(fb);
        ClassDefinition cla = new ClassDefinition(HelloWorld.class, fb);
        inst.redefineClasses(new ClassDefinition[]{cla});
        System.out.println("agent success");

    }
}
