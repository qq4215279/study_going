package com.mumu.lesson5.example2;

/**
 * Test
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 22:44
 */
public class Test {

    /**
     * 因为 JAVA Agent 乣通过在命令行上加上 -javaagent 来执行。这里提高了组件引入成本，在做公共组件时，使用简单也是要考虑的一个点
     *
     * @param args
     * @return void
     * @date 2023/11/13 22:44
     */
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
