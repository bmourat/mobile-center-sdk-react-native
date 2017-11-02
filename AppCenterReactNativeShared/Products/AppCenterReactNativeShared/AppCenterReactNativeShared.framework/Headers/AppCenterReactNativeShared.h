#import <Foundation/Foundation.h>

@import MobileCenter;

@interface AppCenterReactNativeShared : NSObject

+ (void) setAppSecret: (NSString *)secret;

+ (NSString *) getAppSecret;

+ (void) configureMobileCenter;

+ (MSWrapperSdk *) getWrapperSdk;

+ (void) setWrapperSdk:(MSWrapperSdk *)sdk;

@end
