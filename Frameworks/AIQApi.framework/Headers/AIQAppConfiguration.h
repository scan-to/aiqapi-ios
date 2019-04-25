//
//  AIQApiAppConfiguration.h
//  AIQApi
//
//  Created by Khang Toh on 5/4/19.
//  Copyright © 2019 AIQ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AIQAppConfiguration : NSObject<NSCopying>

+ (instancetype)sharedConfiguration;

@property (nonatomic, copy, readwrite) NSString *appKey;
@property (nonatomic, copy, readwrite) NSString *appSecret;
@property (nonatomic, copy, readwrite) NSString *appUserId;

@end

NS_ASSUME_NONNULL_END
