//
//  AIQUser.h
//  AIQApi
//
//  Created by Khang Toh on 1/4/2019.
//  Copyright © 2019 AIQ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIQApiResponseDecodable.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIQUser : NSObject

@property (nonatomic, readonly) NSString *AIQUserId;
@property (nonatomic, readonly) NSString *AIQUserGender;
@property (nonatomic, readonly) NSString *AIQUserAge;
@property (nonatomic, readonly) NSString *AIQDeviceType;
@property (nonatomic, readonly) NSString *AIQDeviceModel;
@property (nonatomic, readonly) NSString *AIQDeviceVersion;
@property (nonatomic, readonly) NSString *AIQAppVersion;

@property (nonatomic, readonly) float AIQUserLat;
@property (nonatomic, readonly) float AIQUserLng;

@end

NS_ASSUME_NONNULL_END
