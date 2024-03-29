package com.mumu.loader;

/**
 * HelloWorld
 *
 * @author liuzhen
 * @version 1.0.0 2024/3/13 14:33
 */
public class HelloWorld {

    /**
     *
     * @param args args
     * @return void
     * @date 2024/3/13 15:36
     */
    public static void main(String[] args) throws InterruptedException {
        // 1. 查询Bootstrap class loader的加载路径：
        System.out.println(System.getProperty("sun.boot.class.path"));

        Adder adder = new Adder();

        while (true) {
            adder.add(1);
            System.out.println("Hello World: " + adder.getCount());

            Thread.sleep(1000L);
        }


    }

}
