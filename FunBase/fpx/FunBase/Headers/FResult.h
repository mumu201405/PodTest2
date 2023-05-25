//
//  FResult.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSDictionary+FConvert.h"

@interface FResult : NSObject

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, strong) NSString *message;

@property (nonatomic, strong, readonly) NSDictionary *JSONDictionary;
@property (nonatomic, strong, readonly) NSString *JSONString;

- (instancetype)initWithCode:(NSInteger)code message:(NSString *)message;

@end

typedef void(^FResultBlock)(FResult *result);
