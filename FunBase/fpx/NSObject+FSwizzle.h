//
//  NSObject+FSwizzle.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (FSwizzle)

+ (void)f_exchangeInstanceMethod:(SEL)sourceSEL to:(SEL)newSEL;
+ (void)f_exchangeClassMethod:(SEL)sourceSEL to:(SEL)newSEL;

+ (void)hookInstanceMethod:(Class)targetClass targetSelector:(SEL)targetSelector aspectSelector:(SEL)aspectSelector;
+ (void)hookClassMethod:(Class)targetClass targetSelector:(SEL)targetSelector aspectSelector:(SEL)aspectSelector;

@end
