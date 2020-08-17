//
//  SnailMenuBarButton.h
//  SnailKit
//
//  Created by liu on 2019/12/16.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailMenuBarItem.h"

@interface SnailMenuBarButton : UIControl<SnailMenuBarItemViewProtocol>

@property (nonatomic ,strong) UIView *contentView;
@property (nonatomic ,strong) UIImageView *imageView;
@property (nonatomic ,strong) UILabel *titleLabel;

@property (nonatomic ,strong) UIView *badgeContainer;
@property (nonatomic ,strong) UIImageView *badgeBackgroundImageView;
@property (nonatomic ,strong) UILabel *badgeLabel;
@property (nonatomic ,strong) UIView *badgePointView;

@property (nonatomic ,strong) UIImageView *badgeMaskImageV;

- (void)setItem:(SnailMenuBarItem *)item;

@end
