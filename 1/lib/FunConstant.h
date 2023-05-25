//
//  Header.h
//  FunBase
//
//  Created by VisonCui on 2022/5/26.
//  Copyright © 2022 FunPlus. All rights reserved.
//

#ifndef Header_h
#define Header_h
#import <UIKit/UIKit.h>
#import "UIApplication+FUIKit.h"

// 屏幕安全边距
#define FTopSafeAreaInsets (F_safeAreaInsets(UIApplication.f_rootViewController).top)
#define FBottomSafeAreaInsets (F_safeAreaInsets(UIApplication.f_rootViewController).bottom)
#define FLeftSafeAreaInsets (F_safeAreaInsets( UIApplication.f_rootViewController).left)
#define FRightSafeAreaInsets (F_safeAreaInsets( UIApplication.f_rootViewController).right)

// iOS11 适配
static inline UIEdgeInsets F_safeAreaInsets(UIViewController *Vc) {
    if (@available(iOS 11.0, *)) {
        return Vc.view.safeAreaInsets;
    } else {
        return UIEdgeInsetsMake(0.0f, 0.0f, 0.0f, 0.0f);
    }
}

#endif /* Header_h */
