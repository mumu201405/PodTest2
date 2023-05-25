//
//  FProgressHUD.h
//  FunBaseUI
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FProgressHUD : UIView

@property (nonatomic, strong) UIControl *maskControl;
@property (nonatomic, strong) UIActivityIndicatorView *indicatorView;

+ (instancetype)sharedInstance;

- (void)show;
- (void)dismiss;

@end
