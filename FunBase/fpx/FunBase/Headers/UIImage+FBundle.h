//
//  UIImage+FBundle.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (FBundle)

+ (UIImage *)f_autoPNGImageWithBundle:(NSString *)bundle name:(NSString *)name;
+ (UIImage *)f_autoImageWithBundle:(NSString *)bundle name:(NSString *)name type:(NSString *)type;

+ (UIImage *)f_PNGImageWithBundle:(NSString *)bundle name:(NSString *)name;
+ (UIImage *)f_imageWithBundle:(NSString *)bundle name:(NSString *)name type:(NSString *)type;

+ (UIImage *)f_resizablePNGImageWithBundle:(NSString *)bundle name:(NSString *)name;
+ (UIImage *)f_resizableImageWithBundle:(NSString *)bundle name:(NSString *)name type:(NSString *)type;

@end
