//
//  AIQCollection.h
//  AIQApi
//
//  Created by Khang Toh on 9/4/19.
//  Copyright © 2019 AIQ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIQApiResponseDecodable.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIQCollectionsAPIResponse : NSObject <AIQApiResponseDecodable>

@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSInteger total;

@end

@interface AIQCollection : NSObject <AIQApiResponseDecodable, NSCopying>

@property (nonatomic, readonly) NSString *collectionId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *imageUrl;

@end

NS_ASSUME_NONNULL_END
