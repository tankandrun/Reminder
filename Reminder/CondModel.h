//
//  CondModel.h
//  Reminder
//
//  Created by 金顺度 on 16/2/19.
//  Copyright © 2016年 金顺度. All rights reserved.
//



 /// 所有的天气情况



#import <Foundation/Foundation.h>

@class CondInfoModel;

@interface CondModel : NSObject
@property (nonatomic,strong) NSArray<CondInfoModel *> *cond_info;
@property (nonatomic,strong) NSString *status;
@end

@interface CondInfoModel : CondModel
@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSString *txt;
@property (nonatomic,strong) NSString *txt_en;
@property (nonatomic,strong) NSString *icon;
@end