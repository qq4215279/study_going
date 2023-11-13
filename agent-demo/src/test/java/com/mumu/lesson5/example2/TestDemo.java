package com.mumu.lesson5.example2;

/**
 * TestDemo
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 23:02
 */
public class TestDemo {

    public static void main(String[] args) throws InterruptedException {
        while (true) {
            Thread.sleep(6000);
            TestDemo.testMethod();

        }
    }

    public static void testMethod() {
        System.out.println("execute testMethod ...");
    }
}
