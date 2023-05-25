//
//  NSString+FEncode.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FEncode)

- (NSString *)f_MD5String;

- (NSData *)f_base64EncodeData;
- (NSString *)f_base64EncodeString;
- (NSString *)f_base64DecodeString;
- (NSString *)f_URLEncodeString;

- (id)f_JWTDecodeObject;

@end
