package com.demo.client;

import com.demo.pojo.User;
import org.springframework.cloud.openfeign.FeignClient;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;

@FeignClient(value = "service-provider",fallback = UserClientFallback.class)// 标注该类是一个feign接口
public interface UserClient {

    @GetMapping("user/{userName}")
    public User findUserByUserName(@PathVariable("userName")String userName);

}
