//
//  CityModel.m
//  Reminder
//
//  Created by 金顺度 on 16/2/19.
//  Copyright © 2016年 金顺度. All rights reserved.
//

#import "CityModel.h"

@implementation CityModel
+ (NSDictionary *)mj_objectClassInArray {
    return @{@"city_info" : @"CityInfoModel"};
}
@end

@implementation CityInfoModel
+ (NSDictionary *)mj_replacedKeyFromPropertyName {
    return @{@"iD":@"id"};
}
@end