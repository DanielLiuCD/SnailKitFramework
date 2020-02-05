//
//  SnailBadgeNode.h
//  SnailKit
//
//  Created by liu on 2020/1/17.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnailBadgeSubscribe.h"

@interface SnailBadgeNode : NSObject<NSCopying>

@property (nonatomic ,strong) NSString *path;
@property (nonatomic) NSInteger count;
@property (nonatomic ,strong) NSMutableDictionary<NSString *,SnailBadgeNode *> *subs;
@property (nonatomic ,weak) SnailBadgeNode *supperNode;
@property (nonatomic ,strong) NSMutableDictionary<NSString *,SnailBadgeSubscribe *> *subscribes;

- (SnailBadgeNode *)findNodeWithPath:(NSString *)path;
- (SnailBadgeNode *)findNodeWithPath:(NSString *)path SupperNode:(SnailBadgeNode *)supperNode Create:(BOOL)create;
- (void)removeNodeWithPath:(NSString *)path;

+ (instancetype)rootNode;

@end
