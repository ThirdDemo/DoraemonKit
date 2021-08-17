//
//  DoraemonMCEventCapturer.h
//  DoraemonKit
//
//  Created by litianhao on 2021/6/30.
//

#import <UIKit/UIKit.h>
#import "DoraemonMCGestureTargetActionPair.h"

@interface UIGestureRecognizer (DoraemonMCSupport)

@property (nonatomic , strong , readonly) NSMutableArray<DoraemonMCGestureTargetActionPair *> *do_mc_targetActionPairs;


- (void)do_mc_handleGestureSend:(id)sender;


@end

@interface UIApplication (DoraemonMCSupport)

@end


@interface UIControl (DoraemonMCSupport)

@end

