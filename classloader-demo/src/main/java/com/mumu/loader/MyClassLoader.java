package com.mumu.loader;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

/**
 * MyClassLoader
 * 自定义类加载器
 * @author liuzhen
 * @version 1.0.0 2024/3/13 14:36
 */
public class MyClassLoader extends ClassLoader {

    private static final Path DEFAULT_CLASS_DIR = Paths.get("D:", "classes");

    private final Path classDir;

    public MyClassLoader() {
        super();
        this.classDir = DEFAULT_CLASS_DIR;
    }

    public MyClassLoader(String classDir) {
        super();
        this.classDir = Paths.get(classDir);
    }

    public MyClassLoader(String classDir, ClassLoader parent) {
        super(parent);
        this.classDir = Paths.get(classDir);
    }

    @Override
    protected Class<?> findClass(String name) throws ClassNotFoundException {

        byte[] classBytes = this.readClassBytes(name);
        if (classBytes == null || classBytes.length == 0) {
            throw new ClassNotFoundException("class " + name + "not found.");
        }

        return this.defineClass(name, classBytes, 0, classBytes.length);

    }


    private byte[] readClassBytes(String name) throws ClassNotFoundException {

        String classPath = name.replace(".", "/");
        Path classFullPath = classDir.resolve(Paths.get(classPath + ".class"));

        if (!classFullPath.toFile().exists()) {
            throw new ClassNotFoundException("class " + name + "not found.");
        }

        try (ByteArrayOutputStream baos = new ByteArrayOutputStream()) {
            Files.copy(classFullPath, baos);
            return baos.toByteArray();

        } catch (IOException ex) {
            throw new ClassNotFoundException("class " + name + "not found.");
        }
    }

    @Override
    public String toString() {
        return "MyClassLoader";
    }
}
