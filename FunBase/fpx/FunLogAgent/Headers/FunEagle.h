//
//  FunEagle.h
//  FunLogAgent
//
//  Created by quan.sun on 2021/11/9.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FunEagle : NSObject

+ (instancetype)sharedInstance;

- (void)track:(NSString *)name;

- (void)track:(NSString *)name code:(NSInteger)code message:(NSString *)message;

- (void)track:(NSString *)name code:(NSInteger)code message:(NSString *)message channel:(NSString *)channel;

- (void)track:(NSString *)name code:(NSInteger)code message:(NSString *)message channel:(NSString *)channel url:(NSString *)url;

- (void)track:(NSString *)name code:(NSInteger)code message:(NSString *)message url:(NSString *)url productID:(NSString *)productID amount:(NSString *)amount currency:(NSString *)currency;

- (void)track:(NSString *)name code:(NSInteger)code message:(NSString *)message url:(NSString *)url productID:(NSString *)productID amount:(NSString *)amount currency:(NSString *)currency orderID:(NSString *)orderID transactionID:(NSString *)transactionID;

@end
