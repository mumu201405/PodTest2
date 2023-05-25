//
//  FToast.h
//  FunBaseUI
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FToast : NSObject

@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UILabel *textLabel;

+ (instancetype)sharedInstance;

- (void)show:(NSString *)text;
- (void)show:(NSString *)text image:(UIImage *)image;
- (void)show:(NSString *)text image:(UIImage *)image interval:(CGFloat)interval;

@end
