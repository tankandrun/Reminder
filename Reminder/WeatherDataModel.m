//
//  WeatherDataModel.m
//  Reminder
//
//  Created by 金顺度 on 16/2/19.
//  Copyright © 2016年 金顺度. All rights reserved.
//

#import "WeatherDataModel.h"

@implementation WeatherDataModel
+ (NSDictionary *)mj_objectClassInArray {
    return @{@"daily_forecast":@"WeatherDataDailyForecastModel",
             @"hourly_forecast":@"WeatherDataHourlyForecastModel"};
}
@end



@implementation WeatherDataAqiModel
@end
@implementation WeatherDataAqiCityModel
+ (NSDictionary *)mj_replacedKeyFromPropertyName {
    return @{@"aqiaqi":@"aqi"};
}
@end



@implementation WeatherDataBasicModel
+ (NSDictionary *)mj_replacedKeyFromPropertyName {
    return @{@"iD":@"id"};
}
@end
@implementation WeatherDataBasicUpdateModel
@end



@implementation WeatherDataDailyForecastModel
@end
@implementation WeatherDataDailyForecastAstroModel
@end
@implementation WeatherDataDailyForecastCondModel
@end
@implementation WeatherDataDailyForecastTmpModel
@end
@implementation WeatherDataDailyForecastWindModel
@end



@implementation WeatherDataHourlyForecastModel
@end
@implementation WeatherDataHourlyForecastWindModel
@end



@implementation WeatherDataNowModel
@end
@implementation WeatherDataNowCondModel
@end
@implementation WeatherDataNowWindModel
@end



@implementation WeatherDataSuggestionModel
@end
@implementation WeatherDataSuggestionComfModel
@end
@implementation WeatherDataSuggestionCwModel
@end
@implementation WeatherDataSuggestionDrsgModel
@end
@implementation WeatherDataSuggestionFluModel
@end
@implementation WeatherDataSuggestionSportModel
@end
@implementation WeatherDataSuggestionTravModel
@end
@implementation WeatherDataSuggestionUvModel
@end



