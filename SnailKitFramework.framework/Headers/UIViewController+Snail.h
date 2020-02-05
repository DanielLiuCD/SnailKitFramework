//
//  UIViewController+Snail.h
//  SnailKit
//
//  Created by liu on 2020/1/7.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark - Alert

@interface SnailAlertAction : NSObject

@property (nonatomic ,copy ,readonly) NSString *title;
@property (nonatomic ,copy ,readonly) NSString *placeHolder;

@property (nonatomic ,strong) NSDictionary *placeHolderAttributes;
@property (nonatomic ,strong) UIFont *filedFont;
@property (nonatomic ,strong) UIColor *filedColor;

- (instancetype)initWithTitle:(NSString *)title Placeholder:(NSString *)placeHolder;

@end

@interface SnailAlertResult: NSObject

@property (nonatomic ,copy ,readonly) NSString *title;
@property (nonatomic ,copy ,readonly) NSArray<NSString *> *texts;
@property (nonatomic ,copy ,readonly) NSArray<NSString *> *placeHolders;

@end

#pragma mark - ImageChoose

typedef NS_ENUM(char,SnailImageChooseEditType) {
    ///没有裁剪
    SnailImageChooseEditNone,
    ///系统图片裁剪
    SnailImageChooseEditSystem,
};

typedef NS_ENUM(char,SnailImageChooseCompressType) {
    ///没有压缩
    SnailImageChooseCompressNone,
    /// max size 1280
    SnailImageChooseCompressAuto,
};

@interface SnailImageChooseRequest : NSObject

@property (nonatomic) SnailImageChooseEditType edit;
@property (nonatomic) BOOL path;
@property (nonatomic) SnailImageChooseCompressType compress;

+ (instancetype)request;

@end

@interface SnailImageChooseImage : NSObject

@property (nonatomic ,copy ,readonly) UIImage *image;
@property (nonatomic ,copy ,readonly) NSString *imageName;
@property (nonatomic ,copy ,readonly) NSString *imagePath;

@end

@interface SnailImageChooseResult : NSObject

@property (nonatomic ,strong ,readonly) SnailImageChooseImage *original;
@property (nonatomic ,strong ,readonly) SnailImageChooseImage *edit;

@end

typedef void(^SnailImageChooseCompleteHanlder)(SnailImageChooseResult *result);
typedef void(^SnailVideoChooseCompleteHanlder)(NSURL *videoUrl ,UIImage *image ,NSTimeInterval time);

@interface UIViewController (Snail)

#pragma mark - AlertController

- (UIAlertController *)snail_alert_with_title:(NSString *)title message:(NSString *)message style:(UIAlertControllerStyle)style titles:(NSArray *)titles Block:(void(^)(SnailAlertResult *result))block;

- (UIAlertController *)snail_alert_with_title:(NSString *)title message:(NSString *)message style:(UIAlertControllerStyle)style actions:(NSArray<SnailAlertAction *> *)actions Block:(void (^)(SnailAlertResult *))block;

#pragma mark - ImageChoose

- (void)snail_open_image_picker:(SnailImageChooseRequest *)request Block:(SnailImageChooseCompleteHanlder)block;

- (void)snail_open_camera_picker:(SnailImageChooseRequest *)request Block:(SnailImageChooseCompleteHanlder)block;

#pragma mark - VideoChoose

- (void)snail_open_video_choose_picker:(NSTimeInterval)maxTime Block:(SnailVideoChooseCompleteHanlder)block;

- (void)snail_open_video_record_picker:(NSTimeInterval)time Block:(SnailVideoChooseCompleteHanlder)block;

#pragma mark - NavagationBarItem

- (void)snail_left_item_image:(UIImage *)image Selector:(SEL)selector;
- (void)snail_left_item_title:(NSString *)title Selector:(SEL)selector;
- (void)snail_left_item_view:(UIView *)view;

- (void)snail_right_item_image:(UIImage *)image Selector:(SEL)selector;
- (void)snail_right_item_title:(NSString *)title Selector:(SEL)selector;
- (void)snail_right_item_view:(UIView *)view;

- (void)snail_left_item_images:(NSArray<UIImage *> *)images ActionBlock:(void(^)(NSInteger index))block;
- (void)snail_left_item_titles:(NSArray<NSString *> *)titles ActionBlock:(void(^)(NSString *title))block;
- (void)snail_left_item_views:(NSArray<UIView *> *)views;

- (void)snail_right_item_images:(NSArray<UIImage *> *)images ActionBlock:(void(^)(NSInteger index))block;
- (void)snail_right_item_titles:(NSArray<NSString *> *)titles ActionBlock:(void(^)(NSString *title))block;
- (void)snail_right_item_views:(NSArray<UIView *> *)views;

#pragma mark - Navagation
- (void)snail_push_to_controller:(UIViewController *)controller;
- (void)snail_pop_to_controller:(Class)controllerClass;

@end
