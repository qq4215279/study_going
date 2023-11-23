package com.mumu.attach;

import com.sun.tools.attach.AttachNotSupportedException;
import com.sun.tools.attach.VirtualMachine;
import com.sun.tools.attach.VirtualMachineDescriptor;

import java.io.IOException;
import java.util.List;
import java.util.Objects;

/**
 * AttachProcess
 * 附载进程
 * @author liuzhen
 * @version 1.0.0 2023/11/20 14:56
 */
public class AttachProcess extends Thread {
    /**
     * 要被加载的 game-agent.jar 路径
     */
    private final String jar = System.getProperty("user.dir") + "\\game-agent.jar";

    /** 执行进程id */
    private final String processId;
    /** agent参数: classesPath className */
    private final String agentArgs;

    /**
     * 构造方法
     * @param processId 执行进程id
     * @param agentArgs agent参数: classesPath className
     */
    public AttachProcess(String processId, String agentArgs) {
        this.processId = processId;
        this.agentArgs = agentArgs;
    }

    @Override
    public void run() {
        loadAgent();
    }

    /**
     * 执行代理
     * @return void
     * @date 2023/11/20 16:36
     */
    private void loadAgent() {
        VirtualMachine vm = null;
        try {
            vm = VirtualMachine.attach(processId);
        } catch (AttachNotSupportedException e) {
            e.printStackTrace();
            System.out.println("no access disconnected from the target VM");
        } catch (IOException e) {
            e.printStackTrace();
        }

        if (vm == null) {
            throw new RuntimeException("vm not find...");
        }

        System.out.println("start loadAgent...");
        try {
            Objects.requireNonNull(vm).loadAgent(jar, agentArgs);
            vm.detach();
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("loadAgent exception：" + e);
            Throwable cause = e.getCause();
            if (cause != null) {
                cause.printStackTrace();
            }
        }

    }

    /**
     * 主方法
     * @param args args
     * @return void
     * @date 2023/11/20 18:04
     */
    public static void main(String[] args) {
        ArgInfo argInfo = new ArgInfo(args);

        System.out.println("classNames: " + argInfo.classNames);
        System.out.println("classesPath: " + argInfo.classesPath);
        System.out.println("processNames: " + argInfo.attachProcessNames);

        List<VirtualMachineDescriptor> vmList = VirtualMachine.list();
        for (VirtualMachineDescriptor vmd : vmList) {
            String processId = vmd.id();
            if (argInfo.attachProcessNames.contains(vmd.displayName())) {
                System.out.println("gameProcessId: " + processId);
                System.out.println("gameProcessName: " + vmd.displayName());
                new AttachProcess(processId, argInfo.classesPath + " " + argInfo.classNames).start();
            }
        }

    }

}
