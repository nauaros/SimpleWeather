//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Naufal Aros El Morabet on 20/12/15.
//  Copyright © 2015 Naufal Aros. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey
{
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    
    return paths;
}

@end
