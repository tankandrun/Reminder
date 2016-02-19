//
//  WeatherDataModel.h
//  Reminder
//
//  Created by 金顺度 on 16/2/19.
//  Copyright © 2016年 金顺度. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WeatherDataAqiModel,WeatherDataBasicModel,WeatherDataDailyForecastModel,WeatherDataHourlyForecastModel,WeatherDataNowModel,WeatherDataSuggestionModel,WeatherDataAqiCityModel,WeatherDataBasicUpdateModel,WeatherDataDailyForecastAstroModel,WeatherDataDailyForecastCondModel,WeatherDataDailyForecastTmpModel,WeatherDataDailyForecastWindModel,WeatherDataHourlyForecastWindModel,WeatherDataNowCondModel,WeatherDataNowWindModel,WeatherDataSuggestionComfModel,WeatherDataSuggestionCwModel,WeatherDataSuggestionDrsgModel,WeatherDataSuggestionFluModel,WeatherDataSuggestionSportModel,WeatherDataSuggestionTravModel,WeatherDataSuggestionUvModel;

@interface WeatherDataModel : NSObject
@property (nonatomic,strong) WeatherDataAqiModel *aqi;
@property (nonatomic,strong) WeatherDataBasicModel *basic;
@property (nonatomic,strong) NSArray<WeatherDataDailyForecastModel *> *daily_forecast;
@property (nonatomic,strong) NSArray<WeatherDataHourlyForecastModel *> *hourly_forecast;
@property (nonatomic,strong) WeatherDataNowModel *now;
@property (nonatomic,strong) NSString *status;
@property (nonatomic,strong) WeatherDataSuggestionModel *suggestion;
@end

#pragma mark - aqi
@interface WeatherDataAqiModel : WeatherDataModel
@property (nonatomic,strong) WeatherDataAqiCityModel *city;
@end

@interface WeatherDataAqiCityModel : WeatherDataAqiModel
@property (nonatomic,strong) NSString *aqiaqi;
@property (nonatomic,strong) NSString *co;
@property (nonatomic,strong) NSString *no2;
@property (nonatomic,strong) NSString *o3;
@property (nonatomic,strong) NSString *pm10;
@property (nonatomic,strong) NSString *pm25;
@property (nonatomic,strong) NSString *qlty;
@property (nonatomic,strong) NSString *so2;
@end

#pragma mark - basic
@interface WeatherDataBasicModel : WeatherDataModel
@property (nonatomic,strong) NSString *city;
@property (nonatomic,strong) NSString *cnty;
@property (nonatomic,strong) NSString *iD;
@property (nonatomic,strong) NSString *lat;
@property (nonatomic,strong) NSString *lon;
@property (nonatomic,strong) WeatherDataBasicUpdateModel *update;
@end

@interface WeatherDataBasicUpdateModel : WeatherDataBasicModel
@property (nonatomic,strong) NSString *loc;
@property (nonatomic,strong) NSString *utc;
@end

#pragma mark - daily_forecast
@interface WeatherDataDailyForecastModel : WeatherDataModel
@property (nonatomic,strong) WeatherDataDailyForecastAstroModel *astro;
@property (nonatomic,strong) WeatherDataDailyForecastCondModel *cond;
@property (nonatomic,strong) NSString *date;
@property (nonatomic,strong) NSString *hum;
@property (nonatomic,strong) NSString *pcpn;
@property (nonatomic,strong) NSString *pop;
@property (nonatomic,strong) NSString *pres;
@property (nonatomic,strong) WeatherDataDailyForecastTmpModel *tmp;
@property (nonatomic,strong) NSString *vis;
@property (nonatomic,strong) WeatherDataDailyForecastWindModel *wind;
@end

@interface WeatherDataDailyForecastAstroModel : WeatherDataDailyForecastModel
@property (nonatomic,strong) NSString *sr;
@property (nonatomic,strong) NSString *ss;
@end

@interface WeatherDataDailyForecastCondModel : WeatherDataDailyForecastModel
@property (nonatomic,strong) NSString *code_d;
@property (nonatomic,strong) NSString *code_n;
@property (nonatomic,strong) NSString *txt_d;
@property (nonatomic,strong) NSString *txt_n;
@end

