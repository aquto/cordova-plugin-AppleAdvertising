#import <AdSupport/AdSupport.h>
#import <Cordova/CDV.h>

@interface AppleAdvertising : CDVPlugin

- (void)getIDFA:(CDVInvokedUrlCommand*)command;

- (void)getIDFV:(CDVInvokedUrlCommand*)command;

- (void)isTrackingEnabled:(CDVInvokedUrlCommand*)command;

- (void)getTracking:(CDVInvokedUrlCommand*)command;

@end