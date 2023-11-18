package com.mumu.attach;

import com.sun.tools.attach.AttachNotSupportedException;
import com.sun.tools.attach.VirtualMachine;
import com.sun.tools.attach.VirtualMachineDescriptor;

import java.io.IOException;
import java.util.List;
import java.util.Objects;

/**
 * AttachMain
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/18 14:56
 */
public class AttachMain extends Thread {
    /**
     * 记录程序启动时的 VM 集合
     */
    private final List<VirtualMachineDescriptor> listBefore;
    /**
     要加载的agent.jar
     */
    private final String jar;

    private String processId = "666";
    private String agentArgs = "pathName className";

    public AttachMain(String attachJar, List<VirtualMachineDescriptor> vms, String processId, String agentArgs) {
        listBefore = vms;
        jar = attachJar;
        this.processId = processId;
        this.agentArgs = agentArgs;
    }

    @Override
    public void run() {
        loadAgent();

        // loadAgent2();
    }

    private void loadAgent() {
        VirtualMachine vm;
        List<VirtualMachineDescriptor> listAfter;
        int count = 0;

        try {
            while (true) {
                listAfter = VirtualMachine.list();
                vm = hasNewVm(listAfter);

                if (vm == null) {
                    System.out.println("没有新jvm程序，请手动指定java pid");
                    try {
                        vm = VirtualMachine.attach(processId);
                    } catch (AttachNotSupportedException e) {
                        //System.out.println("拒绝访问 Disconnected from the target VM");
                    }
                }

                Thread.sleep(1000);
                System.out.println(count++);
                if (null != vm || count >= 100) {
                    break;
                }
            }

            if (vm != null) {
                System.out.println("开始loadAgent...");
                Objects.requireNonNull(vm).loadAgent(jar, agentArgs);
                vm.detach();
            }
        } catch (Exception e) {
            System.out.println("异常：" + e);
            Throwable cause = e.getCause();
            if (cause != null) {
                cause.printStackTrace();
            }
        }
    }

    /**
     * 判断是否有新的 JVM 程序运行
     */
    private VirtualMachine hasNewVm(List<VirtualMachineDescriptor> listAfter) throws IOException, AttachNotSupportedException {
        for (VirtualMachineDescriptor vmd : listAfter) {
            if (!listBefore.contains(vmd)) {
                // 如果 VM 有增加，，我们开始监控这个 VM
                System.out.println("有新的 vm 程序："+ vmd.displayName());
                // 新的jvm虚拟机启动则认为是需要附加的进程(不够精准)
                return VirtualMachine.attach(vmd);
            }
        }
        return null;
    }

    private void loadAgent2() {
        VirtualMachine vm = null;
        try {
            int count = 0;
            while (true) {
                List<VirtualMachineDescriptor> list = VirtualMachine.list();
                for (VirtualMachineDescriptor vmd : list) {
                    String vmDisplayName  = vmd.displayName();
                    if (vmDisplayName.equals("MainPro")) {
                        vm = VirtualMachine.attach(vmd);
                        break;
                    }
                }
                Thread.sleep(500);
                count++;
                if (null != vm || count >= 10) {
                    break;
                }
            }
            vm.loadAgent(jar);
            vm.detach();
        } catch (Exception e) {
            System.out.println("异常：" + e);
        }
    }

    /**
     * 1. 编译: javac -d out -encoding UTF-8  com\mumu\AttachThread.java
     *
     * 2. 打jar: jar cfe AttachThread.jar com.mumu.AttachThread -C out .
     *
     * 3. 运行: java -jar AttachThread.jar
     * java -jar F:\Code\MumuSpace\agent_going\attach_main\src\AttachThread.jar
     *
     * @param args args
     * @return void
     * @date 2023/11/14 18:04
     */
    public static void main(String[] args)  {
        // TODO
        // String processName = "GameStart";
        String processName = "MainPro";
        String processId = "";
        List<VirtualMachineDescriptor> vmList = VirtualMachine.list();
        for (VirtualMachineDescriptor vmd : vmList) {
            if (vmd.displayName().contains(processName)) {
                processId = vmd.id();
                System.out.println("进程id：" + vmd.id());
                System.out.println("进程名称：" + vmd.displayName());
            }

        }

        if (!processId.equals("")) {
            String attachJar = "F:\\Code\\MumuSpace\\study_going\\agent_going\\test_agent\\src\\TestAgent.jar";
            // TODO
            // String pathName = "F:\\Code\\MumuSpace\\study_going\\agent_going\\game_main\\src\\out\\com\\mumu\\HelloWorld.class";
            String className = "com.mumu.HelloWorld";
            String pathName = "F:\\Code\\WorkSpace\\yjxxl_server\\app\\trunk\\hf-parent\\hf-api\\target\\classes\\com\\cxx\\hf\\api\\service\\impl\\activity\\fisheryPlay\\DragonBlessActivity.class";

            // String pathName = "C:\\Users\\D0381\\Desktop\\test\\test3\\DragonBlessActivity.class";
            // String className = "com.cxx.hf.api.service.impl.activity.fisheryPlay.DragonBlessActivity";

            new AttachMain(attachJar, VirtualMachine.list(), processId, pathName + " " + className).start();
        }
    }
}
