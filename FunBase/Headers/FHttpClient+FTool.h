//
//  FHttpClient+FTool.h
//  FunBase
//
//  Created by VisonCui on 2022/7/13.
//  Copyright © 2022 FunPlus. All rights reserved.
//

#import "FHttpClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface FHttpClient (FTool)

/// 通过已有的ip来替换URL
+ (NSString *)getRequestUrlFromUrl:(NSString *)url;

+ (NSDictionary *)resetHeaderFieldWithTemDic:(NSDictionary *)temField url:(NSString *)url;

// 将域名传进来，是否保存成功ip
+ (BOOL)getDNSIpUrlWithUrl:(NSString *)urlStr;

+ (BOOL)isIpv4FromUrl:(NSString *)urlStr;

/// 将带有，间隔的URL转化成数组
/// @param url 带，URL
+ (NSArray *)httpComponentsSeparatedByString:(NSString *)url;

/// 将带 key 间隔的URL转化成数组
/// @param url 带 key 间隔的URL
/// @param key 间隔的字符串
+ (NSArray *)httpComponentsSeparatedByString:(NSString *)url separatedKey:(NSString *)key;

/// BaseUrl数组拼接后缀转换成新的数组
/// @param urlPaths Baseurls
/// @param path 拼接后缀
+ (NSArray *)httpByAppendingPathWithBaseUrls:(NSArray *)urlPaths path:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
