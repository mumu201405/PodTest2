//
//  NSData+FEncode.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (FEncode)

- (NSString *)f_base64EncodeString;

- (NSData *)f_base64EncodeData;

- (NSString *)f_UTF8EncodeString;

@end
