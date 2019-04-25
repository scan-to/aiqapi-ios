//
//  AIQScan.h
//  AIQApi
//
//  Created by Khang Toh on 10/4/19.
//  Copyright © 2019 AIQ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIQApiResponseDecodable.h"
#import "AIQApiClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIQScanAPIResponse : NSObject <AIQApiResponseDecodable>

@property (nonatomic, readonly) NSInteger timestamp;
@property (nonatomic, readonly) NSInteger score;
@property (nonatomic, readonly) NSInteger frame;

@property (nonatomic, readonly, copy) NSString *scanId;
@property (nonatomic, readonly, copy) NSString *triggerId;
@property (nonatomic, readonly, copy) NSString *thumbnailUrl;
@property (nonatomic, readonly, copy) NSString *payloadUrl;
@property (nonatomic, readonly, copy) NSString *payloadData;
@property (nonatomic, readonly, copy) NSString *triggerName;

@property (nonatomic, readonly) AIQApiTriggerType triggerType;
@property (nonatomic, readonly) NSInteger triggerFps;

@end

//@interface AIQScan : NSObject <AIQApiResponseDecodable, NSCopying>
//
//@property (nonatomic, readonly) NSInteger timestamp;
//@property (nonatomic, readonly) BOOL matched;
//@property (nonatomic, readonly) float score;
//@property (nonatomic, readonly) NSInteger frame;
//
//@property (nonatomic, readonly, copy) NSString *scanId;
//@property (nonatomic, readonly, copy) NSString *triggerId;
//@property (nonatomic, readonly, copy) NSString *thumbnailUrl;
//@property (nonatomic, readonly, copy) NSString *imageUrl;
//@property (nonatomic, readonly, copy) NSString *payloadUrl;
//@property (nonatomic, readonly, copy) NSString *payloadData;
//
//@end

NS_ASSUME_NONNULL_END
