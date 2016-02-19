//
//  CityModel.h
//  Reminder
//
//  Created by 金顺度 on 16/2/19.
//  Copyright © 2016年 金顺度. All rights reserved.
//


 /// 包含全部的城市，全部的旅游景点


#import <Foundation/Foundation.h>

@class CityInfoModel;

@interface CityModel : NSObject
@property (nonatomic,strong) NSArray<CityInfoModel *> *city_info;
@property (nonatomic,strong) NSString *status;
@end


@interface CityInfoModel : CityModel
@property (nonatomic,strong) NSString *city;
@property (nonatomic,strong) NSString *cnty;
@property (nonatomic,strong) NSString *iD;
@property (nonatomic,strong) NSString *lat;
@property (nonatomic,strong) NSString *lon;
@end