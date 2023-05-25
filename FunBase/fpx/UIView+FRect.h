//
//  UIView+FRect.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (FRect)

@property (nonatomic, assign) CGPoint f_frameOrigin;
@property (nonatomic, assign) CGFloat f_frameX;
@property (nonatomic, assign) CGFloat f_frameY;
@property (nonatomic, assign) CGSize f_frameSize;
@property (nonatomic, assign) CGFloat f_frameWidth;
@property (nonatomic, assign) CGFloat f_frameHeight;

@property (nonatomic, assign) CGPoint f_boundsOrigin;
@property (nonatomic, assign) CGFloat f_boundsX;
@property (nonatomic, assign) CGFloat f_boundsY;
@property (nonatomic, assign) CGSize f_boundsSize;
@property (nonatomic, assign) CGFloat f_boundsWidth;
@property (nonatomic, assign) CGFloat f_boundsHeight;

@property (nonatomic, assign) CGFloat f_centerX;
@property (nonatomic, assign) CGFloat f_centerY;

@property (nonatomic, assign, readonly) CGFloat f_safeAreaInsetsTop;
@property (nonatomic, assign, readonly) CGFloat f_safeAreaInsetsBottom;
@property (nonatomic, assign, readonly) CGFloat f_safeAreaInsetsLeft;
@property (nonatomic, assign, readonly) CGFloat f_safeAreaInsetsRight;

- (void)setRTLFrame:(CGRect)frame width:(CGFloat)width isOverturn:(BOOL)isOverturn;

- (void)setRTLFrame:(CGRect)frame isOverturn:(BOOL)isOverturn ;

@end
