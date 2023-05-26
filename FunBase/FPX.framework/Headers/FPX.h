//
//  FPX.h
//  FPX
//
//  Created by VisonCui on 2021/8/6.
//

#import <Foundation/Foundation.h>

//! Project version number for FPX.
FOUNDATION_EXPORT double FPXVersionNumber;

//! Project version string for FPX.
FOUNDATION_EXPORT const unsigned char FPXVersionString[];

#import <FPX/FPXConstant.h>

// 回调block类型，模块名称、方法名称、调用结果
typedef void(^FPXCallback)(NSString *moduleName, NSString *funcName, NSString *result);

//FOUNDATION_EXPORT void FPXBIStat(NSString *eventId, NSDictionary *description);

@interface FPX: NSObject

/**
 *  初始化接口
 *
 *  @param callbackBlock  回调block，invoke_xxx方法也通过此block回调
 */
+ (void)init:(FPXCallback)callbackBlock;

/**
 *  初始化接口
 *
 *  @param data 支持传入微服务相关参数@{@"servers"{}}
 *  @param callbackBlock  回调block，invoke_xxx方法也通过此block回调
 */
+ (void)initWithData:(NSDictionary *)data callback:(FPXCallback)callbackBlock;

/**
 *  void 型方法接口。
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (void)call:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  int型方法接口。
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (BOOL)callBool:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  String型方法接口。
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (NSString *)callString:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

/**
 *  int型方法接口。
 *
 *  @param moduleName   模块名称
 *  @param funcName     方法名称
 *  @param parameters   调用参数，该参数请按文档说明传入
 */
+ (int)callInt:(NSString *)moduleName funcName:(NSString *)funcName parameters:(NSDictionary *)parameters;

@end


