//
//  SnailSimpleWebController.h
//  lesan
//
//  Created by JobNewMac1 on 2018/8/20.
//  Copyright © 2018年 ning. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailSimpleWebController : UIViewController

@property (nonatomic ,strong) NSURL *url;
@property (nonatomic ,strong) NSString *htmlString;
@property (nonatomic) BOOL trackUrlTitle;

@end
