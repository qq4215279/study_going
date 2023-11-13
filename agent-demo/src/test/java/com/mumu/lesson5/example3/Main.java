package com.mumu.lesson5.example3;

/**
 * Main
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 23:23
 */
public class Main {
    public static void main(String[] args) {
        while (true) {
            System.out.println(new User("zhangsan", 23));
            try {
                Thread.sleep(5000L);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
