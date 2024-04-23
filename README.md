# 日志模块概述
class LogLevel:定义日志级别  
class Logger:日志器。定义日志级别，设置输出地，设置日志格式  
class LogEvent：记录日志事件。主要记录一下信息  
    * @param[in] logger     日志器  
    * @param[in] level      日志级别  
    * @param[in] file       文件名  
    * @param[in] line       文件行号  
    * @param[in] elapse     程序启动依赖的耗时（毫秒）  
    * @param[in] thread_id  线程id  
    * @param[in] fiber_id   协程id  
    * @param[in] time       日志时间  
class LogEventWrap: 日志事件包装器。将logEvent打包，可以直接通过使用该类完成对日志的定义  
class LogFormatter: 日志格式化。
