//
//  SnailSimpleWebController.h
//  lesan
//
//  Created by JobNewMac1 on 2018/8/20.
//  Copyright © 2018年 ning. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SnailSimpleWebJSObject : NSObject

@property (nonatomic ,strong) NSString *name;
@property (nonatomic ,copy) void(^responseHanlder)(id body);

@end

@interface SnailSimpleWebController : UIViewController

@property (nonatomic ,copy) NSURL *url; //url优先级高于htmlString
@property (nonatomic ,copy) NSString *htmlString;
@property (nonatomic ,copy) NSURL *baseUrl;

@property (nonatomic) NSURLRequestCachePolicy cachePolicy;
@property (nonatomic) NSTimeInterval timeoutInterval; //默认30

@property (nonatomic) BOOL trackUrlTitle; //默认为true

@property (nonatomic ,copy) void(^didFailProvisionalNavigation)(NSError *error);
@property (nonatomic ,copy) void(^didFailNavigation)(NSError *error);
@property (nonatomic ,copy) void(^didFinishNavigation)(void);

@property (nonatomic ,copy) void(^showAlertActionBlock)(NSString *message);
@property (nonatomic ,copy) void(^showInputTextActionBlock)(NSString *title, NSString *defaultText, void (^completeHanlder)(NSString *text));

- (instancetype)initWithUrl:(NSURL *)url;
- (instancetype)initWithHtmlString:(NSString *)htmlString baseURL:(NSURL *)baseUrl;

- (void)registerJSObject:(SnailSimpleWebJSObject *)object;
- (void)runJavaScript:(NSString *)script completionHandler:(void (^)(id, NSError *error))completionHandler;

- (void)loadUrl:(NSURL *)url;
- (void)loadHtmlString:(NSString *)htmlString baseURL:(NSURL *)baseUrl;

///刷新页面
- (void)reload;
///强制重新载入url
- (void)refesh;

@end
