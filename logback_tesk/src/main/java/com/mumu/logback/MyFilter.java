package com.mumu.logback;

import ch.qos.logback.classic.Level;
import ch.qos.logback.classic.spi.ILoggingEvent;
import ch.qos.logback.core.filter.Filter;
import ch.qos.logback.core.spi.FilterReply;

/**
 * MyFilter
 * 自定义过滤器
 * @author liuzhen
 * @version 1.0.0 2023/8/20 11:37
 */
public class MyFilter extends Filter<ILoggingEvent> {
    private Level level;

    public void setLevel(Level level) {
        this.level = level;
    }

    @Override
    public FilterReply decide(ILoggingEvent iLoggingEvent) {
        if (iLoggingEvent.getLevel().equals(level)) {
            return FilterReply.ACCEPT;
        }

        return FilterReply.DENY;
    }
}
