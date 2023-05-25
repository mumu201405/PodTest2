//
//  FPDeviceFingerPrint.h
//  FPDeviceFingerPrint
//
//  Created by funplus on 2022/1/13.
//

#import <Foundation/Foundation.h>
#import "FBlock.h"

@interface FPDeviceFingerPrint : NSObject

/// deviceToken
@property(nonatomic, copy) NSString *fpDeviceToken;

/// deviceId
@property(nonatomic, copy) NSString *fpDeviceId;

/// 回调
@property(nonatomic, copy) FStringBlock fpDeviceIdHandler;

@property(nonatomic, copy) FStringBlock fpDeviceTokenHandler;

+ (FPDeviceFingerPrint *) sharedInstance;

/// 初始化SDK
/// @param host 转发服务器域名
/// @param organization 必填，组织标识，邮件中 organization 项
/// @param appId 必填，应用标识，登录数美后台应用管理查看
/// @param publicKey SDK 版本高于 2.5.0 时必填，加密 KEY
/// @param extraData 用于扩充数据
/// @param fpDeviceIdHandler DeviceId回调
/// @param fpDeviceTokenHandler DeviceToken回调
- (void)initWithHost:(NSString *)host
        organization:(NSString *)organization
               appId:(NSString *)appId
           publicKey:(NSString *)publicKey
           extraData:(NSDictionary *)extraData
   fpDeviceIdHandler:(FStringBlock) fpDeviceIdHandler
fpDeviceTokenHandler:(FStringBlock) fpDeviceTokenHandler;

@end
