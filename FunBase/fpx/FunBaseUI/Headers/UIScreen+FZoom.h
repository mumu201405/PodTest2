//
//  UIScreen+FZoom.h
//  FunBaseUI
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (FZoom)

+ (CGFloat)f_zoom;

@end

CG_INLINE CGRect
FRectMake(CGFloat x, CGFloat y, CGFloat width, CGFloat height)
{
    CGRect rect;
    rect.origin.x = x * UIScreen.f_zoom;
    rect.origin.y = y * UIScreen.f_zoom;
    rect.size.width = width * UIScreen.f_zoom;
    rect.size.height = height * UIScreen.f_zoom;
    return rect;
}

UIKIT_STATIC_INLINE UIEdgeInsets
FEdgeInsetsMake(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right)
{
    UIEdgeInsets insets = {top * UIScreen.f_zoom, left * UIScreen.f_zoom, bottom * UIScreen.f_zoom, right * UIScreen.f_zoom};
    return insets;
}

CG_INLINE CGSize
FSizeMake(CGFloat width, CGFloat height)
{
  CGSize size; size.width = width * UIScreen.f_zoom; size.height = height * UIScreen.f_zoom; return size;
}
