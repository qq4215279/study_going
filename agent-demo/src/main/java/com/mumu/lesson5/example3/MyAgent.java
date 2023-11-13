package com.mumu.lesson5.example3;

import javax.tools.JavaCompiler;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.lang.instrument.ClassDefinition;
import java.lang.instrument.Instrumentation;

/**
 * MyAgent
 * 静态增强2
 * @author liuzhen
 * @version 1.0.0 2023/11/13 23:10
 */
public class MyAgent {

    // TODO path
    // public static String path = JavaCompilerUtil.path + ""
    public static String path = "";

    public static void premain(String agentArgs, Instrumentation instrumentation) {
        try {
            File file = new File(path + "target/test-class/lesson5/example3/User.class");
            ClassFileWatcher watcher = new ClassFileWatcher(instrumentation, file);
            watcher.start();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static class ClassFileWatcher extends Thread {
        private File classFile;
        private long lastModified;
        private Instrumentation instrumentation;
        private boolean firstRun = true;

        ClassFileWatcher(Instrumentation instrumentation, File classFile) {
            this.classFile = classFile;
            this.instrumentation = instrumentation;
            this.lastModified = classFile.lastModified();
        }

        @Override
        public void run() {
            while (true) {
                if (firstRun || (lastModified != classFile.lastModified())) {
                    firstRun = false;
                    lastModified = classFile.lastModified();
                    // TODO
                    redefineClass(instrumentation, classFile);
                }

                try {
                    Thread.sleep(10000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }

        private static void redefineClass(Instrumentation instrumentation, File classFile) {
            System.out.println("检测到文件的变化！");
            byte[] bytes = new byte[(int)classFile.length()];
            DataInputStream in;
            try {
                in = new DataInputStream(new FileInputStream(classFile));
                in.readFully(bytes);
                in.close();

                ClassDefinition cd = new ClassDefinition(Class.forName("lesson5.example3.User"), bytes);
                instrumentation.redefineClasses(cd);

            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }


}
