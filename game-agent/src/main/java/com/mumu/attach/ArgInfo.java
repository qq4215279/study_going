package com.mumu.attach;

import java.util.Arrays;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * ArgInfo
 * 参数信息
 * @author liuzhen
 * @version 1.0.0 2023/11/21 16:08
 */
public class ArgInfo {
    /** className key */
    private static final String CLASSNAME_KEYS = "classNames";
    /** classesPath key */
    private static final String CLASSES_PATH_KEY = "classesPath";
    /** attachProcessNames key */
    private static final String ATTACH_PROCESS_NAMES_KEY = "attachProcessNames";

    /** 全限定类名 多个分号分割 */
    String classNames;
    /** 字节码路径 */
    String classesPath;
    /** 附载进程集合 */
    Set<String> attachProcessNames;

    /**
     * 构造方法
     * @param args 参数
     */
    public ArgInfo(String[] args) {
        init(args);
    }

    /**
     * 初始化
     * @param args 参数列表: className=... classesPath=... attachProcessNames=...
     * @return void
     * @date 2023/11/21 16:39
     */
    private void init(String[] args) {
        if (!checkArgs(args)) {
            throw new RuntimeException("参数错误...");
        }

        for (String arg : args) {
            String[] split = arg.split("=");
            String key = split[0];
            String value = split[1];

            if (key.equalsIgnoreCase(CLASSNAME_KEYS)) {
                this.classNames = value;
            }
            if (key.equalsIgnoreCase(CLASSES_PATH_KEY)) {
                this.classesPath = value;
            }
            if (key.equalsIgnoreCase(ATTACH_PROCESS_NAMES_KEY)) {
                this.attachProcessNames = Arrays.stream(value.split(";")).collect(Collectors.toSet());
            }
        }
    }

    /**
     * 校验参数
     * @param args 参数列表
     * @return boolean
     * @date 2023/11/21 14:07
     */
    private boolean checkArgs(String[] args) {
        if (args.length < 2) {
            return false;
        }

        for (String arg : args) {
            String[] split = arg.split("=");
            if (split.length < 2) {
                return false;
            }
            String key = split[0];
            String value = split[1];

            if (key.equalsIgnoreCase(ATTACH_PROCESS_NAMES_KEY)) {
                if (value.split(";").length <= 0) {
                    return false;
                }
            }
        }

        return true;
    }

}
