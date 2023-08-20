package com.mumu.logback;

import ch.qos.logback.classic.spi.ILoggingEvent;
import ch.qos.logback.core.UnsynchronizedAppenderBase;
import ch.qos.logback.core.encoder.Encoder;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

/**
 * MyAppender
 * 自定义附加器
 *
 * @author liuzhen
 * @version 1.0.0 2023/8/20 11:23
 */
public class MyAppender<E> extends UnsynchronizedAppenderBase<E> {
    private Encoder encoder;
    private String fileName;

    public void setEncoder(Encoder encoder) {
        this.encoder = encoder;
    }

    public void setFileName(String fileName) {
        this.fileName = fileName;
    }

    @Override
    protected void append(E e) {
        ILoggingEvent event = (ILoggingEvent)e;
        try {
            byte[] bytes = new byte[1];
            // bytes = this.encoder.doEncode(e);
           this.encoder.doEncode(e);

            File file = new File(fileName);
            FileOutputStream fos = new FileOutputStream(file, true);
            fos.write(bytes);
        } catch (IOException ioException) {
            ioException.printStackTrace();
        }
    }
}
