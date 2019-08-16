package com.demo.client;

import com.demo.pojo.User;
import org.springframework.stereotype.Component;

@Component
public class UserClientFallback implements UserClient {


    @Override
    public User findUserByUserName(String userName) {

        User user = new User();
        user.setName( "服务器繁忙，请稍后再试！" );

        return user;
    }
}
