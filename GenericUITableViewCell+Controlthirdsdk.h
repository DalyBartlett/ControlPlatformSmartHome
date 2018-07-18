#import <UIKit/UIKit.h>
#import "OpenHABWidget.h"
#import "GenericUITableViewCell.h"
#import "OpenHABLinkedPage.h"

@interface GenericUITableViewCell (Controlthirdsdk)
- (void)initWithCoder:(NSCoder *)coder ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)loadWidget:(OpenHABWidget *)widgetToLoad ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)displayWidgetControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)layoutSubviewsControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)namedColorToHexString:(NSString *)namedColor ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)colorFromHexString:(NSString *)hexString ControlThirdSdk:(NSString *)ControlThirdSdk;

@end
