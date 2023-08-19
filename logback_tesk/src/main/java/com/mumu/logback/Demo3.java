package com.mumu.logback;

import ch.qos.logback.classic.Level;
import ch.qos.logback.classic.Logger;
import org.slf4j.LoggerFactory;

/**
 * Demo3
 * TRACE <DEBUG < INFO < WARN < ERROR
 * @author liuzhen
 * @version 1.0.0 2023/8/19 23:41
 */
public class Demo3 {

    public static void main(String[] args) {
        // 通过设置日志级别，需要将记录器对象转成如下这个包下的 Logger
        ch.qos.logback.classic.Logger logger = (ch.qos.logback.classic.Logger)LoggerFactory.getLogger( "com");

        // 如果将日志级别设置成 info，则只能打印info 及以上级别的日志
        // logger.setLevel(Level.INFO);
        // 默认根记录器是 debug
        System.out.println(logger.getEffectiveLevel()); // debug

        // 设置根记录器
        ch.qos.logback.classic.Logger rootLogger = (ch.qos.logback.classic.Logger)LoggerFactory.getLogger(Logger.ROOT_LOGGER_NAME);
        rootLogger.setLevel(Level.INFO);


    }
}
