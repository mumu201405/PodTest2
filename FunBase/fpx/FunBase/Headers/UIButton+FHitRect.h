//
//  UIButton+FHitRect.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (FHitRect)

@property (nonatomic, assign) UIEdgeInsets f_hitEdgeInsets;
@property (nonatomic, assign) CGFloat f_hitScale;
@property (nonatomic, assign) CGFloat f_hitWidthScale;
@property (nonatomic, assign) CGFloat f_hitHeightScale;

@end
