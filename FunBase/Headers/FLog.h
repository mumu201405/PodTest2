//
//  FLog.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

// 日志等级
static const int FUNLOGLEVEL_FORCE = 1000;
static const int FUNLOGLEVEL_ERROR = 40;
static const int FUNLOGLEVEL_WARN  = 30;
static const int FUNLOGLEVEL_INFO  = 20;
static const int FUNLOGLEVEL_DEBUG = 10;

@interface FLog : NSObject

+ (void)log:(NSString *)module format:(NSString *)format, ... DEPRECATED_MSG_ATTRIBUTE("Please Use Define FLOG_FORCE OR FLOG_DEBUG");

+ (BOOL)logEnabled;// 是否可打印

+ (void)openLog:(BOOL)yesOrNot;// 控制log日志输出

+ (void)printf:(const char*)note
         level:(int)level
          file:(const char*)file
          line:(int)line
          func:(const char*)func
           log:(NSString *)fmt,...;// 打印log日志

// 日志打印
#define FLOG_BASIC(note, logLevel, fmt, ...) [FLog printf:note level:logLevel file:__FILE__ line:__LINE__ func:__PRETTY_FUNCTION__ log:fmt, ##__VA_ARGS__]

#define FLOG_FORCE(fmt,...) FLOG_BASIC("FORCE", FUNLOGLEVEL_FORCE, fmt, ##__VA_ARGS__) // 强制打印信息
#define FLOG_ERROR(fmt,...) FLOG_BASIC("ERROR", FUNLOGLEVEL_ERROR, fmt, ##__VA_ARGS__) // 错误信息
#define FLOG_WARN(fmt,...)  FLOG_BASIC("WARN", FUNLOGLEVEL_WARN, fmt, ##__VA_ARGS__)   // 警告信息
#define FLOG_INFO(fmt,...)  FLOG_BASIC("INFO", FUNLOGLEVEL_INFO, fmt, ##__VA_ARGS__)   // 普通打印信息
#define FLOG_DEBUG(fmt,...) FLOG_BASIC("DEBUG", FUNLOGLEVEL_DEBUG, fmt, ##__VA_ARGS__) // 调试信息

@end
