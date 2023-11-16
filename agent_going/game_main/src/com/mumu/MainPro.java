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
     *     编译: javac -d out2 -encoding UTF-8  com\mumu\MainPro.java
     * 2. 打jar: jar cvfm MainPro.jar MANIFEST.MF -C out .
     * 3. 运行: java -jar MainPro.jar
     *          java -jar F:\Code\MumuSpace\agent_going\game_main\src\MainPro.jar
     *
     *          java -jar MainPro.jar
     *          java -javaagent:TestAgent.jar -jar MainPro.jar
     *          java -javaagent:F:\Code\MumuSpace\agent_going\test_agent\src\TestAgent.jar -jar MainPro.jar
     *
     */
    public static void main(String[] args) throws InterruptedException {
        // System.out.println(new HelloWorld().print());

        System.out.println(new HelloWorld().print());
        int count = 0;
        while(true){
            Thread.sleep(600);
            count++;
            System.out.println(new HelloWorld().print());
            if(count==10){
                break;
            }
        }
    }

}
