package com.mumu;

import com.sun.tools.attach.VirtualMachine;
import com.sun.tools.attach.VirtualMachineDescriptor;

import java.util.List;

/**
 * AttachThread2
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/14 17:05
 */
public class AttachThread2 extends Thread {

    private final String jar;
    AttachThread2(String attachJar) {
        jar = attachJar;
    }
    @Override
    public void run() {
        VirtualMachine vm = null;

        try {
            int count = 0;
            while (true) {
                List<VirtualMachineDescriptor>list = VirtualMachine.list();
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

        }
    }

    public static void main(String[] args) throws InterruptedException {
        new AttachThread2("TestAgent.jar").start();
    }
}
