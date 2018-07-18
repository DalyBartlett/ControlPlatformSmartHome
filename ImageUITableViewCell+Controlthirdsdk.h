#import "GenericUITableViewCell.h"
#import "ImageUITableViewCell.h"
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/SDWebImageDownloader.h>

@interface ImageUITableViewCell (Controlthirdsdk)
- (void)loadWidget:(OpenHABWidget *)widgetToLoad ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)displayWidgetControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)loadImageControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)refreshImage:(NSTimer *)timer ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)willMoveToWindow:(UIWindow *)newWindow ControlThirdSdk:(NSString *)ControlThirdSdk;

@end
