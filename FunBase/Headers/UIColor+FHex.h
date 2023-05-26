//
//  UIColor+FHex.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (FHex)

+ (UIColor *)f_hexColor:(NSString *)hex;
+ (UIColor *)f_hexColor:(NSString *)hex alpha:(CGFloat)alpha;

@end
