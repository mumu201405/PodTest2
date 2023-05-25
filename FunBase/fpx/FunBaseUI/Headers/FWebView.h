//
//  FWebView.h
//  FunBaseUI
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface FWebView : UIView

#warning 不够通用，暂不使用

@property (nonatomic, strong) UIButton *backButton;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UIImageView *logoImageView;
@property (nonatomic, strong) UIView *line1View;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIView *line2View;
@property (nonatomic, strong) WKWebView *contentWebView;
@property (nonatomic, strong) UIView *line3View;
@property (nonatomic, strong) UIButton *confirmButton;

@end
