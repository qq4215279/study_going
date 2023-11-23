# 动更程序

## 目的
解决修复程序bug后，线上服务器重启问题。提高代码线上容错率。

## 局限
只能动更方法体的业务逻辑修改。对于修改方法签名（方法名，返回值，参数个数等），增加或删除方法、类的属性，类等操作不支持！

## 动更步骤
1. 获取需要动更类的全限定类名，多个类，分号分割。
    eg：需要动更 `DragonBlessActivity.java`，全限定类名为：`com.cxx.hf.api.service.impl.activity.fisheryPlay.DragonBlessActivity;com.cxx.hf.api.service.impl.activity.fisheryPlay.AmmunitionActivity`
    
2. 重新编译动更类所在模块。`mvn compile`
    eg: `DragonBlessActivity.java` 所在模块为 `hf-api`，则重新编译 `hf-api` 模块。
    
3. 将编译后新生成的字节码文件拷贝到服务器所在机器制定目录下。
    eg：将 `DragonBlessActivity.class` 拷贝到服务器指定目录。
    
4. 执行动更程序(`game-agent.jar`)

    ```java
    // 指定参数，执行命令
    java -jar game-agent.jar classNames="全限定类名" classesPath="字节码文件所在路径" attachProcessNames="附载程序名称"
    
    // eg：
    // java -jar game-agent.jar classNames=com.cxx.hf.api.service.impl.activity.fisheryPlay.DragonBlessActivity classesPath=C:\\Users\\D0381
   \\Desktop\\DragonBlessActivity.class attachProcessNames=com.cxx.hf.servergame.GameStart
    ```

    **参数说明**：

    - **classNames**：需要被动更的全限定类名，多个类分号分割。eg：`com.cxx.hf.api.service.impl.activity.fisheryPlay.DragonBlessActivity`

    - **classesPath**：上传到服务器的字节码文件所在目录路径。eg：`DragonBlessActivity.class` 所在目录路径。

    - **attachProcessNames**：需要被动更的程序。可通过命令 `jps -l` 获取进程名称，附载多个程序，分号分割。

      eg：`attachProcessNames=hf-servergame.jar;hf-serverhall.jar;hf-serverplatform.jar;hf-serverplayer.jar`

      ![](assets/README/%E9%99%84%E8%BD%BD%E8%BF%9B%E7%A8%8B%E5%90%8D%E7%A7%B0.png)

**注**：首次需将动更程序打包上传到服务器。打包后，将 `game-agent.jar` 和 `lib` 目录一起上传。


## 测试服动更部署流程

1. 登录水果派 [工作台](http://172.16.12.243:8080/jenkins/)，进行测试服构建最新jar包。

2. 登录 [红桃运维管理平台](https://devops.yaojiyx.com/sgp_dev/server_action_dev/)。

   1. 选择 **水果派-测试服**  ->  **游戏动更**  页签。

   2. 输入需要被动更的 **全限定类名**。

   3. 选择需要被动更的 **附载进程**。

   4. 点击执行。

      **执行流程**：

      1. 拷贝被动更类字节码文件到服务器指定位置。
      2. 执行 `jar -jar game-agent.jar` 命令并输入指定参数。