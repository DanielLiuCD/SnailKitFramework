//
//  SnailImageLookOverController.h
//  SnailImageLookOverController
//
//  Created by liu on 2019/8/28.
//  Copyright © 2019 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SnailImageLookOverProgressBlock)(CGFloat progress);
typedef void(^SnailImageLookOverCompleteBlock)(BOOL success);

@interface SnailImageLookOverViewConfg : NSObject

@property (nonatomic ,readonly) CGRect fromFrame;
@property (nonatomic ,readonly) UIView *fromShortView;

@property (nonatomic ,readonly) CGRect toFrame;
@property (nonatomic ,readonly) UIView *toShortView;

- (instancetype)initWithView:(UIView *)fromView;

- (instancetype)initWithView:(UIView *)fromView ToImage:(UIImage *)toImage;

@end

@interface SnailImageLookOverCustomeCell : UICollectionViewCell

@end

@interface SnailImageLookOverRequest : NSObject

@property (nonatomic ,copy) SnailImageLookOverViewConfg *(^dissmissBlock)(NSInteger index);
@property (nonatomic ,copy) NSInteger(^countBlock)(void);
@property (nonatomic ,copy) NSInteger(^currentBlock)(void);
@property (nonatomic ,copy) void(^displayAtIndexBlock)(NSInteger index);
@property (nonatomic ,readonly) NSInteger currentIndex;
@property (nonatomic ,copy) void(^configureBlock)(UIImageView *imageV,NSInteger index,SnailImageLookOverProgressBlock progressBlock,SnailImageLookOverCompleteBlock completeBlock);

@end

@interface SnailImageLookOverRequest(CUSTOME_USE)

@property (nonatomic ,copy) NSString *(^customeIdentiferBlock)(NSInteger index);
@property (nonatomic ,copy) void(^configureCustomeCellBlock)(__kindof SnailImageLookOverCustomeCell *cell,NSInteger index);

/**
 cls is SnailImageLookOverCustomeCell's subClass
 */
- (void)registerCustomeClass:(Class)cls Identifer:(NSString *)identifer;

@end

@interface SnailImageLookOverController : UIViewController

@property (nonatomic ,copy) SnailImageLookOverViewConfg *(^presentedBlock)(NSInteger index);

- (instancetype)initWithRequest:(SnailImageLookOverRequest *)request;

- (void)appendRequest:(SnailImageLookOverRequest *)request;

- (void)replaceRequest:(SnailImageLookOverRequest *)request;

@end
