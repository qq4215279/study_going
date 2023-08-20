package com.mumu.logback;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Demo1
 * TRACE < DEBUG < INFO < WARN < ERROR 6
 * @author liuzhen
 * @version 1.0.0 2023/8/19 23:03
 */
public class Demo1 {

    /**
     * Logger logger =LoggerFactory.getLogger("com.mumu.logback.Demo1");
     *
     *                          根记录器(root)
     *                               /
     *                          记录器(com)
     *                             /
     *                  记录器(com.mumu)
     *                          /
     *                  记录器(com.mumu.logback)
     *                       /                \
     * 记录器(com.mumu.logback.Demo1)      记录器(com.mumu.logback.Demo2)
     *
     * 子记录器创建的时候，会把所有的父记录器都创建出来
     */

    private static final Logger errorLog = LoggerFactory.getLogger("com.mumu.error");

    // D:\Code\IdeaWorkSpace\study_going\logback_tesk\src\main\resources\logs
    private static final Logger log = LoggerFactory.getLogger("com.mumu.logback.Demo1");
    // 等价
    // private static final Logger log = LoggerFactory.getLogger(Demo1.class);
    /** log2 是 log的父记录器 */
    private static final Logger log2 = LoggerFactory.getLogger("com.mumu.logback");
    /** log3 是 log2 的父记录器  */
    private static final Logger log3 = LoggerFactory.getLogger("com.mumu");
    /** log4 是 log3 的父记录器。log4 的父记录器是 root */
    private static final Logger log4 = LoggerFactory.getLogger("com");

    public static void main( String[] args)  {
        log.info("Hello world!");

        errorLog.error("Bad world!");
    }

}
