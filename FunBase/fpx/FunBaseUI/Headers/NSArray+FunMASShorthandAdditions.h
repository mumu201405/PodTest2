//
//  NSArray+MASShorthandAdditions.h
//  Masonry
//
//  Created by Jonas Budelmann on 22/07/13.
//  Copyright (c) 2013 Jonas Budelmann. All rights reserved.
//

#import "NSArray+FunMASAdditions.h"

#ifdef MAS_SHORTHAND

/**
 *	Shorthand array additions without the 'mas_' prefixes,
 *  only enabled if MAS_SHORTHAND is defined
 */
@interface NSArray (FunMASShorthandAdditions)

- (NSArray *)makeConstraints:(void(^)(FunMASConstraintMaker *make))block;
- (NSArray *)updateConstraints:(void(^)(FunMASConstraintMaker *make))block;
- (NSArray *)remakeConstraints:(void(^)(FunMASConstraintMaker *make))block;

@end

@implementation NSArray (MASShorthandAdditions)

- (NSArray *)makeConstraints:(void(^)(FunMASConstraintMaker *))block {
    return [self mas_makeConstraints:block];
}

- (NSArray *)updateConstraints:(void(^)(FunMASConstraintMaker *))block {
    return [self mas_updateConstraints:block];
}

- (NSArray *)remakeConstraints:(void(^)(FunMASConstraintMaker *))block {
    return [self mas_remakeConstraints:block];
}

@end

#endif
