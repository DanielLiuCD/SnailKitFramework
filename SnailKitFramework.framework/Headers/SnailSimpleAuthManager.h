//
//  SnailSimpleAuthManager.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SnailSimpleAuthHanlder)(BOOL result);

typedef NS_ENUM(NSInteger,SnailSimpleAuthLocationType) {
    SnailSimpleAuthLocationType_WhenUse,
    SnailSimpleAuthLocationType_Allways,
};

@interface SnailSimpleAuthManager : NSObject

/**检查相册权限*/
- (void)check_photo_auth:(SnailSimpleAuthHanlder)block;

/**检查相机权限*/
- (void)check_camera_auth:(SnailSimpleAuthHanlder)block;

/**检查麦克风权限*/
- (void)check_micro_auth:(SnailSimpleAuthHanlder)block;

/**检查定位权限*/
- (void)check_location_auth:(SnailSimpleAuthLocationType)type Block:(SnailSimpleAuthHanlder)block;

@end
