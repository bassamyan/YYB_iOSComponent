//
//  UITextField+YYBLayout.m
//  YYB_iOSComponent
//
//  Created by Sniper on 2018/9/4.
//  Copyright © 2018年 Univease Co., Ltd All rights reserved.
//

#import "UITextField+YYBLayout.h"

@implementation UITextField (YYBLayout)

+ (UITextField *)textFieldSuperView:(UIView *)superView constraint:(void (^)(MASConstraintMaker *))constraint configureHandler:(void (^)(UITextField *))configureHandler {
    UITextField *view = [[UITextField alloc] init];
    [superView addSubview:view];
    
    if (constraint) {
        [view mas_makeConstraints:constraint];
    }
    if (configureHandler) {
        configureHandler(view);
    }
    return view;
}


@end
