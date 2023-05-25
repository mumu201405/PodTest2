//
//  UIImage+FImageMirror.h
//  FunBase
//
//  Created by Flandre on 1/14/22.
//  Copyright © 2022 FunPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (FImageMirror)

- (UIImage *)f_ImageFlippedForRightToLeftLayoutDirection:(BOOL)isMirror;

@end

NS_ASSUME_NONNULL_END
