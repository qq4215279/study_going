/**
 * package-info
 *
 * @author liuzhen
 * @version 1.0.0 2023/8/19 23:04
 */
package com.mumu.logback;

/**
 * Logback日志框架
 * 什么是日志？
 * 日志的作用是用来追踪和记录我们的程序运行中的信息，我们可以利用日志很快定位问题，追踪分析。
 * 如果没有日志，程序一旦出现问题，很难一下子就能定位问题。尤其是访问第三方接口、随机或偶尔出现的问题、很难再现的问题。
 * 之前听说过一句话：“只有在程序出问题以后才会知道打一个好的日志有多么重要。”
 *
 * Logback简介
 * 目前比较常用的Java日志框架：Logback、log4j、Igg4j2、JUL等等。
 * Logback是在log4j的基础上重新开发的一套日志框架，是完全实现SLF4J接口API（也叫日志门面）。
 * Logback的架构非常通用，可以应用于不同的环境。目前logback分为三个模块，logback—core、logback-classic和logback-access。
 * logback-core 模块为其他两个模块奠定了基础。logback-classic模块 原生实现了SLF4JAPI，因 此您可以轻松地在logback和其他日志记录框架（例如 log4j 1．x或 java．util．logging（JUL））之 间来回切换。
 * logback-access 模块与Tomcat和Jetty等Servlet 容器集成，以提供HTTP访问日志功能。请 注意，您可以轻松地在logback—core之上构建自己的模块。
 *
 * 记录器Logger
 *
 * 日志记录器（Logger）：控制要输出哪些日志记录语句，对日志信息进行级别限制。
 * 如何生成记录器
 *      final static Logger logger = LoggerFactory.getLogger(名称”);
 *
 * 记录器Logger层级结构：
 *             根记录器(root)
 *           /      |      \
 *      记录器A   记录器B   记录器C
 *      /
 *  记录器D
 *
 * eg:
 * Logger logger =LoggerFactory.getLogger("com.mumu.logback.Demo1");
 *
 *                          根记录器(root)
 *                               /
 *                          记录器(com)
 *                             /
 *                  记录器(com.mumu)
 *                          /
 *                  记录器(com.mumu.logback)
 *                       /                \
 * 记录器(com.mumu.logback.Demo1)      记录器(com.mumu.logback.Demo2)
 *
 * 每个记录器Logger的属性:
 *  name属性：记录器的名称I
 *  level属性（可选）：记录器的级别，允许的级别从低到高，TRACE＜DEBUG ＜INFO ＜ WARN＜ERROR logger.setLevel()
 *      logger.getLevel();
 *      logger.getEffectiveLevel()
 *      additivity属性（可选）：是否允许叠加打印日志，true或false
 *  说明：
 *      1. 如果记录器未设置level属性，则该记录器的级别从上级记录器继承
 *      2. 如果想查看记录器的级别，应该通过logger．getEffectiveLevel（）方法，同时要将Logger转为 ch.qos.logback.classic.Logger类型，如下：
 *      ch.qos.logback.classic.Logger logger = (ch.qos.logback.classic.Logger)LoggerFactory.getLogger(App.class);
 *
 *
 * 附加器Appender
 * 什么是附加器？
 * 记录器会将输出日志的任务交给附加器完成，不同的附加器会将日志输出到不同的地方，比如控制台附加器、文件附加器、网络附加器等等。
 *
 * 常用的附加器 控制台附加器：
 *  ch.qos.logback.core.ConsoleAppender 文件附加器：
 *  ch.qos.logback.core.FileAppender
 *  滚动文件附加器：ch.qos.logback.core.rolling.RollingFileAppender
 *
 * Pattern标签
 * Pattern由文字文本和转换说明符的格式控制表达式组成。您可以在其中自由插入任何文字文本。每个转换说明符都以百分号'％'，后跟可选的格式修饰符、转换字和大括号之间的可选参数。
 * 转换字控制要转换的数据字段，例如记录器名称、级别、日期或线程名称。格式修饰符控制字段宽度、填充以及左对齐或右对齐。
 *
 * 转换字 logger{length}
 *
 * 描述 输出记录器的名称
 *
 * 例子:
 *  %logger         mainPackage.sub.sample.Bar      mainPackage.sub.sample.Bar
 *  %logger{0}      mainPackage.sub.sample.Bar      Bar
 *  %logger{5}      mainPackage.sub.sample.Bar      m.s.s.Bar
 *  %logger{10}     mainPackage.sub.sample.Bar      m.s.s.Bar
 *  %logger{15}     mainPackage.sub.sample.Bar      m.s.sample.Bar
 *  %logger{16}     mainPackage.sub.sample.Bar      m.sub.sample.Bar
 *  %logger{26}     mainPackage.sub.sample.Bar      mainPackage.sub.sample. Bar
 *
 * class{length}  日志请求的调用者的完全限定类名       %class
 * line             输出发出记录请求的行号              %line
 * date{pattern}  date{pattern,timezone}  输出日志记录事件的日期       %date => 2006-10-20 14:06:49,812  %date{ISO8601} => 2006-10-20 14:06:49,812    %date{HH:mm:ss.SSS} =>14:06:49.812    %date{dd MMM yyyy;HH:mm:ss.SSS} => 20 oct. 2006;14:06:49.812
 * level       输出日志的级别  %level
 * thread       输出日志所在的线程       %thread
 * msg          输出日志信息          %msg
 *
 * 滚动策略
 * 1．基于时间的滚动策略
 *  ch.qos.logback.core.rolling.TimeBasedRollingPolicy
 * 2．基于大小和时间的滚动策略
 *  ch.qos.logback.core.rolling.SizeAndTimeBasedRollingPolicy
 *
 * 过滤器Filter
 * 过滤器是附加器的一个组件，它用于决定附加器是否输出日志。一个附加器可以包含一个或多个过滤器。
 * 每个过滤器都会返回一个枚举值，可选的值：DENY、NEUTRAL、ACCEPT
 * 附加噐根据过滤器返回值判断是否输出日志：
 *  DENY：不输出日志
 *  ACCEPT：输出日志
 *  NEUTRAL：中立，即不决定是否输出日志
 *
 * 常用的过滤器
 * LevlelFilter（级划过滤器）：实现类 ch.qos.logback.classic.filter.LevelFilter
 * ThresholdFilter（阈值过滤器）：实现类ch.qos.logback.classic.filter.ThresholdFilter
 * EvaluatorFilter（评估者过滤器）：实现类 ch.qos.logback.core.filter.EvaluatorFilter
 * JaninoEventEvaluator过滤器：实现类 ch.qos.logback.core.filter.EvaluatorFilter
 * TurboFilter 涡轮过滤器
 * DuplicateMessageFilter 重复消息过滤器
 */