//
//  UIViewController+MASAdditions.h
//  Masonry
//
//  Created by Craig Siemens on 2015-06-23.
//
//

#import "FunMASUtilities.h"
#import "FunMASConstraintMaker.h"
#import "FunMASViewAttribute.h"

#ifdef MAS_VIEW_CONTROLLER

@interface MAS_VIEW_CONTROLLER (FunMASAdditions)

/**
 *	following properties return a new MASViewAttribute with appropriate UILayoutGuide and NSLayoutAttribute
 */
@property (nonatomic, strong, readonly) FunMASViewAttribute *mas_topLayoutGuide;
@property (nonatomic, strong, readonly) FunMASViewAttribute *mas_bottomLayoutGuide;
@property (nonatomic, strong, readonly) FunMASViewAttribute *mas_topLayoutGuideTop;
@property (nonatomic, strong, readonly) FunMASViewAttribute *mas_topLayoutGuideBottom;
@property (nonatomic, strong, readonly) FunMASViewAttribute *mas_bottomLayoutGuideTop;
@property (nonatomic, strong, readonly) FunMASViewAttribute *mas_bottomLayoutGuideBottom;


@end

#endif
