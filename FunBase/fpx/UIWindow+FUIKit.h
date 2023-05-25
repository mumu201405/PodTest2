//
//  UIWindow+FUIKit.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWindow (FUIKit)

@property (nonatomic, strong, readonly, class) UIViewController *f_topViewController;
@property (nonatomic, strong, readonly, class) UIView *f_topView;

@end
