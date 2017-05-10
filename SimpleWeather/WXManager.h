//
//  WXManager.h
//  SimpleWeather
//
//  Created by Naufal Aros El Morabet on 20/12/15.
//  Copyright © 2015 Naufal Aros. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa.h>
// 1
#import "WXCondition.h"

@interface WXManager : NSObject <CLLocationManagerDelegate>

// 2
+ (instancetype)sharedManager;

// 3
@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

// 4
- (void)findCurrentLocation;

@end


