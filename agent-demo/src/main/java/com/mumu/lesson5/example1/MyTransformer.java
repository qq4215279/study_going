package com.mumu.lesson5.example1;

import jdk.internal.org.objectweb.asm.ClassReader;
import jdk.internal.org.objectweb.asm.ClassWriter;
import jdk.internal.org.objectweb.asm.Opcodes;
import jdk.internal.org.objectweb.asm.tree.*;

import java.lang.instrument.ClassFileTransformer;
import java.lang.instrument.IllegalClassFormatException;
import java.security.ProtectionDomain;

/**
 * MyTransformer
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 22:36
 */
public class MyTransformer implements ClassFileTransformer {
    @Override
    public byte[] transform(ClassLoader loader, String className, Class<?> classBeingRedefined, ProtectionDomain protectionDomain,
                            byte[] classfileBuffer) throws IllegalClassFormatException {
        ClassReader cr = new ClassReader(classfileBuffer);
        // TODO old
        // ClassNode classNode = new ClassNode(Opcodes.ASM6);
        ClassNode classNode = new ClassNode(Opcodes.ASM5);
        cr.accept(classNode, ClassReader.SKIP_FRAMES);

        for (MethodNode methodNode : classNode.methods) {
            if ("main".equals(methodNode.name)) {
                InsnList insnList = new InsnList();
                insnList.add(new FieldInsnNode(Opcodes.GETSTATIC, "java/lang/System", "out", "Ljava/io/PrintStream;"));
                insnList.add(new LdcInsnNode("Hello, Instrumentation!"));
                insnList.add(new MethodInsnNode(Opcodes.INVOKEVIRTUAL, "java/lang/PrintStream", "println", "(Ljava/io/String;)V", false));

                methodNode.instructions.insert(insnList);
            }
        }

        ClassWriter cw = new ClassWriter(ClassWriter.COMPUTE_FRAMES | ClassWriter.COMPUTE_MAXS);
        classNode.accept(cw);
        return cw.toByteArray();
    }
}
