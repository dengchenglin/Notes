//
//  JJDevice.h
//  HeheyuanDemo
//
//  Created by jiangjun on 14-4-22.
//  Copyright (c) 2014年 jiangjun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JJDevice : NSObject
+ (CGFloat) getOSVersion;
+ (CGFloat) getScreenWidth;
+ (CGFloat) getScreenHeight;
+ (UIColor *) colorWithR:(double)r G:(double)g B:(double)b A:(float)a;
+(NSString *)shipType:(NSString *)string;//返回舱位类型
+(NSString *)payType:(NSString *)state;
+(NSString *)orderState:(NSString *)state;//返回订单状态
+(NSString *)hotelOrderState:(NSString *)state;//返回酒店订单状态--2014-11-22
+(NSString *)weekdayFromDate:(NSDate *)date;
@end

#define kScreenWidth [JJDevice getScreenWidth]
#define kScreenHeight [JJDevice getScreenHeight]
#define kOSVersion [JJDevice getOSVersion]
#define isIOS7 ([JJDevice getOSVersion] >= 7)
#define is7_71 ([JJDevice getOSVersion] >= 7 && [JJDevice getOSVersion] < 7.1)
#define iPhone5 (([[UIScreen mainScreen] bounds].size.height-568)?NO:YES)

#define SysFont(f) [UIFont systemFontOfSize:f]
#define BoldFont(f) [UIFont boldSystemFontOfSize:f]

#define PropertyString(p) @property (nonatomic, copy) NSString *p;
#define PropertyFloat(p) @property (nonatomic, assign) float p;
#define PropertyDouble(p) @property (nonatomic, assign) double p;
#define PropertyInt(p) @property (nonatomic, assign) NSInteger p;
#define PropertyUInt(p) @property (nonatomic, assign) NSUInteger p;
#define PropertyBool(p) @property (nonatomic, assign) BOOL p;

#define FONT_15 [UIFont systemFontOfSize:15.0f]
#define FONT_14 [UIFont systemFontOfSize:14.0f]
#define FONT_12 [UIFont systemFontOfSize:12.0f]
#define FONT_10 [UIFont systemFontOfSize:10.0f]
//openUUID
#define kDeviceSerialNo [[[UIDevice currentDevice] identifierForVendor] UUIDString]




