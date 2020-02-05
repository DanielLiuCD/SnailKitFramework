//
//  SnailLocationManager.h
//  SnailKit
//
//  Created by liu on 2020/1/15.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface SnailLocationSearch : NSObject

@property (nonatomic ,readonly) BOOL searching;

- (void)startWithBlock:(MKLocalSearchCompletionHandler)completionHandler;

@end

@interface SnailLocationManager : NSObject

@property (nonatomic ,copy) void(^locationBlock)(CLLocationCoordinate2D coordinate);
@property (nonatomic ,readonly) BOOL locationing;

///权限变化的block
@property (nonatomic ,copy) void(^locationPermissionChangeBlock)(CLAuthorizationStatus status);

///检查定位权限
- (CLAuthorizationStatus)checkLocationPermission;

- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorization;

///逆地址编码
- (void)geocodeAddressString:(NSString *)addressString completionHandler:(CLGeocodeCompletionHandler)completionHandler;

///周围搜索
- (SnailLocationSearch *)searchAround:(NSString *)key Coor:(CLLocationCoordinate2D)coor Distance:(CGFloat)distance;

- (void)location;
- (void)stop;

- (void)clear;

@end

