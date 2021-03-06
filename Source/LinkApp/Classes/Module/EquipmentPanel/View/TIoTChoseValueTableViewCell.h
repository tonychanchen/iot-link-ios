//
//  WCChoseValueTableViewCell.h
//  TenextCloud
//
//  Created by 侯兴宇 on 2019/10/23.
//  Copyright © 2019 Winext. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TIoTChoseValueTableViewCell : UITableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@property (nonatomic) UIEdgeInsets separatorInset;

- (void)setTitle:(NSString *)title andSelect:(BOOL)isSelect;


@end

NS_ASSUME_NONNULL_END
