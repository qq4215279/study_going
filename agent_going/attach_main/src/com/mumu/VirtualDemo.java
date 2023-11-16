package com.mumu;

import com.sun.tools.attach.VirtualMachine;
import com.sun.tools.attach.VirtualMachineDescriptor;

import java.util.List;

/**
 * VirtualDemo
 * 机器上运行的java虚拟机的虚拟机描述符
 * @author liuzhen
 * @version 1.0.0 2023/11/14 17:01
 */
public class VirtualDemo {
    public static void main(String[] args) {
        List<VirtualMachineDescriptor> vmList = VirtualMachine.list();
        for(VirtualMachineDescriptor vmd:vmList){
            System.out.println(vmd.displayName());
        }
    }
}
