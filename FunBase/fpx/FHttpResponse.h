//
//  FHttpResponse.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FHttpResponse : NSHTTPURLResponse

@property (nonatomic, strong) NSData *bodyData;
@property (nonatomic, strong, readonly) NSString *bodyString;
@property (nonatomic, strong, readonly) id bodyObject;

@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, strong) NSError *error;
@property (nonatomic, assign) NSInteger timeSpent;

- (instancetype)initWithHTTPURLResponse:(NSHTTPURLResponse *)response;

@end
