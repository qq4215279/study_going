package com.mumu.lesson5.example2;

import com.mumu.lesson5.example2.MyTransformer;

import java.lang.instrument.Instrumentation;
import java.lang.instrument.UnmodifiableClassException;

/**
 * MyAgent
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 22:41
 */
public class MyAgent {
    public static void premain(String agentArgs, Instrumentation inst) {
        System.out.println("loading dynamic agent...");
        MyTransformer monitor = new MyTransformer();
        // 要传递true，否则不生效
        inst.addTransformer(monitor, true);

        if (inst.isRedefineClassesSupported()) {
            Class[] classes = inst.getAllLoadedClasses();
            for (Class<?> c : classes) {
                // 1.
                try {
                    inst.retransformClasses(c);
                } catch (UnmodifiableClassException e) {
                    e.printStackTrace();
                }
                break;

                // 2.
                /*if (c.getName().contains("TestDemo")) {
                    try {
                        inst.retransformClasses(c);
                    } catch (UnmodifiableClassException e) {
                        e.printStackTrace();
                    }
                    break;
                }*/
            }
        }
    }
}
