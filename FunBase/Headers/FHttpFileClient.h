//
//  FHttpFileClient.h
//  FunBase
//
//  Created by VisonCui on 2021/11/30.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FHttpFileData.h"

@interface FHttpFileClient : NSObject

+ (instancetype _Nullable )client;

/// 文件上传
/// @param URLString 上传URL
/// @param parameters 上传Body字段
/// @param headers header头
/// @param dataArray 上传文件的数组
/// @param success 上传成功Block
/// @param failure 上传失败Block
-(void) POST:(NSString *_Nullable) URLString
  parameters:(nullable id)parameters
     headers:(nullable NSDictionary <NSString *, NSString *> *)headers
   dataArray:(NSArray <FHttpFileData *> *_Nullable)dataArray
     success:(nullable void (^)(NSURLResponse * _Nullable response, id _Nullable responseObject))success
     failure:(nullable void (^)(NSURLResponse * _Nullable response, NSError * _Nullable error))failure;

@end
