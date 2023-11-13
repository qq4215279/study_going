package com.mumu.lesson5.example1;

import java.lang.instrument.Instrumentation;

/**
 * MyAgent
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 22:35
 */
public class MyAgent {

    public static void premain(String agentArgs, Instrumentation inst) {
        System.out.println("loading static agent...");
        MyTransformer monitor = new MyTransformer();
        inst.addTransformer(monitor);
    }
}
