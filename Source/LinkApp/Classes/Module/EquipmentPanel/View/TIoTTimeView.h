//
//  WCTimeView.h
//  TenextCloud
//
//  Created by 侯兴宇 on 2019/10/25.
//  Copyright © 2019 Winext. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TIoTTimeView : UIView

@property (nonatomic, copy) void (^updateData)(NSDictionary *dataDic);
@property (nonatomic, copy) NSDictionary *dic;
- (void)show;
- (void)hide;

@end

NS_ASSUME_NONNULL_END
