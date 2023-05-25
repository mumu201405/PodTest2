//
//  UIApplication+FUIKit.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (FUIKit)

@property (nonatomic, strong, readonly, class) UIWindow *f_keyWindow;
@property (nonatomic, strong, readonly, class) UIViewController *f_rootViewController;
@property (nonatomic, strong, readonly, class) UIViewController *f_topMostController;
@property (nonatomic, strong, readonly, class) UIView *f_rootView;
@property (nonatomic, assign, readonly, class) UIInterfaceOrientation f_statusBarOrientation;

@end
