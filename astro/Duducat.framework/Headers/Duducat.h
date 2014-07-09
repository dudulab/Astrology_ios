//
//  DDCat.h
//  DuducatFramework
//
//  Created by dyun on 4/24/14.
//  Copyright (c) 2014 danyun.liu@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DuducatConstant.h"
#import <UIKit/UIKit.h>


typedef void(^DuducatTextCompleteBlock) (NSString *key, NSString *text);

typedef void(^DuducatImageCompleteBlock) (NSString *key, UIImage *image);


@interface Duducat : NSObject

//The interval of the check update, default is 1800 seconds;
@property (nonatomic) NSTimeInterval updateInterval;

//shared instance for the app;
+ (instancetype)sharedInstance;

- (void)registerWithAppid:(NSString *)appid appsecret:(NSString *)appsecret;

//basic function for more controll if user want to do more custom configuration;

//get text from the key
- (void)textWithKey:(NSString *)key completeBlock:(DuducatTextCompleteBlock)completeBlock;

- (void)imageWithKey:(NSString *)key completeBlock:(DuducatImageCompleteBlock)completeBlock;

//update all keys the app used
- (void)updateAll;

@end
