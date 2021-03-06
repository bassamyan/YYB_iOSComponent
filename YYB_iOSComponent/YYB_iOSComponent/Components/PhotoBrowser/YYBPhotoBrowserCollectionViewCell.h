//
//  YYBPhotoBrowserCollectionViewCell.h
//  YYB_iOSComponent
//
//  Created by Sniper on 2018/10/27.
//  Copyright © 2018 Univease Co., Ltd All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SDWebImage/UIImageView+WebCache.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYBPhotoBrowserCollectionViewCell : UICollectionViewCell

- (void)renderItemWithValueModel:(id)valueModel;
@property (nonatomic,copy) void (^ imageItemTapedHandler)(void);

@end

NS_ASSUME_NONNULL_END
