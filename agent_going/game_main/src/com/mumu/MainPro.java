package com.mumu;

/**
 * MainPro
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/14 16:46
 */
public class MainPro {
    /**
     * 1.1 编译: javac -d out -encoding UTF-8  com\mumu\MainPro.java
     *           javac -d out -encoding UTF-8  com\mumu\HelloWorld.java
     *           javac -d out -encoding UTF-8  com\cxx\hf\api\service\impl\activity\fisheryPlay\DragonBlessActivity.java
     *
     * 2. 打jar: jar cfe MainPro.jar com.mumu.MainPro -C out .
     *
     * 3. 运行: java -jar MainPro.jar
     *          java -jar F:\Code\MumuSpace\agent_going\game_main\src\MainPro.jar
     *
     * 4. 如果是 premain 运行时，需要加 -javaagent 参数
     *    java -javaagent:TestAgent.jar -jar MainPro.jar
     *    java -javaagent:F:\Code\MumuSpace\study_going\agent_going\test_agent\src\TestAgent.jar -jar MainPro.jar
     *
     */
    public static void main(String[] args) throws InterruptedException {
        // System.out.println(new HelloWorld().print());

        int count = 0;
        while (true) {
            // 等待0.5秒
            Thread.sleep(1000);
            count++;
            String print = new HelloWorld().print();

            // 输出内容和次数
            if (!"hello_world".equals(print)) {
                System.out.println("agent test success!!! " + print + count);

            } else {
                // 输出内容和次数
                System.out.println(print + count);
            }

            // 内容不对或者次数达到1000次以上输出
            if (count >= 10000) {
                break;
            }
        }
    }


}
