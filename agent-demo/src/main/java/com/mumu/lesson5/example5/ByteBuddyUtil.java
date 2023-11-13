package com.mumu.lesson5.example5;

import com.sun.org.apache.bcel.internal.generic.LoadClass;

import java.lang.instrument.ClassFileTransformer;
import java.lang.instrument.Instrumentation;

/**
 * ByteBuddyUtil
 *
 * @author liuzhen
 * @version 1.0.0 2023/11/13 23:34
 */
public class ByteBuddyUtil {

    public final static Instrumentation instrumentation;
    public final static ClassPool classPool;

    static {
        instrumentation =ByteBuddyAget.installl();
        classPool = ClassPool.getDefault();

        // 指定路径，否则可能会出现javassist.NotFoundException 的问题
        classPool.insertClassPath(new LoadClassPath(Thread.currentThread().getContextClassLoader()));

    }

    public static void transformer(ClassFileTransformer cft, Class<?>... classes) {
        try {
            /**
             * 注册一个 Transformer，从此之后的类加载都会被 transformer 拦截。ClassFileTransformer 的 transform
             * 方法可以直接对类的字节码进行修改，但是只能修改方法体，不能变更方法签名，增加和删除方法
             */
            instrumentation.addTransformer(cft, true);
            int size = classes.length;
            Class<?>[] classesArray = new Class<?>[size];
            System.arraycopy(classes, 0, classesArray, 0, size);
            if (classesArray.length > 0) {
                /**
                 * 对jvm已经加载的类重新触发类加载，使用上面调用 addTransformer() 注册的 ClassFileTransformer
                 * 重新对类进行修饰
                 */
            }
            instrumentation.retransformClasses(classesArray);
        } catch (Exception e) {
            throw new RuntimeException(e);
        } finally {
            instrumentation.removeTransformer(cft);
        }
    }

}
