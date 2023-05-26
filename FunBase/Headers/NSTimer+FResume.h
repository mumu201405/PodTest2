//
//  NSTimer+FResume.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (FResume)

- (void)f_pause;
- (void)f_resume;
- (void)f_resumeDelay:(NSTimeInterval)interval;

@end
