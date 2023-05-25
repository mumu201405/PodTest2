//
//  FNTPCalibrator.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNTPCalibrator : NSObject

@property (nonatomic, assign) NSTimeInterval offset;

- (void)calibrate;

- (void)synccalibrate;

@end
