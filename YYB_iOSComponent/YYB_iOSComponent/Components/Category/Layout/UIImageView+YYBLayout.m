//
//  UIImageView+YYBLayout.m
//  YYB_iOSComponent
//
//  Created by Sniper on 2018/9/4.
//  Copyright © 2018年 Univease Co., Ltd All rights reserved.
//

#import "UIImageView+YYBLayout.h"

@implementation UIImageView (YYBLayout)

+ (UIImageView *)imageViewWithIcon:(NSString *)iconName
                         superView:(UIView *)superView
                        constraint:(void (^)(MASConstraintMaker *))constraint
         configureImageViewHandler:(void (^)(UIImageView *))configureImageViewHandler
{
    UIImageView *imageView = [UIImageView new];
    if (iconName) {
        imageView.image = [UIImage imageNamed:iconName];
    }
    if (superView) {
        [superView addSubview:imageView];
        
        if (constraint) {
            [imageView mas_makeConstraints:constraint];
        }
        
        if (configureImageViewHandler) {
            configureImageViewHandler(imageView);
        }
    }
    return imageView;
}

@end
