//
//  UIImageView+YYBLayout.h
//  YYB_iOSComponent
//
//  Created by Sniper on 2018/9/4.
//  Copyright © 2018年 Univease Co., Ltd All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Masonry/Masonry.h>

@interface UIImageView (YYBLayout)

+ (instancetype)imageViewWithIcon:(NSString *)iconName
                        superView:(UIView *)superView
                       constraint:(void(^)(MASConstraintMaker *make))constraint
        configureImageViewHandler:(void (^)(UIImageView *iconView))configureImageViewHandler;

@end
