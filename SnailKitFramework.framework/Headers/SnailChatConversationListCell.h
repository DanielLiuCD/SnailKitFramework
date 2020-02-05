//
//  SnailChatConversationListCell.h
//  SnailKit
//
//  Created by liu on 2020/1/21.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SnailChatConversationListObject.h"

@protocol SnailChatConversationListCellProtocol <NSObject>

- (void)SnailChatConversationListCellImageView:(UIImageView *)imageV Url:(NSString *)url;

@end

@interface SnailChatConversationListCell : UITableViewCell

@property (nonatomic ,strong) UIView *iconView;
@property (nonatomic ,strong) UILabel *titleLbel;
@property (nonatomic ,strong) UILabel *contentLbel;
@property (nonatomic ,strong) UILabel *timeLbel;
@property (nonatomic ,strong) UILabel *badgeLabel;
@property (nonatomic ,weak) id<SnailChatConversationListCellProtocol> protocol;

- (void)configureWithModel:(SnailChatConversationListObject *)object;

@end
