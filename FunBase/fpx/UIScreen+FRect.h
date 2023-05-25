//
//  UIScreen+FRect.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (FRect)

@property (nonatomic, assign, readonly, class) CGFloat f_screenWidth;
@property (nonatomic, assign, readonly, class) CGFloat f_screenHeight;
@property (nonatomic, assign, readonly, class) CGRect f_screenBounds;
@property (nonatomic, assign, readonly, class) BOOL f_hasSafeArea;

@end
