//
//  UIDevice+Enhanced.h
//  HuXiu
//
//  Created by Huxiu on 8/22/13.
//  Copyright (c) 2013 HuXiu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (Enhanced)
typedef enum {
    kUnknownPlatform = 0,
    kiPhone1G,
    kiPhone3G,
    kiPhone3GS,
    kiPhone4,
    kiPhone4Verizon,
    kiPhone4S,
    kiPodTouch1G,
    kiPodTouch2G,
    kiPodTouch3G,
    kiPodTouch4G,
    kiPad,
    kiPad2Wifi,
    kiPad2GSM,
    kiPad2CMDA,
    kSimulator
} PlatformType;

- (NSString *) platformCode;
- (NSString *) platformName;
- (PlatformType) platform;
@end
