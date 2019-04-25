//
//  AIQBlocks.h
//  AIQApi
//
//  Created by Khang Toh on 5/4/19.
//  Copyright © 2019 AIQ. All rights reserved.
//

#ifndef AIQBlocks_h
#define AIQBlocks_h


@class AIQApiAuthToken, AIQScanAPIResponse;

/**
 A callback to be run with a token response
 
 @param token The Auth token from the response. Will be nil if an error occurs.
 @param error The error returned from the response, or nil if none occurs. @see AIQError.h for possible values.
 */
typedef void (^AIQTokenCompletionBlock)(AIQApiAuthToken * __nullable token, NSError * __nullable error);

/**
 A callback to be run wih a collections response
 
 @param result Array of collections from the response. Will be nil if an error occurs.
 @param error The error returned from the response, or nil if none occurs. @see AIQError.h for possible values.
 */
typedef void (^AIQCollectionsCompletionBlock)(NSArray * __nullable result, NSError * __nullable error);

typedef void (^AIQScanHistoryCompletionBlock)(NSArray * __nullable result, NSError * __nullable error);

typedef void (^AIQApiAuthTokenCompletionBlock)(BOOL result, NSError * __nullable error);

typedef void (^AIQScanCompletionBlock)(AIQScanAPIResponse * __nullable result, NSError * __nullable error);

#endif /* AIQBlocks_h */
