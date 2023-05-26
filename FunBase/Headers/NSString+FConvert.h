//
//  NSString+FConvert.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FConvert)

- (NSURL *)f_NSURL;

- (NSData *)f_NSUTF8Data;

- (const char *)f_cString;

- (NSData *)f_data;

- (NSDictionary *)f_JSONDictionary;

- (NSArray *)f_JSONArray;

- (NSInteger)f_hex;

@end
