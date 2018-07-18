#import <UIKit/UIKit.h>
#import "OpenHABAppDataDelegate.h"
#import "OpenHABDataObject.h"
#import "OpenHABAppDelegate.h"
#import "AFNetworking.h"
#import "NSData+HexString.h"
#import "TSMessage.h"
@import AVFoundation;
@import Firebase;
#import "AFRememberingSecurityPolicy.h"
#import "UIViewController+MMDrawerController.h"

@interface OpenHABAppDelegate (Controlthirdsdk)
- (void)initControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)application:(UIApplication *)application openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication annotation:(id)annotation ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)applicationWillResignActive:(UIApplication *)application ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)applicationDidEnterBackground:(UIApplication *)application ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)applicationWillEnterForeground:(UIApplication *)application ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)applicationDidBecomeActive:(UIApplication *)application ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)applicationWillTerminate:(UIApplication *)application ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)loadSettingsDefaultsControlthirdsdk:(NSString *)ControlThirdSdk;

@end
