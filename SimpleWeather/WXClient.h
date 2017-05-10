//
//  WXClient.h
//  SimpleWeather
//
//  Created by Naufal Aros El Morabet on 20/12/15.
//  Copyright © 2015 Naufal Aros. All rights reserved.
//

@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <Foundation/Foundation.h>

@interface WXClient : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end
