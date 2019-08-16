package com.demo.mapper;

import com.demo.pojo.User;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

@Mapper
public interface UserMapper extends tk.mybatis.mapper.common.Mapper<User>{

//    @Select( " select * from tb_user where userName = #{userName} " )
//    public User findUserByUserName(@Param( "userName"  )String userName);


}
