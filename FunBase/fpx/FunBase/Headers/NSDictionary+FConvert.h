//
//  NSDictionary+FConvert.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (FConvert)

@property (nonatomic, strong, readonly) NSData *f_JSONData;
@property (nonatomic, strong, readonly) NSString *f_JSONString;

@end
