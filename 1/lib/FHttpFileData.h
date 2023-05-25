//
//  FHttpFileData.h
//  KGHelpCenter
//
//  Created by VisonCui on 2021/12/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, FFileType) {
    FFileType_Pic   = 0,
    FFileType_Video = 1,
    FFileType_Gif   = 2,
};

@interface FHttpFileData : NSObject

@property (nonatomic, assign) FFileType fileType;
@property (nonatomic, strong) NSString *filePath;
@property (nonatomic, strong) NSData   *fileData;

@property (nonatomic, strong,readonly) NSString *fileTypeStr;


@end

NS_ASSUME_NONNULL_END
