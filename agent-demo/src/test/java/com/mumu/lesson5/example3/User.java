package com.mumu.lesson5.example3;

/**
 * User
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 23:23
 */
public class User {
    private String name;
    private Integer age;

    public User(String name, Integer age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return "User{" + "name='" + name + '\'' + ", age=" + age + '}';
    }
}
