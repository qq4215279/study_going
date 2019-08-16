/*
package com.demo.web.controller;

import com.demo.client.UserClient;
import com.demo.pojo.User;
import com.netflix.appinfo.InstanceInfo;
import com.netflix.hystrix.contrib.javanica.annotation.DefaultProperties;
import com.netflix.hystrix.contrib.javanica.annotation.HystrixCommand;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.cloud.client.ServiceInstance;
import org.springframework.cloud.client.discovery.DiscoveryClient;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.client.RestTemplate;

import java.util.List;

@Controller
@RequestMapping("consumer/user")
@DefaultProperties(defaultFallback = "findUserByUserNameFallback")
public class ConsumerController {

    @Autowired
   private RestTemplate restTemplate;

    @Autowired
    private DiscoveryClient discoveryClient;//注意导包不要导错啦



    @GetMapping("{userName}")
    @ResponseBody
    @HystrixCommand() // 标记该方法需要熔断  fallbackMethod = "findUserByUserNameFallback"
    public String findUserByUserName(@PathVariable("userName") String userName ){
        //方式1：
       // User user = restTemplate.getForObject( "http://localhost:8081/user/"+userName,User.class );

        //方式2：
//        List<ServiceInstance> instances = discoveryClient.getInstances( "service-provider" );
//        ServiceInstance instance = instances.get( 0 );
//        String url = "http://"+instance.getHost()+":"+instance.getPort()+"/user/"+userName;

        //方式3：负载均衡：
        if(userName.equals( "z" )){
            throw new RuntimeException("太忙了");
        }
        String baseUrl = "http://service-provider/user/"+userName;

        User user = restTemplate.getForObject( baseUrl,User.class );




        return user.toString();
    }

    public String findUserByUserNameFallback(){

        return "抱歉，请求繁忙，请稍后再试！";
    }

}
*/
