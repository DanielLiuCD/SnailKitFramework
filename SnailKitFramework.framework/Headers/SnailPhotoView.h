//
//  SnailPhotoView.h
//  lesan
//
//  Created by liu on 2018/7/22.
//  Copyright © 2018年 ning. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailPhotoView : UIView

@property (nonatomic ,strong) NSInteger(^itemCountBlock)(void);
@property (nonatomic ,strong) void(^configureImageBlock)(UIImageView *imageView,NSInteger index);
@property (nonatomic ,strong) void(^clickBlock)(NSInteger clickIndex);

- (void)reload;

@end
