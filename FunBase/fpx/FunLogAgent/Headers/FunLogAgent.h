//
//  FunLogAgent.h
//  FunLogAgent
//
//  Created by quan.sun on 2021/10/29.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FunEagle.h"
#import "FLogConfig.h"

@interface FunLogAgent : NSObject

+ (instancetype)sharedInstance;

/// 初始化
- (void)initLogAgent;

/// 开始激活上报
- (void)startUpload;

/// 设置用户信息
/// @param userID 用户id（fpid）
/// @param userCreateTimeMs 用户创建事件
- (void)setUserInfo:(NSString *)userID userCreateTimeMs:(NSNumber *)userCreateTimeMs;

/// 设置角色信息
/// @param playerID 角色id
/// @param playerCreateTimeMs 角色创建事件
/// @param level 主城等级 & 角色等级
/// @param vipLevel vip等级
/// @param aid 联盟id
/// @param serverID 玩家服务器id
- (void)setPlayerInfo:(NSString *)playerID playerCreateTimeMs:(NSNumber *)playerCreateTimeMs level:(NSNumber *)level vipLevel:(NSNumber *)vipLevel aid:(NSString *)aid serverID:(NSString *)serverID;

/// 设置游戏版本号
/// @param gameVersion 游戏版本号
- (void)setGameVersion:(NSString *)gameVersion;

/// 设置场景id
/// @param areaID 场景id
- (void)setAreaID:(NSString *)areaID;

/// 进入游戏(注：需要登录账号系统后触发)
- (void)onGameStart;

/// 切换账号
- (void)onSwitchAccount;

/// 防沉迷
- (void)antiAddictionKickOff;

/// 实名认证
/// @param details
/// 格式 {"certificate_status" : ""} 实名认证状态 1 表示认证成功，-1 表示认证失败
- (void)userCertification:(NSDictionary *)details;

- (void)track:(NSString *)tag name:(NSString *)name;
- (void)track:(NSString *)tag name:(NSString *)name logSource:(NSString *)logSource;
- (void)track:(NSString *)tag name:(NSString *)name details:(NSDictionary *)details;
- (void)track:(NSString *)tag name:(NSString *)name details:(NSDictionary *)details logSource:(NSString *)logSource;
- (void)track:(NSString *)tag name:(NSString *)name details:(NSDictionary *)details propertyType:(NSInteger)propertyType logSource:(NSString *)logSource;


@property (nonatomic, strong, readonly) NSString *launchID;
@property (nonatomic, strong, readonly) NSString *sessionID;
@property (nonatomic, strong, readonly) NSString *dataVersion;

@property (nonatomic, strong, readonly) NSString *version;

@property (nonatomic, strong, readonly) NSDictionary *deviceInfo; // 设备基础信息1 + 设备基础信息2
@property (nonatomic, strong, readonly) NSDictionary *deviceInfo_device; // 设备基础信息2
@property (nonatomic, strong, readonly) NSDictionary *deviceInfo_basic;     // 设备基础信息1
@property (nonatomic, strong, readonly) NSDictionary *basicInfo;  // basic信息

- (void)setExtraProperty:(NSString *)key value:(id)value DEPRECATED_MSG_ATTRIBUTE("API DEPRECATED");

- (void)onUserCreate;

- (void)onPaymentComplete:(NSString *)processor productID:(NSString *)productID productName:(NSString *)productName productType:(NSString *)productType currency:(NSString *)currency price:(NSString *)price transactionID:(NSString *)transactionID DEPRECATED_MSG_ATTRIBUTE("API DEPRECATED");

- (NSDictionary *)getTrackingInfo;

/// Xpref 上报
- (void)track_XprefName:(NSString *)name ts:(NSNumber *)ts details:(NSDictionary *)details;

/// 自定义Tag +数据结构上报
- (void)track_CustomTag:(NSString *)name ts:(NSNumber *)ts datas:(NSDictionary *)details;

/// 设置RUM采样率 （0-1000）千分之
- (void)setRumSamplingRate:(NSInteger)samplingRate;
/// RUM 上报
- (void)trackRumName:(NSString *)name details:(NSDictionary *)details;

@end
