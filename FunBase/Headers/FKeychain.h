//
//  FKeychain.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface FKeychain : NSObject

+ (BOOL)updateAccount:(NSString *)account password:(NSString *)password service:(NSString *)service;

+ (BOOL)deleteAccount:(NSString *)account service:(NSString *)service;

+ (id)queryAccount:(NSString *)account service:(NSString *)service;

+ (BOOL)saveAccount:(NSString *)account password:(NSString *)password service:(NSString *)service;

@end
