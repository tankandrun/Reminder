//
//  BaseNetworking.h
//  TRYNASA
//
//  Created by 金顺度 on 16/2/18.
//  Copyright © 2016年 金顺度. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseNetworking : NSObject

#define SUCCESSBLOCK void(^)(id successResponse)
#define FAILUREBLOCK void(^)(id failureResponse)
/**
 *  不使用MJExtension解析
 */
+ (void)GET:(NSString *)path parameters:(NSDictionary *)params success:(SUCCESSBLOCK)successBlock andFailure:(FAILUREBLOCK)failureBlock;
/**
 *  不使用MJExtension解析
 */
+ (void)POST:(NSString *)path parameters:(NSDictionary *)params success:(SUCCESSBLOCK)successBlock andFailure:(FAILUREBLOCK)failureBlock;




#define kCompletionHandle completionHandle:(void(^)(id model,NSError *error))
/**
 *  使用MJExtension解析
 */
+ (id)GET:(NSString *)path parameters:(NSDictionary *)params completionHandler:(void(^)(id responseObj,NSError *error))complete;
/**
 *  使用MJExtension解析
 */
+ (id)POST:(NSString *)path parameters:(NSDictionary *)params completionHandler:(void(^)(id responseObj,NSError *error))complete;




@end
