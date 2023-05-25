//
//  NSData+FCompress.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (FCompress)

- (NSData *)f_GzipData;

- (NSData *)f_UnGzipData;

- (NSString *)f_UnGzipString;

@end
