//
//  NSString+FCompare.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FCompare)

- (BOOL)f_isNumericSame:(NSString *)value;
- (BOOL)f_isNumericAscend:(NSString *)value;
- (BOOL)f_isNumericDescend:(NSString *)value;

@end
