//
//  AIQError.h
//  AIQApi
//
//  Created by Khang Toh on 4/4/2019.
//  Copyright © 2019 AIQ. All rights reserved.
//

#import <Foundation/Foundation.h>

// ALL AIQ Errors are defined under the domain AIQDomain
FOUNDATION_EXPORT NSString * __nonnull const AIQDomain;
FOUNDATION_EXPORT NSString * __nonnull const AIQErrorMessageKey;

#if __has_attribute(ns_error_domain)
#define AIQ_ERROR_ENUM(type, name, domain) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wignored-attributes\"") \
NS_ENUM(type, __attribute__((ns_error_domain(domain))) name) \
_Pragma("clang diagnostic pop")
#else
#define AIQ_ERROR_ENUM(type, name, domain) NS_ENUM(type, name)
#endif

typedef AIQ_ERROR_ENUM(NSInteger, AIQErrorCode, AIQDomain) {
    
    // Request
    AIQRequestInvalidUrl = 30,
    AIQRequestInvalidContentTypeHeaderValue = 31,
    AIQRequestInvalidJSONBody = 32,
    AIQRequestInvalidAcceptHeader = 33,
    AIQRequestInvalidRequestMethod = 34,
    AIQRequestAIQUserIdHeaderMissing = 35,
    AIQRequestInvalidDeviceTypeHeader = 36,
    AIQRequestExcess = 37,
    
    // Authentication
    AIQAuthInvalidUserIdPassword = 50,
    AIQAuthUserAcctDeactivated = 51,
    AIQAuthInvalidAppCredentials = 52,
    AIQAuthAppDisabled = 53,
    
    //Authorization
    AIQAuthTokenInvalid = 61,
    AIQAuthInsufficientPermssion = 62,
    AIQAuthSubscriptionLimit = 63,
    AIQAuthTokenMissing = 64,
    
    // Subscription
    AIQSubscriptionExpired = 70,
    AIQSubscriptionExceedLimit = 71,
    AIQVideoLengthExceedLimit = 72,
    
    // Resource specific
    AIQResourceValidationError = 100,
    AIQResourceDoesNotExist = 101,
    AIQResourceAlreadyExist = 102,
    AIQResourceBodyEmpty = 103,
    AIQResourceInUse = 104,
    AIQResourceCannotBeDeleted = 105,
    AIQResourceInvalidMimeType = 106,
    
    // Resource media
    AIQResourceResolutionInvalid = 220,
    AIQResourceMediaAlreadyExist = 221,
    AIQResourceTriggerAlreadyHasAttachment = 222,
    
    // Connection Error
    AIQConnectionEror = 300,
    
    // Not implemented
    AIQMethodNotImplemented = 999
};

NS_ASSUME_NONNULL_BEGIN

@interface NSError (AIQErrorDomain)

/**
 Creates an NSError object from a given API json response.
 
 @param jsonDictionary The root dictionary from the JSON response.
 
 @return An NSError object with the error information from the JSON response,
 or nil if there was no error information included in the JSON dictionary.
 */
+ (nullable NSError *)aiq_errorFromAPIResponse:(nullable NSDictionary *)jsonDictionary;

@end

/**
 This function should not be called directly.
 
 It is used by the SDK when it is built as a static library to force the
 compiler to link in category methods regardless of the integrating
 app's compiler flags.
 */
void linkNSErrorCategory(void);


NS_ASSUME_NONNULL_END
