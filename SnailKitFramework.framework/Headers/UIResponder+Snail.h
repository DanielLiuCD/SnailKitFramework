//
//  UIResponder+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIResponder (Snail)

- (void)snail_response_chain:(NSString *)event extend:(id)extend;

@end
