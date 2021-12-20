package com.leyou.demo;

/**
 * JDK7Test
 *
 * @author liuzhen
 * @version 1.0.0 2021/12/20 22:52
 */

public interface JDK7InterfaceTest {

    int aa = 1;

    /**
     * JDK1.7不能在接口中定义静态方法
     */
    //    static bb();

    /**
     * 接口中定义的方法不能使用 private protected 这两个修饰符修饰，默认使用public访问修饰符
     */
    //    private void cc();
    //    protected void dd();

}
