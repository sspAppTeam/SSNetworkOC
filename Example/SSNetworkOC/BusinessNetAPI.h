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

+ (void)PUT:(NSString *)URLString
parameters:(id)parameters
   success:(SSRequestSuccess)success
   failure:(SSRequestFailure)failure;

+ (void)PATCH:(NSString *)URLString
parameters:(id)parameters
   success:(SSRequestSuccess)success
   failure:(SSRequestFailure)failure;

/**
*  上传单/多张图片
*
*  @param URLString        请求地址
*  @param parameters 请求参数{
 @"uploadDic":{
 @"name":@"name",
 @"images":@[],
 @"fileNames":@[],
 }
 }
*  @param name       图片对应服务器上的字段
*  @param images     图片数组
*  @param fileNames  图片文件名数组, 可以为nil, 数组内的文件名默认为当前日期时间"yyyyMMddHHmmss"
*  @return 返回的对象可取消请求,调用cancel方法
 
 NSDictionary *uploadDic=[parameters objectForKey:@"uploadDic"];
 NSArray *imgs=[uploadDic objectForKey:@"images"];
 NSArray *fileNames=[uploadDic objectForKey:@"fileNames"];
 NSString *name=[uploadDic objectForKey:@"name"];
*/
+ (void)UploadImgs:(NSString *)URLString
parameters:(id)parameters
   success:(SSRequestSuccess)success
           failure:(SSRequestFailure)failure;

+ (void)downloadFile:(NSString *)URLString
   success:(SSRequestSuccess)success
           failure:(SSRequestFailure)failure;
@end

NS_ASSUME_NONNULL_END
