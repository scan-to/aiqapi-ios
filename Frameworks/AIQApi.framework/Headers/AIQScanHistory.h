//
//  AIQScanHistory.h
//  AIQApi
//
//  Created by Khang Toh on 10/4/19.
//  Copyright © 2019 AIQ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIQApiResponseDecodable.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIQScanHistoryAPIResponse : NSObject <AIQApiResponseDecodable>

@property (nonatomic, readonly) NSArray *result;
@property (nonatomic, readonly) NSInteger total;

@end

@interface AIQScanHistory :  NSObject <AIQApiResponseDecodable, NSCopying>

@property (nonatomic, readonly, assign) NSInteger timestamp;
@property (nonatomic, readonly, assign) BOOL matched;

@property (nonatomic, readonly, nonnull, copy) NSString *scanId;
@property (nonatomic, readonly, nonnull, copy) NSString *triggerId;
@property (nonatomic, readonly, nonnull, copy) NSString *campaignId;
@property (nonatomic, readonly, nonnull, copy) NSString *thumbnailUrl;
@property (nonatomic, readonly, nonnull, copy) NSString *imageUrl;
@property (nonatomic, readonly, nonnull, copy) NSString *payloadUrl;
@property (nonatomic, readonly, nonnull, copy) NSString *lat;
@property (nonatomic, readonly, nonnull, copy) NSString *lng;

@end

NS_ASSUME_NONNULL_END
