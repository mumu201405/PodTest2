//
//  NSBundle+FMainBundle.h
//  FunBase
//
//  Created by quan.sun on 2021/8/18.
//  Copyright © 2021 FunPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (FMainBundle)

@property (nonatomic, strong, readonly, class) NSString *f_bundleID;
@property (nonatomic, strong, readonly, class) NSString *f_bundleVersion;
@property (nonatomic, strong, readonly, class) NSString *f_buildVersion;
@property (nonatomic, strong, readonly, class) NSString *f_bundleName;
@property (nonatomic, strong, readonly, class) NSString *f_bundleLocalizations;
@property (nonatomic, strong, readonly, class) NSArray<NSDictionary *> *f_URLTypes;


+ (id)f_infoForKey:(NSString *)key;
+ (NSString *)f_pathForResource:(NSString *)name ofType:(NSString *)ext bundle:(NSString *)bundle;

@end
