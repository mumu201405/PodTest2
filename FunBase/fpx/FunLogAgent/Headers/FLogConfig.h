//
//  FLogConfig.h
//  FunLogAgent
//
//  Created by quan.sun on 2021/10/29.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

#define FunLogAgentSDKVersion @"1.5.0"

@interface FLogConfig : NSObject

+ (instancetype)sharedInstance;

- (void)setAppID:(NSString *)appID appKey:(NSString *)appKey baseUrl:(NSString *)baseUrl pkgChannel:(NSString *)pkgChannel channelID:(NSString *)channelID subChannelId:(NSString *)subChannelID;
//- (void)setGameID:(NSNumber *)gameID pkgChannel:(NSString *)pkgChannel channelID:(NSString *)channelID subChannelId:(NSString *)subChannelID;

#pragma mark - 应用信息

@property (nonatomic, strong, readonly, class) NSString *appID;
@property (nonatomic, strong, readonly, class) NSString *appKey;
@property (nonatomic, strong, readonly, class) NSString *baseUrl;
@property (nonatomic, strong, readonly, class) NSString *host;

//@property (nonatomic, strong, readonly, class) NSNumber *gameID;
@property (nonatomic, strong, readonly, class) NSString *pkgChannel;
@property (nonatomic, strong, readonly, class) NSString *channelID;
@property (nonatomic, strong, readonly, class) NSString *subChannelID;

#pragma mark - 上报参数配置

/// 上报时间间隔，默认5s
@property (nonatomic, assign) NSTimeInterval uploadInterval;

/// 请求超时时间，默认60s
@property (nonatomic, assign) NSTimeInterval timeoutInterval;

/// 最大缓存可用天数，默认10天
@property (nonatomic, assign) NSInteger maxValidity;

/// 本地存储事件最大阈值，默认100000条
@property (nonatomic, assign) NSInteger maxSaveCount;

/// 超出阈值后，每次删除条数，默认50条
@property (nonatomic, assign) NSInteger perDeleteCount;

/// 每次上报数量，默认每次50条
@property (nonatomic, assign) NSInteger perUploadCount;

/// 心跳事件间隔，默认60s
@property (nonatomic, assign) NSTimeInterval heartbeatInterval;

@end
