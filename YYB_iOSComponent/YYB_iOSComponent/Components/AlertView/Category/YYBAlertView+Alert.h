//
//  YYBAlertView+Alert.h
//  SavingPot365
//
//  Created by Aokura on 2018/9/23.
//  Copyright © 2018年 Univease Co., Ltd. All rights reserved.
//

#import "YYBAlertView.h"
#import "UIColor+YYBAdd.h"
#import "UIView+YYBAdd.h"

@interface YYBAlertView (Alert)

+ (void)showAlertViewWithTitle:(NSString *)title
                        detail:(NSString *)detail
             cancelActionTitle:(NSString *)cancelActionTitle
            confirmActionTitle:(NSString *)confirmActionTitle
          confirmActionHandler:(YYBAlertViewActionBlankHandler)confirmActionHandler;

+ (void)showAlertViewWithTitle:(NSString *)title
                          icon:(NSString *)icon
          confirmActionHandler:(YYBAlertViewActionBlankHandler)confirmActionHandler;

@end
