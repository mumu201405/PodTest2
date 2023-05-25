//
//  FHttpClient.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FHttpRequest.h"
#import "FHttpResponse.h"
#import "FHttpConfig.h"
#import "FHttpCryptor.h"

typedef void(^FHttpResponseBlock)(FHttpResponse *response);

@interface FHttpClient : NSObject

@property (nonatomic, strong) NSString *baseURL;

- (instancetype)initWithBaseURL:(NSString *)baseURL;

+ (instancetype)client;
+ (instancetype)clientWithBaseURL:(NSString *)baseURL;

@property (nonatomic, strong) FHttpRequest *request;
@property (nonatomic, assign) NSTimeInterval timeoutInterval;
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> *allHTTPHeaderFields;

@property (nonatomic, assign) BOOL completedInCurrentThread;

- (void)asyncGETRequest:(NSString *)url body:(id)body completion:(FHttpResponseBlock)completion;
- (void)asyncPOSTRequest:(NSString *)url body:(id)body completion:(FHttpResponseBlock)completion;

- (FHttpResponse *)syncGETRequest:(NSString *)url body:(id)body;
- (FHttpResponse *)syncPOSTRequest:(NSString *)url body:(id)body;

#pragma mark - 加密封装

- (void)encryptRequest:(NSString *)path body:(NSDictionary *)body completion:(FHttpResponseBlock)completion DEPRECATED_MSG_ATTRIBUTE("Please use asyncPostRequest");

/// 加密（携带所有参数传递）
/// @param path 后缀路径 （如：/api/login）
/// @param body 内容body参数
/// @param baseUrl baseUrl description
/// @param appID 游戏id
/// @param secret secret description
/// @param apiKey apiKey description
/// @param apiIV apiIV description
/// @param apiVersion apiVersion description
/// @param completion 回调
- (void)encryptRequest:(NSString *)path
                  body:(NSDictionary *)body
               baseUrl:(NSString *)baseUrl
                 appId:(NSString *)appID
                secret:(NSString *)secret
                apiKey:(NSString *)apiKey
                    iv:(NSString *)apiIV
            apiVersion:(NSString *)apiVersion
            completion:(FHttpResponseBlock)completion DEPRECATED_MSG_ATTRIBUTE("Please Don't use，不建议使用这个方法来做加密操作");
@end