@interface WeatherDataDailyForecastTmpModel : WeatherDataDailyForecastModel
@property (nonatomic,strong) NSString *max;
@property (nonatomic,strong) NSString *min;
@end

@interface WeatherDataDailyForecastWindModel : WeatherDataDailyForecastModel
@property (nonatomic,strong) NSString *deg;
@property (nonatomic,strong) NSString *dir;
@property (nonatomic,strong) NSString *sc;
@property (nonatomic,strong) NSString *spd;
@end

#pragma mark - hourly_forecast
@interface WeatherDataHourlyForecastModel : WeatherDataModel
@property (nonatomic,strong) NSString *date;
@property (nonatomic,strong) NSString *hum;
@property (nonatomic,strong) NSString *pop;
@property (nonatomic,strong) NSString *pres;
@property (nonatomic,strong) NSString *tmp;
@property (nonatomic,strong) WeatherDataHourlyForecastWindModel *wind;
@end

@interface WeatherDataHourlyForecastWindModel : WeatherDataHourlyForecastModel
@property (nonatomic,strong) NSString *deg;
@property (nonatomic,strong) NSString *dir;
@property (nonatomic,strong) NSString *sc;
@property (nonatomic,strong) NSString *spd;
@end

#pragma mark - now
@interface WeatherDataNowModel : WeatherDataModel
@property (nonatomic,strong) WeatherDataNowCondModel *cond;
@property (nonatomic,strong) NSString *fl;
@property (nonatomic,strong) NSString *hum;
@property (nonatomic,strong) NSString *pcpn;
@property (nonatomic,strong) NSString *pres;
@property (nonatomic,strong) NSString *tmp;
@property (nonatomic,strong) NSString *vis;
@property (nonatomic,strong) WeatherDataNowWindModel *wind;
@end

@interface WeatherDataNowCondModel : WeatherDataNowModel
@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSString *txt;
@end

@interface WeatherDataNowWindModel : WeatherDataNowModel
@property (nonatomic,strong) NSString *deg;
@property (nonatomic,strong) NSString *dir;
@property (nonatomic,strong) NSString *sc;
@property (nonatomic,strong) NSString *spd;
@end

#pragma mark - suggestion
@interface WeatherDataSuggestionModel : WeatherDataModel
@property (nonatomic,strong) WeatherDataSuggestionComfModel *comf;
@property (nonatomic,strong) WeatherDataSuggestionCwModel *cw;
@property (nonatomic,strong) WeatherDataSuggestionDrsgModel *drsg;
@property (nonatomic,strong) WeatherDataSuggestionFluModel *flu;
@property (nonatomic,strong) WeatherDataSuggestionSportModel *sport;
@property (nonatomic,strong) WeatherDataSuggestionTravModel *trav;
@property (nonatomic,strong) WeatherDataSuggestionUvModel *uv;
@end

@interface WeatherDataSuggestionComfModel : WeatherDataSuggestionModel
@property (nonatomic,strong) NSString *brf;
@property (nonatomic,strong) NSString *txt;
@end

@interface WeatherDataSuggestionCwModel : WeatherDataSuggestionModel
@property (nonatomic,strong) NSString *brf;
@property (nonatomic,strong) NSString *txt;
@end

@interface WeatherDataSuggestionDrsgModel : WeatherDataSuggestionModel
@property (nonatomic,strong) NSString *brf;
@property (nonatomic,strong) NSString *txt;
@end

@interface WeatherDataSuggestionFluModel : WeatherDataSuggestionModel
@property (nonatomic,strong) NSString *brf;
@property (nonatomic,strong) NSString *txt;
@end

@interface WeatherDataSuggestionSportModel : WeatherDataSuggestionModel
@property (nonatomic,strong) NSString *brf;
@property (nonatomic,strong) NSString *txt;
@end

@interface WeatherDataSuggestionTravModel : WeatherDataSuggestionModel
@property (nonatomic,strong) NSString *brf;
@property (nonatomic,strong) NSString *txt;
@end

@interface WeatherDataSuggestionUvModel : WeatherDataSuggestionModel
@property (nonatomic,strong) NSString *brf;
@property (nonatomic,strong) NSString *txt;
@end




