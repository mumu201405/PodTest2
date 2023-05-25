//
//  FHttpConfig.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FHttpConfig : NSObject

/// 警告： 此接口将废弃，新功能请勿使用。Vison

+ (instancetype)sharedInstance;

- (void)setAppID:(NSNumber *)appID secret:(NSString *)secret APIVersion:(NSString *)APIVersion APIKey:(NSString *)APIKey APIIV:(NSString *)APIIV;

@property (nonatomic, strong, readonly, class) NSNumber *appID;
@property (nonatomic, strong, readonly, class) NSString *secret;
@property (nonatomic, strong, readonly, class) NSString *APIVersion;
@property (nonatomic, strong, readonly, class) NSString *APIKey;
@property (nonatomic, strong, readonly, class) NSString *APIIV;

@end
