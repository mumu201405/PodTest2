//
//  FHttpClient+Urls.h
//  FunBase
//
//  Created by VisonCui on 2022/8/4.
//  Copyright © 2022 FunPlus. All rights reserved.
//

#import "FHttpClient.h"

@interface FHttpClient (Urls)

#pragma mark - 异步多域名接口支持

/// 异步多域名请求
/// @param baseUrl 基础BaseURL
/// @param apiEndPoints apiEndPoints @"http://xxx.xx.xx,http://xxx.xx.xx"
/// @param path @"xxx/xxx"
/// @param body body参数
/// @param completion completion description
- (void)asyncPOSTRequestBaseUrl:(NSString *)baseUrl
                   apiEndPoints:(id)apiEndPoints
                           Path:(NSString *)path
                           body:(id)body
                     completion:(FHttpResponseBlock)completion;

/// 异步多域名请求
/// @param urls URL数组
/// @param body  body参数
/// @param completion completion description
- (void)asyncPOSTRequestUrls:(NSArray *)urls
                        body:(id)body
                  completion:(FHttpResponseBlock)completion;

#pragma mark - 同步多域名接口支持

/// 同步多域名请求
/// @param baseUrl 基础BaseURL
/// @param apiEndPoints apiEndPoints @"http://xxx.xx.xx,http://xxx.xx.xx"
/// @param path path 路径 @"xxx/xxx"
/// @param body body参数
- (FHttpResponse *)syncPOSTRequestBaseUrl:(NSString *)baseUrl
                             apiEndPoints:(id)apiEndPoints
                                     Path:(NSString *)path
                                     body:(id)body;

/// 同步多域名请求
/// @param urls URL数组
/// @param body body body参数
- (FHttpResponse *)syncPOSTRequestUrls:(NSArray *)urls
                                  body:(id)body;

@end
