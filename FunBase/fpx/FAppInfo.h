//
//  FAppInfo.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, FGameAreaType) {
    FGameAreaType_Global = 0,
    FGameAreaType_CN = 1
};

@interface FAppInfo : NSObject

@property (nonatomic, strong, readonly, class) NSString *appVersion;
@property (nonatomic, strong, readonly, class) UIImage *appIconImage;
@property (nonatomic, strong, readonly, class) NSNumber *appInstallTs;
@property (nonatomic, assign, class) FGameAreaType areaType; // 游戏所在地区

@end
