//
//  BusinessNetAPI.h
//  SSPNetWork
//
//  Created by ssp on 2019/8/16.
//  Copyright © 2019 ssp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SSNetworkOC/SSNetWork.h>
NS_ASSUME_NONNULL_BEGIN

#define DevelopSever 1
#define TestSever    0
#define ProductSever 0

#pragma mark - 详细接口地址  命名规范：R_服务名_功能名  如：R_authservice_login

#pragma mark -- authservice
static NSString * const R_authservice_login = @"authservice/login";

#pragma mark -- gpsservice


#pragma mark -- siteservice




@interface BusinessNetAPI : SSHttpRequest


+ (void)GET:(NSString *)URLString
 parameters:(id)parameters
    success:(SSRequestSuccess)success
    failure:(SSRequestFailure)failure;


+ (void)POST:(NSString *)URLString
  parameters:(id)parameters
     success:(SSRequestSuccess)success
     failure:(SSRequestFailure)failure;


@end

NS_ASSUME_NONNULL_END
