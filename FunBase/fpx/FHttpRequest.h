//
//  FHttpRequest.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FHttpRequest : NSMutableURLRequest

+ (instancetype)GETRequestWithURL:(NSString *)URL body:(id)body;
+ (instancetype)POSTRequestWithURL:(NSString *)URL body:(id)body;

@end
