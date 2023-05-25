//
//  NSDate+FDate.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (FDate)

+ (NSInteger)f_timeStamp;
+ (NSInteger)f_msTimeStamp;

+ (NSString *)f_stringForNowFormat:(NSString *)format;
+ (NSString *)f_stringFor:(NSDate *)date format:(NSString *)format;

+ (NSString *)f_timeZone;

+ (NSTimeInterval)f_timeIntervalSinceNow:(NSString *)time;

@end
