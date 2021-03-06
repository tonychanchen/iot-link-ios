//
//  WCUserInfomationTableViewCell.h
//  TenextCloud
//
//  Created by 侯兴宇 on 2019/9/18.
//  Copyright © 2019 Winext. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const ID = @"TIoTUserInfomationTableViewCell";

@interface TIoTUserInfomationTableViewCell : UITableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@property (nonatomic, copy) NSDictionary *dic;

@end

NS_ASSUME_NONNULL_END
