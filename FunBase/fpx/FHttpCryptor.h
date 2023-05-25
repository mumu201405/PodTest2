//
//  FHttpCryptor.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FHttpCryptor : NSObject

+ (NSString *)encryptBase64HmacSHA256:(NSString *)target key:(NSString *)key;

+ (NSData *)encryptBase64AES128CBCPKCS7Padding:(NSString *)target key:(NSString *)key iv:(NSString *)iv;
+ (NSData *)decryptBase64AES128CBCPKCS7Padding:(NSData *)target key:(NSString *)key iv:(NSString *)iv;

@end
