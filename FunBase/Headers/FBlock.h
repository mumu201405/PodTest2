//
//  FBlock.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#ifndef FBlock_h
#define FBlock_h

#import <Foundation/Foundation.h>

typedef void(^FVoidBlock)(void);
typedef void(^FBoolBlock)(BOOL result);
typedef void(^FStringBlock)(NSString *result);
typedef void(^FDictionaryBlock)(NSDictionary *result);

#endif /* FBlock_h */
