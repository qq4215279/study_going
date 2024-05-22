package com.mumu;

import javassist.CannotCompileException;
import javassist.ClassPool;
import javassist.CtClass;
import javassist.CtField;
import javassist.CtMethod;
import javassist.CtNewMethod;

/**
 * JavaAssistDemo
 *
 * @author liuzhen
 * @version 1.0.0 2024/4/10 11:47
 */
public class JavaAssistDemo {

    public static void main(String[] args) {
        try {
            // 创建一个新的 ClassPool 实例
            ClassPool classPool = ClassPool.getDefault();

            // 创建一个新的 CtClass 对象，表示一个新的类
            CtClass ctClass = classPool.makeClass("com.mumu.DynamicClass");

            CtField field = new CtField(CtClass.intType, "value", ctClass);
            ctClass.addField(field);

            // 创建一个新的方法
            CtMethod newMethod = CtNewMethod.make(
                    "public static void dynamicMethod() { System.out.println(\"Dynamic method executed!\"); }",
                    ctClass);

            // 将新方法添加到新类中
            ctClass.addMethod(newMethod);

            // 将新类写入文件系统，以便调试和验证
            // newClass.writeFile(".");

            // 加载新类并调用新方法
            Class<?> clazz = ctClass.toClass();
            clazz.getMethod("dynamicMethod").invoke(null);

        } catch (CannotCompileException | ReflectiveOperationException e) {
            e.printStackTrace();
        }
    }
}
