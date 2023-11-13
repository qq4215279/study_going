package com.mumu.lesson5.example4;

/**
 * DynamicAttach
 * 动态的 attach
 * @author liuzhen
 * @version 1.0.0 2023/11/13 23:26
 */
public class DynamicAttach {

    public static void main(String[] args) throws Exception {
        // TODO java 程序进程号。jps找到jvm进程，替换到49823，每次执行Test里的main方法都能增强。
        String jdkProcessId = "49823";
        // VirtualMachine virtualMachine = VirtualMachine.attach(jdkProcessId);

        // TODO 获取path
        String path = "";
        // String path = JavaCompilerUtil.path;
        // virtualMachine.loadAgent(path + "");
    }
}
