//
//  YHAFNHelper.h
//  即时通讯
//
//  Created by apple on 17/2/4.
//  Copyright © 2017年 apple. All rights reserved.
//

#import "AFHTTPSessionManager.h"

@interface YHAFNHelper : AFHTTPSessionManager

//单例
+ (YHAFNHelper *)sharedManager;

/**
 *  get请求
 *
 *  @param url        接口url
 *  @param parameters 参数
 *  @param success    请求成功的block
 *  @param failure    请求失败的block
 */
+ (void)get:(NSString *)url parameter:(id )parameters success:(void(^)(id responseObject))success faliure:(void(^)(id error))failure;

/**
 *  post请求
 *
 *  @param url        接口url
 *  @param parameters 参数
 *  @param success    请求成功的block
 *  @param failure    请求失败的block
 */
+ (void)post:(NSString *)url parameters:(id)parameters success:(void(^)(id responseObject))success faliure:(void(^)(NSError *error))failure;
/**
 *  post请求 不拼接基地址
 *
 *  @param url        接口url
 *  @param parameters 参数
 *  @param success    请求成功的block
 *  @param failure    请求失败的block
 */
+ (void)postNoBaseUrl:(NSString *)url parameters:(id)parameters success:(void(^)(id responseObject))success faliure:(void(^)(id error))failure;


/**
 *  文件上传
 *
 *  @param url        接口url
 *  @param parameters 参数
 *  @param block      图片data
 *  @param success    请求成功的block
 *  @param failure    请求失败的block
 */
+ (void )post:(NSString *)url parameters:(id)parameters  constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block success:(void (^)(id responseObject))success faliure:(void (^)(id error))failure;


//patch请求
/**
 patch请求

 @param url        接口url
 @param parameters 参数
 @param success    请求成功的block
 @param failure    请求失败的block
 */
+ (void)patch:(NSString *)url parameters:(id)parameters success:(void(^)(id responseObject))success faliure:(void(^)(NSError *error))failure;



@end
