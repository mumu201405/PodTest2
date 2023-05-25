//
//  UIFont+FZoom.h
//  FunBaseUI
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (FZoom)

+ (UIFont *)f_zoomFontWithName:(NSString *)fontName size:(CGFloat)fontSize;

+ (UIFont *)f_zoomSystemFontOfSize:(CGFloat)size;

+ (UIFont *)f_zoomBoldSystemFontOfSize:(CGFloat)size;

@end
