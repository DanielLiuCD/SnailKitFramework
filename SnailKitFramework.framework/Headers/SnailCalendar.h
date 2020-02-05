//
//  SnailCalendar.h
//  SnailKit
//
//  Created by liu on 2020/1/10.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SnailDayInfo : NSObject

@property (nonatomic ,readonly) NSString *secend;
@property (nonatomic ,readonly) NSString *minute;
@property (nonatomic ,readonly) NSString *hour;
@property (nonatomic ,readonly) NSString *weak;   //周几
@property (nonatomic ,readonly) NSString *day;    //日
@property (nonatomic ,readonly) NSString *month;  //月
@property (nonatomic ,readonly) NSString *year;   //年
@property (nonatomic ,readonly) NSString *weakOfMonth; //当前月的第几周
@property (nonatomic ,readonly) NSString *weakOfYear; //当前年的第几周
@property (nonatomic ,readonly) NSTimeInterval timeStmap; //时间戳

@end

@interface SnailMonthInfo : NSObject

@property (nonatomic ,readonly) NSArray<SnailDayInfo *> *days;
@property (nonatomic ,readonly) NSString *month;
@property (nonatomic ,readonly) NSString *year;
@property (nonatomic ,readonly) NSString *weakNumber; //本月有多少周
@property (nonatomic ,readonly) NSString *firstDayWeak; //本月第一天是周几

- (NSInteger)indexOfDay:(SnailDayInfo *)day;

@end

@interface SnailYearInfo : NSObject

@property (nonatomic ,readonly) NSArray<SnailMonthInfo *> *months;
@property (nonatomic ,readonly) NSString *year;

@end

@interface SnailCalendar : NSObject

//默认跟随系统
@property (nonatomic ,strong) NSArray *weakLists;

- (SnailYearInfo *)takeYearInfo:(NSString *)year;
- (SnailMonthInfo *)takeMonthInfo:(NSString *)year Month:(NSString *)month;
- (SnailDayInfo *)takeDayInfo:(NSString *)year Month:(NSString *)month Day:(NSString *)day;

- (SnailDayInfo *)takeDayInfoFromDate:(NSDate *)date;
- (SnailMonthInfo *)takeMonthInfoFromDate:(NSDate *)date;
- (SnailYearInfo *)takeYearInfoFromDate:(NSDate *)date;

@end
