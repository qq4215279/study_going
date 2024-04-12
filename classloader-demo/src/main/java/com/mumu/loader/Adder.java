package com.mumu.loader;

/**
 * Adder
 * 累加器
 * @author liuzhen
 * @version 1.0.0 2024/3/13 14:34
 */
public class Adder {
    private int count;

    public int getCount() {
        return count;
    }

    public void add(int num) {
        this.count += num;
    }
}
