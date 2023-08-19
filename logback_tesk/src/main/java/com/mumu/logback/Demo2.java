package com.mumu.logback;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Demo2
 *
 * @author liuzhen
 * @version 1.0.0 2023/8/19 23:40
 */
public class Demo2 {

    private static final Logger log = LoggerFactory.getLogger("com.mumu.logback.Demo2");

    public static void main( String[] args)  {
        log.error("Hello world!");
    }
}
