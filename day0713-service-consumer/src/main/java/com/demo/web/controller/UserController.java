package com.demo.web.controller;

import com.demo.client.UserClient;
import com.demo.pojo.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("consumer/user")
public class UserController {

    @Autowired
    private UserClient userClient;

    @GetMapping("{userName}")
    public User findUserByUserName(@PathVariable("userName")String userName){

        return this.userClient.findUserByUserName( userName );
    }



}
