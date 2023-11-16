package com.mumu;

import com.sun.tools.attach.VirtualMachine;
import com.sun.tools.attach.VirtualMachineDescriptor;

import java.util.List;

/**
 * AttachThread
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/14 16:59
 */
public class AttachThread extends Thread {
    private final List<VirtualMachineDescriptor> listBefore;

    private final String jar;

    AttachThread(String attachJar, List<VirtualMachineDescriptor> vms) {
        listBefore = vms;  // 记录程序启动时的 VM 集合
        jar = attachJar;
    }

    @Override
    public void run() {
        VirtualMachine vm = null;
        List<VirtualMachineDescriptor> listAfter = null;
        try {
            int count = 0;
            while (true) {
                listAfter = VirtualMachine.list();
                for (VirtualMachineDescriptor vmd : listAfter) {
                    if (!listBefore.contains(vmd)) {
                        //新的jvm虚拟机启动则认为是需要附加的进程(不够精准)
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

        }
    }

    /**
     * 1. 编译: javac -d out -encoding UTF-8  com\mumu\AttachThread.java
     * 2. 打jar: jar cfe AttachThread.jar com.mumu.AttachThread -C out .
     * 3. 运行: java -jar AttachThread.jar
     * java -jar F:\Code\MumuSpace\agent_going\attach_main\src\AttachThread.jar
     * @param args args
     * @return void
     * @date 2023/11/14 18:04
     */
    public static void main(String[] args) throws InterruptedException {
        // TODO
        new AttachThread("TestAgent.jar", VirtualMachine.list()).start();
    }
}
