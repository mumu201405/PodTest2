//
//  FDeviceInfo.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSupport/AdSupport.h>
#import <UIKit/UIKit.h>

@interface FDeviceInfo : NSObject

@property (nonatomic, strong, readonly, class) NSString *IDFA;
@property (nonatomic, strong, readonly, class) NSString *IDFV;

/// 当前系统： iOS
@property (nonatomic, strong, readonly, class) NSString *OS;
/// 当前系统版本
@property (nonatomic, strong, readonly, class) NSString *OSVersion;
/// DeviceID （钥匙串/UserDefault 存储）
@property (nonatomic, strong, readonly, class) NSString *deviceID;
/// UUID （UserDefault存储）
@property (nonatomic, strong, readonly, class) NSString *deviceUUID;
@property (nonatomic, strong, readonly, class) NSString *playerUUID;
+ (void)resetPlayerUUID;

/// 当前设备设置的国家区域
@property (nonatomic, strong, readonly, class) NSString *countryCode;
/// 当前设备设置的语言
@property (nonatomic, strong, readonly, class) NSString *deviceLanguage;
@property (nonatomic, strong, readonly, class) NSString *deviceType;
@property (nonatomic, strong, readonly, class) NSString *deviceModleCode;
@property (nonatomic, strong, readonly, class) NSString *deviceTimeZone;

/// 当前设备的内存大小 单位MB
@property (nonatomic, strong, readonly, class) NSString *RAM_ALL;
/// 当前设备的可用内存大小 单位MB
@property (nonatomic, strong, readonly, class) NSString *RAMGB;
/// 当前设备的磁盘大小 单位MB
@property (nonatomic, strong, readonly, class) NSString *ROM_ALL;
/// 当前设备的可用磁盘大小 单位MB
@property (nonatomic, strong, readonly, class) NSString *ROMGB;
@property (nonatomic, strong, readonly, class) NSString *CPUMaxFreqKHz;

/// 当前设备CPU占用率(使用率)
@property (nonatomic, strong, readonly, class) NSString *CPURate;

/// 当前设备CPU类型
@property (nonatomic, strong, readonly, class) NSString *CPUType;

@property (nonatomic, strong, readonly, class) NSString *batteryInfo;
/// 网络情况
@property (nonatomic, strong, readonly, class) NSString *networkInfo;
@property (nonatomic, strong, readonly, class) NSString *resolutionInfo;
/// 分辨率
@property (nonatomic, strong, readonly, class) NSString *displaySize;
/// 屏幕尺寸
@property (nonatomic, strong, readonly, class) NSString *screenSize;
/// 客户端IP
@property (nonatomic, strong, readonly, class) NSString *clientIP;
/// 是否越狱
@property (nonatomic, assign, readonly, class) BOOL isJailBreak;
/// 客户端时间校准差值
@property (nonatomic, assign, readonly, class) NSTimeInterval funTimeOffset;
/// 客户端是否有时间校准
@property (nonatomic, assign, class) BOOL funTimeIsCalibration;

#pragma mark - 设备指纹
/// 设备Token
@property (nonatomic, strong, readonly, class) NSString *fpDeviceToken;
+ (void)resetFpDeviceToken:(NSString *)fpDeviceToken;

/// 设备ID
@property (nonatomic, strong, readonly, class) NSString *fpDeviceId;
+ (void)resetFpDeviceId:(NSString *)fpDeviceId;

#pragma mark - 广告id

/// AppsFlyer
@property (nonatomic, strong, readonly, class) NSString *appsFlyerId;
+ (void)resetAppsFlyerId:(NSString *)appsFlyerId;

/// Google
@property (nonatomic, strong, readonly, class) NSString *appInstanceID;
+ (void)resetAppInstanceID:(NSString *)appInstanceID;

#pragma mark - ip设置
+ (void)resetClientIp:(NSString *)clientIp;

#pragma mark - 设置时间校准，time为秒
+ (void)setTimeCalibrationWithServerTime:(NSTimeInterval)currentTime;

@end
